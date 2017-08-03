#include "socketservice.h"
SocketService::SocketService(QObject *parent) :QObject(parent)
{
    serverip = "123.206.193.239";

    secondSocket = new QTcpSocket(this);
    secondSocket -> connectToHost(serverip,6667);//reciv
    QTimer *timer = new QTimer(this);  
    timer->start(1000);
    connect(timer,SIGNAL(timeout()),this, SLOT(heartBag()));
    connect(secondSocket,SIGNAL(connected()),this,SLOT(connectToServer()));
}
void SocketService::heartBag()
{
    secondSocket->write("0");
}
void SocketService::connectToServer()
{
    qDebug()<<"connect success";
    connect(secondSocket,SIGNAL(readyRead()),this,SLOT(dataReceived()));
}
void SocketService::dataReceived()
{
    qDebug()<<"dataReceived";
    while(secondSocket->bytesAvailable()>0)
    {
        QString buf;
        buf = secondSocket->readAll();
        qDebug()<< buf;
        emit receiveMsgFromSocket(buf);
    }
    qDebug()<<"bytesAvailable end";
}

void SocketService::sendMsg(QString m)
{
    tcpSocket = new QTcpSocket(this);
    tcpSocket -> connectToHost(serverip,6666);
    tcpSocket->write(m.toLatin1(),m.length());
    qDebug()<<"send msg success";
}

