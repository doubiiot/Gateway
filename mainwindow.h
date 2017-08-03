#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDebug>
#include <QMainWindow>
#include <QByteArray>
#include <QString>
#include <QDialog>

#include "serialservice.h"
#include "socketservice.h"
#include "temp_humi_light.h"
#include "motor.h"
#include "relays.h"
#include "touch.h"
#include "smoke.h"
#include "infray.h"
#include "shake.h"
#include "pwm.h"
#include "ultra.h"
#include "newDlg.h"
#include "Dlg_humi.h"

#define BACKGROUND_COLOR_GREEN "background-color: rgb(136, 160, 216);"
#define BACKGROUND_COLOR_WHITE "background-color: rgb(255, 255, 255);"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void updateTempHumiLig();
    void changeMotor(int);
    void changeRelay(int, int);
    void changeSerial(int);

signals:
    void addLog(QString);

private slots:
    void processMsgFromSerial(QByteArray);

    void processMsgFromSocket(QString);

    void showLog(QString);

    void changePwm(int);

    void on_btn_motor_f_clicked();

    void on_btn_motor_b_clicked();

    void on_btn_motor_stop_clicked();

    void on_btn_relay_clicked();

    void on_btn_serial_clicked();


    void on_light1_b_clicked();

    void on_light2_b_clicked();

    void on_light3_b_clicked();

    void on_light4_b_clicked();


    void on_pushButton_clicked();

    void on_pushButton2_clicked();

private:
    Ui::MainWindow *ui;
    SerialService *serial_server;
    SocketService *socket_server;

    Temp_Humi_Light *temp_humi_light;
    Motor *motor;
    Relays *relays;
    Touch *touch;
    Smoke *smoke;
    InfRay *infray;
    Shake *shake;
    Pwm *pwm;
    Ultra * ultra;

    Relays *light1;
    Relays *light2;
    Relays *light3;
    Relays *light4;

    QPalette pe_red;
    QPalette pe_black;

    newDlg *dlg;
    Dlg_humi *dlg2;


};

#endif // MAINWINDOW_H
