#ifndef SERIALSERVICE_H
#define SERIALSERVICE_H

#include <QObject>
#include <QByteArray>
#include <QString>
#include <QTimer>
#include <QHostAddress>

#include "posix_qextserialport.h"
#define READTIME 1000

class SerialService : public QObject
{
    Q_OBJECT
public:
    explicit SerialService(QObject *parent = 0);
    int writeToSerial(const QByteArray &byte);//写串口
    bool openCom();//开串口
    bool closeCom();//关串口
    void releaseSerial();
    QTimer* getTimer();
    int getComState();//获取串口状态
    QHostAddress *serverIP;
signals:
    void receiveMsgFromSerial(QByteArray);
public slots:
    void readFromSerial();
private:
    Posix_QextSerialPort *my_com;
    int com_state;//串口状态
    QTimer *read_timer;
};

#endif // SERIALSERVICE_H
