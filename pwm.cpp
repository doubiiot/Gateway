#include "pwm.h"

Pwm::Pwm()
{
}

QByteArray Pwm::RANGE("\x00\x01\x02\x03\x04\x05\x06\x07\x08\x09", 10);
QByteArray Pwm::MSG_PWM("\x40\x06\x01\x09\x00\x50", 6);
