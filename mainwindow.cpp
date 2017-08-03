#include "mainwindow.h"
#include "ui_mainwindow.h"
static float light_final = 0.0;
static int temp_final = 0;
static int humi_final = 0;
MainWindow::MainWindow(QWidget *parent) :QMainWindow(parent),ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //ui->btn_motor_stop->setStyleSheet(BACKGROUND_COLOR_GREEN);

    ui->lcd_humi->setNumDigits(8);
    ui->lcd_humi->setPalette(Qt::black);
    ui->lcd_temp->setNumDigits(8);
    ui->lcd_temp->setPalette(Qt::black);
    ui->lcd_lig->setNumDigits(8);
    ui->lcd_lig->setPalette(Qt::black);
    ui->text_log->setReadOnly(true);

    ui->horizontalSlider_pwm->setRange(1, 9);
    ui->horizontalSlider_pwm->setTickPosition(QSlider::TicksRight);
    ui->horizontalSlider_pwm->setPageStep(1);

    pe_black.setColor(QPalette::WindowText,Qt::blue);
    pe_red.setColor(QPalette::WindowText,Qt::red);

    serial_server = new SerialService();
    socket_server = new SocketService();

    temp_humi_light = new Temp_Humi_Light();
    motor = new Motor();
    relays = new Relays();
    touch = new Touch();
    smoke = new Smoke();
    infray = new InfRay();
    pwm = new Pwm();
    ultra = new Ultra();
    shake = new Shake();

    light1 = new Relays();
    light2 = new Relays();
    light3 = new Relays();
    light4 = new Relays();

    dlg = new newDlg();
    dlg2 = new Dlg_humi();
    connect(ui->horizontalSlider_pwm, SIGNAL(valueChanged(int)), this, SLOT(changePwm(int)));
    connect(this->serial_server, SIGNAL(receiveMsgFromSerial(QByteArray)), this, SLOT(processMsgFromSerial(QByteArray)));
    connect(this->socket_server, SIGNAL(receiveMsgFromSocket(QString)), this, SLOT(processMsgFromSocket(QString)));
    connect(this, SIGNAL(addLog(QString)), this, SLOT(showLog(QString)));
    connect(this->socket_server, SIGNAL(showmsg(QString)), this, SLOT(showLog(QString)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::showLog(QString log)
{
    ui->text_log->append(log);
}

void MainWindow::updateTempHumiLig()
{
    QString wsg;
    int temp_now,humi_now;
    float light_now;
    ui->lcd_temp->display(temp_humi_light->getTemperature());
    ui->lcd_humi->display(temp_humi_light->getHumidity());
    ui->lcd_lig->display(QString::number(temp_humi_light->getLight(), 'f', 1));

    light_now = temp_humi_light->getLight();
    if( ((light_now - 20.0)>light_final) || ((light_now + 20.0)<light_final) )
    {
        light_final = light_now;
        wsg = QString("light\n123\n%1\n").arg(QString::number(light_final, 'f', 1));
        socket_server->sendMsg(wsg);
    }

    temp_now = temp_humi_light->getTemperature();
    if(temp_now != temp_final)
    {
        temp_final = temp_now;
        wsg = QString("temperature\n123\n%1\n").arg(temp_final);
        socket_server->sendMsg(wsg);
    }
    humi_now = temp_humi_light->getHumidity();
    if(humi_now != humi_final)
    {
        humi_final = humi_now;
        wsg = QString("wet\n123\n%1\n").arg(humi_final);
        socket_server->sendMsg(wsg);
    }

}
void MainWindow::processMsgFromSerial(QByteArray msg)
{
    if(msg.length() < 6)
        return;
    //温湿亮度
    if(msg[3] == 0x02 && msg[4] == 0x01)
    {
        temp_humi_light->setValue(msg);
        updateTempHumiLig();
    }
    //触摸事件
    else if(msg[3] == 0x07 && msg[4] == 0x01)
    {
        if(msg[5] == 0x01)
        {
            touch->setState(1);
            ui->label_touch->setPalette(pe_red);
            ui->label_touch->setText("touch");
            socket_server->sendMsg("touch");
        }
        else if(msg[5] == 0x00)
        {
            touch->setState(0);
            ui->label_touch->setPalette(pe_black);
            ui->label_touch->setText("no touch");
        }
    }
    //烟雾事件
    else if(msg[3] == 0x04 && msg[4] == 0x01)
    {
        if(msg[5] == 0x01)
        {
            smoke->setState(1);
            ui->label_fire->setPalette(pe_red);
            ui->label_fire->setText("smoke");
            socket_server->sendMsg("smoke");
        }
        else if(msg[5] == 0x00)
        {
            smoke->setState(0);
            ui->label_fire->setPalette(pe_black);
            ui->label_fire->setText("safe");
        }
    }
    //热释红外事件
    else if(msg[3] == 0x05 && msg[4] == 0x01)
    {
        if(msg[5] == 0x01)
        {
            infray->setState(1);
            ui->label_inf_ray->setPalette(pe_red);
            ui->label_inf_ray->setText("signal");
        }
        else if(msg[5] == 0x00)
        {
            infray->setState(0);
            ui->label_inf_ray->setPalette(pe_black);
            ui->label_inf_ray->setText("no signal");
        }
    }
    //振动事件
    else if(msg[3] == 0x03 && msg[4] == 0x01)
    {
        if(msg[5] == 0x01)
        {
            shake->setState(1);
            ui->label_shake->setPalette(pe_red);
            ui->label_shake->setText("shake");
        }
        else if(msg[5] == 0x00)
        {
            shake->setState(0);
            ui->label_shake->setPalette(pe_black);
            ui->label_shake->setText("no shake");
        }
    }
    //超声波事件
    else if(msg[3] == 0x08 && msg[4] == 0x01)
    {
        int len = msg[5] * 256 + msg[6];
        //ui->label_ultra->setText(QString::number(len));
        //ultra->setState(len);
    }
    //emit addLog(msg.toHex());
}

void MainWindow::processMsgFromSocket(QString msg)
{

    /*测试用，无协议
    if(msg == "0")
        changeMotor(0);
    if(msg == "1")
        changeMotor(1);
    if(msg == "2")
        changeMotor(2);
    */
    if(msg == "light1")
        changeRelay(light1->getState(),1);
    if(msg == "light2")
        changeRelay(light2->getState(),2);
    if(msg == "light3")
        changeRelay(light3->getState(),3);
    if(msg == "light4")
        changeRelay(light4->getState(),4);
    if(msg=="test")
        emit addLog("recevied");

}

//调光
void MainWindow::changePwm(int value)
{
    pwm->setState(value);
    unsigned char range = Pwm::RANGE[value];
    Pwm::MSG_PWM[4] = range;
    Pwm::MSG_PWM[5] = 0x50 + range;
    if(-1 == serial_server->writeToSerial(Pwm::MSG_PWM))
    {
        emit addLog("failed");
        return;
    }
    emit addLog("success");
}
//灯光
void MainWindow::on_light1_b_clicked()
{
    changeRelay(light1->getState(),1);
}

void MainWindow::on_light2_b_clicked()
{
    changeRelay(light2->getState(),2);
}

void MainWindow::on_light3_b_clicked()
{
    changeRelay(light3->getState(),3);
}

void MainWindow::on_light4_b_clicked()
{
    changeRelay(light4->getState(),4);
}

//继电器
void MainWindow::on_btn_relay_clicked()
{
    //changeRelay(relays->getState());
}


void MainWindow::changeRelay(int state,int m)
{

    if(m == 1)
    {
        if(1 == state)
        {
            if(-1 == serial_server->writeToSerial(Relays::MSG_RELAY_CLOSE1))
            {
                emit addLog("light1 failed");
                return;
            }
            light1->setState(0);
            ui->light1_b->setStyleSheet(BACKGROUND_COLOR_WHITE);
            ui->light1_b->setText("打开");
            emit addLog("light1 success");
        }
        else if(0 == state)
        {
            if(-1 == serial_server->writeToSerial(Relays::MSG_RELAY_OPEN1))
            {
                emit addLog("light1 failed");
                return;
            }
            light1->setState(1);
            ui->light1_b->setStyleSheet(BACKGROUND_COLOR_GREEN);
            ui->light1_b->setText("关闭");
            emit addLog("light1 success");
        }
    }
    else if(m == 2)
    {
        if(1 == state)
        {
            if(-1 == serial_server->writeToSerial(Relays::MSG_RELAY_CLOSE2))
            {
                emit addLog("light2 failed");
                return;
            }
            light2->setState(0);
            ui->light2_b->setStyleSheet(BACKGROUND_COLOR_WHITE);
            ui->light2_b->setText("打开");
            emit addLog("light2 success");
        }
        else if(0 == state)
        {
            if(-1 == serial_server->writeToSerial(Relays::MSG_RELAY_OPEN2))
            {
                emit addLog("light2 failed");
                return;
            }
            light2->setState(1);
            ui->light2_b->setStyleSheet(BACKGROUND_COLOR_GREEN);
            ui->light2_b->setText("关闭");
            emit addLog("light2 success");
        }
    }
    else if(m == 3)
    {
        if(1 == state)
        {
            if(-1 == serial_server->writeToSerial(Relays::MSG_RELAY_CLOSE3))
            {
                emit addLog("light3 failed");
                return;
            }
            light3->setState(0);
            ui->light3_b->setStyleSheet(BACKGROUND_COLOR_WHITE);
            ui->light3_b->setText("打开");
            emit addLog("light3 success");
        }
        else if(0 == state)
        {
            if(-1 == serial_server->writeToSerial(Relays::MSG_RELAY_OPEN3))
            {
                emit addLog("light3 failed");
                return;
            }
            light3->setState(1);
            ui->light3_b->setStyleSheet(BACKGROUND_COLOR_GREEN);
            ui->light3_b->setText("close");
            emit addLog("light3 success");
        }
    }
    else if(m == 4)
    {
        if(1 == state)
        {
            if(-1 == serial_server->writeToSerial(Relays::MSG_RELAY_CLOSE4))
            {
                emit addLog("light4 failed");
                return;
            }
            light4->setState(0);
            ui->light4_b->setStyleSheet(BACKGROUND_COLOR_WHITE);
            ui->light4_b->setText("煤气已关");
            emit addLog("light4 success");
        }
        else if(0 == state)
        {
            if(-1 == serial_server->writeToSerial(Relays::MSG_RELAY_OPEN4))
            {
                emit addLog("light4 failed");
                return;
            }
            light4->setState(1);
            ui->light4_b->setStyleSheet(BACKGROUND_COLOR_GREEN);
            ui->light4_b->setText("关煤气");
            emit addLog("light4 success");
        }
    }

    /////////////////////////////
}

void MainWindow::on_btn_serial_clicked()
{
    changeSerial(serial_server->getComState());
}
void MainWindow::changeSerial(int state)
{
    //对传入的参数取反操作
    if(1 == state)
    {
        if(serial_server->closeCom())
        {
            ui->btn_serial->setText("open");
            ui->btn_serial->setStyleSheet(BACKGROUND_COLOR_WHITE);
            emit addLog("close serial port success");
        }
        else
            emit addLog("close serial port failed");

    }
    else if(0 == state)
    {
        if(serial_server->openCom())
        {
            ui->btn_serial->setText("close");
            ui->btn_serial->setStyleSheet(BACKGROUND_COLOR_GREEN);
            emit addLog("open serial port success");
        }
        else
            emit addLog("open serial port failed");

    }
}
//电机转动
void MainWindow::on_btn_motor_f_clicked()
{
    changeMotor(1);
}

void MainWindow::on_btn_motor_b_clicked()
{
    changeMotor(2);
}

void MainWindow::on_btn_motor_stop_clicked()
{
    changeMotor(0);
}

void MainWindow::changeMotor(int state)
{
    if(0 == state)
    {
        if(-1 == serial_server->writeToSerial(Motor::MSG_MOTOR_STOP))
        {
            emit addLog("failed");
            return;
        }
        motor->setState(0);
        //ui->btn_motor_stop->setStyleSheet(BACKGROUND_COLOR_GREEN);
        //ui->btn_motor_b->setStyleSheet(BACKGROUND_COLOR_WHITE);
        //ui->btn_motor_f->setStyleSheet(BACKGROUND_COLOR_WHITE);
        emit addLog("success");
    }
    else if(1 == state)
    {
        if(-1 == serial_server->writeToSerial(Motor::MSG_MOTOR_FORE))
        {
            emit addLog("failed");
            return;
        }
        motor->setState(1);
        //ui->btn_motor_f->setStyleSheet(BACKGROUND_COLOR_GREEN);
        //ui->btn_motor_b->setStyleSheet(BACKGROUND_COLOR_WHITE);
        //ui->btn_motor_stop->setStyleSheet(BACKGROUND_COLOR_WHITE);
        emit addLog("success");
    }
    else if(2 == state)
    {
        if(-1 == serial_server->writeToSerial(Motor::MSG_MOTOR_BACK))
        {
            emit addLog("failed");
            return;
        }
        motor->setState(2);
        //ui->btn_motor_b->setStyleSheet(BACKGROUND_COLOR_GREEN);
        //ui->btn_motor_f->setStyleSheet(BACKGROUND_COLOR_WHITE);
        //ui->btn_motor_stop->setStyleSheet(BACKGROUND_COLOR_WHITE);
        emit addLog("success");
    }
}


void MainWindow::on_pushButton_clicked()
{
    //QDialog *dlg = new QDialog(this);
    dlg->show();
}

void MainWindow::on_pushButton2_clicked()
{
    dlg2->show();
}
