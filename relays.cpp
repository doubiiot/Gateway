#include "relays.h"

Relays::Relays()
{
}
const QByteArray Relays::MSG_RELAY_OPEN1("\x40\x07\x01\x0A\x01\x01\x54", 7);//闭合
const QByteArray Relays::MSG_RELAY_CLOSE1("\x40\x07\x01\x0A\x01\x00\x53", 7);

const QByteArray Relays::MSG_RELAY_OPEN2("\x40\x07\x01\x0A\x02\x02\x56", 7);
const QByteArray Relays::MSG_RELAY_CLOSE2("\x40\x07\x01\x0A\x02\x00\x54", 7);

const QByteArray Relays::MSG_RELAY_OPEN3("\x40\x07\x01\x0A\x04\x04\x5A", 7);
const QByteArray Relays::MSG_RELAY_CLOSE3("\x40\x07\x01\x0A\x04\x00\x56", 7);

const QByteArray Relays::MSG_RELAY_OPEN4("\x40\x07\x01\x0A\x08\x08\x62", 7);
const QByteArray Relays::MSG_RELAY_CLOSE4("\x40\x07\x01\x0A\x08\x00\x5A", 7);
