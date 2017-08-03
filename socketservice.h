#ifndef SOCKETSERVICE_H
#define SOCKETSERVICE_H

#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>
#include <QHostAddress>
#include <QList>
#include <qtimer.h>
#include <QByteArray>



#include "serialservice.h"
#include "temp_humi_light.h"
#include "motor.h"
#include "relays.h"
#include "infray.h"
#include "pwm.h"


class SocketService : public QObject
{
    Q_OBJECT
public:
    explicit SocketService(QObject *parent = 0);
    
signals:
    void receiveMsgFromSocket(QString);//
public slots:
    void sendMsg(QString m);//发送数据
    void dataReceived();//数据接收
    void heartBag();//心跳包
    void connectToServer();//连接服务器
private:
    QTcpServer *server;//服务器端

    QTcpSocket *tcpSocket;
    QTcpSocket *secondSocket;//客户端
    QList<QTcpSocket*> clients_list;
    char *serverip;//ip
    int port;//端口
};

#endif // SOCKETSERVICE_H
