#ifndef RELAYS_H
#define RELAYS_H

#include "enddevice.h"

class Relays : public EndDevice
{
public:
    explicit Relays();
    QByteArray relay_msg[4];

public:
    const static QByteArray MSG_RELAY_CLOSE1;
    const static QByteArray MSG_RELAY_OPEN1;

    const static QByteArray MSG_RELAY_OPEN2;
    const static QByteArray MSG_RELAY_CLOSE2;

    const static QByteArray MSG_RELAY_OPEN3;
    const static QByteArray MSG_RELAY_CLOSE3;

    const static QByteArray MSG_RELAY_OPEN4;
    const static QByteArray MSG_RELAY_CLOSE4;

};

#endif // RELAYS_H
