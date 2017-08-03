#-------------------------------------------------
# @make: make clean qmake-arm make
# @running: ./GateWay -qws
#-------------------------------------------------

QT       += core gui network

TARGET = GateWay
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    posix_qextserialport.cpp \
    qextserialbase.cpp \
    socketservice.cpp \
    serialservice.cpp \
    temp_humi_light.cpp \
    motor.cpp \
    relays.cpp \
    infray.cpp \
    pwm.cpp \
    enddevice.cpp \
    shake.cpp \
    smoke.cpp \
    touch.cpp \
    ultra.cpp \
    newDlg.cpp \
    Dlg_humi.cpp

HEADERS  += mainwindow.h \
    posix_qextserialport.h \
    qextserialbase.h \
    socketservice.h \
    serialservice.h \
    temp_humi_light.h \
    motor.h \
    relays.h \
    infray.h \
    pwm.h \
    enddevice.h \
    ultra.h \
    shake.h \
    smoke.h \
    touch.h \
    newDlg.h \
    Dlg_humi.h

FORMS    += mainwindow.ui \
    newdlg.ui \
    dlg_humi.ui
