#include "Dlg_humi.h"
#include "ui_dlg_humi.h"

Dlg_humi::Dlg_humi(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dlg_humi)
{
    ui->setupUi(this);
}

Dlg_humi::~Dlg_humi()
{
    delete ui;
}

void Dlg_humi::paintEvent(QPaintEvent *)
{
    int xlocation;
    int ylocation;

    QPainter painter(this);
    QPen pen; //画笔
    //pen.setColor(QColor(255, 0, 0));
    QBrush brush(QColor(0, 249, 137, 244)); //画刷
    painter.setPen(pen); //添加画笔
    painter.setBrush(brush); //添加画刷

    painter.drawLine(QPointF(30, 0), QPointF(30, 400));//y
    painter.drawLine(QPointF(30, 0), QPointF(20, 10));//y
    painter.drawLine(QPointF(30, 0), QPointF(40, 10));//y
    painter.drawLine(QPointF(0, 350), QPointF(750, 350));//x
    painter.drawLine(QPointF(740, 340), QPointF(750, 350));//x
    painter.drawLine(QPointF(740, 360), QPointF(750, 350));//x


    for(int m=0;m<10;m++)
    {
        ylocation = 350-m*35;
        painter.drawLine(QPointF(25, ylocation), QPointF(35,ylocation));
        if(m!=0)
        painter.drawText(QPointF(12,ylocation+15),
                         QString::number((int)(m*10)));
    }
    if(Md == 1)
    {
        int sum = 0;
        QVector<float> tempData(25);
        for(int i=0;i<24;i++)
        {
            xlocation = (730/24)*i+30;
            painter.drawLine(QPointF(xlocation,345), QPointF(xlocation, 355));
            painter.drawText(QPointF(xlocation-14,365),
                             QString::number((int)i));
        }
        for(int b = 0;b<24;b++)
        {
            tempData[b] = 1+b*2;
            sum +=tempData[b];
        }
        sum = sum/23;
        int x=0;
        for(x;x<23;x++)
        {
            int count = tempData[x] / 10 * 35;
            painter.drawRect(730/24*x+30,350-count, 730/24, count); //绘制矩形
            painter.drawText(QPointF(730/24*x+38,345-count),
                             QString::number((int)tempData[x]));
        }

        QPen penAve;
        penAve.setColor(Qt::red);//选择红色
        penAve.setWidth(2);
        penAve.setStyle(Qt::DotLine);//线条类型为虚线
        painter.setPen(penAve);
        painter.drawLine(QPointF(30,350-7*sum), QPointF(740, 350-7*sum));
        painter.drawText(QPointF(715,345-7*sum),
                         QString::number((int)sum));
    }
    else if(Md == 2)
    {
        int sum = 0;
        QVector<float> tempMonth(30);
        int x=0;
        for(int b = 0;b<30;b++)
        {
            tempMonth[b] = b+30;
            sum+=tempMonth[b];
        }
        sum = sum / 30;

        for(int i=0;i<31;i++)
        {
            xlocation = (730/30)*i+30;
            painter.drawLine(QPointF(xlocation,345), QPointF(xlocation, 355));
            painter.drawText(QPointF(xlocation-14,365),
                             QString::number((int)i));
        }
        for(x;x<29;x++)
        {
            int count = tempMonth[x] / 10 * 35;
            painter.drawRect(730/30*x+30,350-count, 732/30, count); //绘制矩形
            painter.drawText(QPointF(730/30*x+36,345-count),
                             QString::number((int)tempMonth[x]));
        }

        QPen penAve;
        penAve.setColor(Qt::red);//选择红色
        penAve.setWidth(2);
        penAve.setStyle(Qt::DotLine);//线条类型为虚线
        painter.setPen(penAve);
        painter.drawLine(QPointF(30,350-3.5*sum), QPointF(740, 350-3.5*sum));
        painter.drawText(QPointF(715,345-3.5*sum),
                         QString::number((int)sum));

    }
    else
    {
        QString str = "Please choose a button";
        painter.drawText(QPointF(350,175),str);
    }

}
void Dlg_humi::on_close_clicked()
{
    QDialog *dlg = new QDialog(this);
    this->close();
}

void Dlg_humi::on_Day_humi_clicked()
{
    Md = 1;
    this->repaint();
}

void Dlg_humi::on_Month_humi_clicked()
{
    Md = 2;
    this->repaint();
}
