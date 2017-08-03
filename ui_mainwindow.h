/********************************************************************************
** Form generated from reading ui file 'mainwindow.ui'
**
** Created: Mon Jul 24 13:46:32 2017
**      by: Qt User Interface Compiler version 4.5.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCalendarWidget>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QFrame *frame;
    QPushButton *btn_serial;
    QLabel *label_12;
    QFrame *frame_5;
    QFrame *frame_7;
    QLabel *label_touch;
    QLabel *label_4;
    QFrame *frame_6;
    QFrame *frame_8;
    QLabel *label_fire;
    QLabel *label_6;
    QFrame *frame_9;
    QLabel *label_5;
    QFrame *frame_10;
    QLabel *label_inf_ray;
    QFrame *frame_11;
    QLabel *label_7;
    QFrame *frame_12;
    QLabel *label_shake;
    QFrame *frame_17;
    QLCDNumber *lcd_temp;
    QPushButton *pushButton;
    QFrame *frame_18;
    QLCDNumber *lcd_humi;
    QPushButton *pushButton2;
    QFrame *frame_19;
    QLabel *label_3;
    QLCDNumber *lcd_lig;
    QFrame *frame_4;
    QLabel *label_8;
    QSlider *horizontalSlider_pwm;
    QFrame *frame_13;
    QLabel *label_9;
    QPushButton *light1_b;
    QFrame *frame_14;
    QPushButton *light2_b;
    QLabel *label_10;
    QFrame *frame_15;
    QPushButton *light3_b;
    QLabel *label_11;
    QTextEdit *text_log;
    QFrame *frame_16;
    QLabel *label_14;
    QPushButton *light4_b;
    QCalendarWidget *calendarWidget;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menuHome;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(793, 432);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(224, 232, 250);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(380, 50, 191, 81));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        btn_serial = new QPushButton(frame);
        btn_serial->setObjectName(QString::fromUtf8("btn_serial"));
        btn_serial->setGeometry(QRect(110, 25, 71, 31));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        btn_serial->setFont(font);
        btn_serial->setAutoFillBackground(false);
        btn_serial->setStyleSheet(QString::fromUtf8(""));
        label_12 = new QLabel(frame);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(10, 30, 71, 31));
        QFont font1;
        font1.setPointSize(12);
        label_12->setFont(font1);
        frame_5 = new QFrame(centralWidget);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setGeometry(QRect(190, 130, 191, 81));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        frame_7 = new QFrame(frame_5);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setGeometry(QRect(110, 25, 71, 31));
        QFont font2;
        font2.setPointSize(9);
        frame_7->setFont(font2);
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        label_touch = new QLabel(frame_7);
        label_touch->setObjectName(QString::fromUtf8("label_touch"));
        label_touch->setGeometry(QRect(5, 5, 61, 21));
        QFont font3;
        font3.setPointSize(9);
        font3.setBold(true);
        font3.setWeight(75);
        label_touch->setFont(font3);
        label_4 = new QLabel(frame_5);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(5, 25, 91, 41));
        label_4->setFont(font1);
        frame_6 = new QFrame(centralWidget);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setGeometry(QRect(190, 50, 191, 81));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        frame_8 = new QFrame(frame_6);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        frame_8->setGeometry(QRect(110, 25, 71, 31));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        label_fire = new QLabel(frame_8);
        label_fire->setObjectName(QString::fromUtf8("label_fire"));
        label_fire->setGeometry(QRect(5, 5, 61, 21));
        label_fire->setFont(font3);
        label_6 = new QLabel(frame_6);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(5, 25, 91, 41));
        label_6->setFont(font1);
        frame_9 = new QFrame(centralWidget);
        frame_9->setObjectName(QString::fromUtf8("frame_9"));
        frame_9->setGeometry(QRect(190, 210, 191, 81));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        label_5 = new QLabel(frame_9);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(5, 25, 91, 41));
        label_5->setFont(font1);
        frame_10 = new QFrame(frame_9);
        frame_10->setObjectName(QString::fromUtf8("frame_10"));
        frame_10->setGeometry(QRect(110, 25, 71, 31));
        frame_10->setFrameShape(QFrame::StyledPanel);
        frame_10->setFrameShadow(QFrame::Raised);
        label_inf_ray = new QLabel(frame_10);
        label_inf_ray->setObjectName(QString::fromUtf8("label_inf_ray"));
        label_inf_ray->setGeometry(QRect(5, 5, 61, 21));
        QFont font4;
        font4.setPointSize(8);
        font4.setBold(true);
        font4.setWeight(75);
        label_inf_ray->setFont(font4);
        frame_11 = new QFrame(centralWidget);
        frame_11->setObjectName(QString::fromUtf8("frame_11"));
        frame_11->setGeometry(QRect(190, 290, 191, 81));
        frame_11->setFrameShape(QFrame::StyledPanel);
        frame_11->setFrameShadow(QFrame::Raised);
        label_7 = new QLabel(frame_11);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(5, 25, 91, 41));
        label_7->setFont(font1);
        frame_12 = new QFrame(frame_11);
        frame_12->setObjectName(QString::fromUtf8("frame_12"));
        frame_12->setGeometry(QRect(110, 25, 71, 31));
        frame_12->setFont(font3);
        frame_12->setFrameShape(QFrame::StyledPanel);
        frame_12->setFrameShadow(QFrame::Raised);
        label_shake = new QLabel(frame_12);
        label_shake->setObjectName(QString::fromUtf8("label_shake"));
        label_shake->setGeometry(QRect(5, 5, 61, 21));
        label_shake->setFont(font3);
        frame_17 = new QFrame(centralWidget);
        frame_17->setObjectName(QString::fromUtf8("frame_17"));
        frame_17->setGeometry(QRect(0, 0, 111, 51));
        frame_17->setFrameShape(QFrame::StyledPanel);
        frame_17->setFrameShadow(QFrame::Raised);
        lcd_temp = new QLCDNumber(frame_17);
        lcd_temp->setObjectName(QString::fromUtf8("lcd_temp"));
        lcd_temp->setGeometry(QRect(40, 0, 71, 51));
        QFont font5;
        font5.setPointSize(10);
        lcd_temp->setFont(font5);
        pushButton = new QPushButton(frame_17);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(1, 5, 40, 41));
        frame_18 = new QFrame(centralWidget);
        frame_18->setObjectName(QString::fromUtf8("frame_18"));
        frame_18->setGeometry(QRect(110, 0, 111, 51));
        frame_18->setFrameShape(QFrame::StyledPanel);
        frame_18->setFrameShadow(QFrame::Raised);
        lcd_humi = new QLCDNumber(frame_18);
        lcd_humi->setObjectName(QString::fromUtf8("lcd_humi"));
        lcd_humi->setGeometry(QRect(40, 0, 71, 51));
        pushButton2 = new QPushButton(frame_18);
        pushButton2->setObjectName(QString::fromUtf8("pushButton2"));
        pushButton2->setGeometry(QRect(1, 5, 40, 41));
        frame_19 = new QFrame(centralWidget);
        frame_19->setObjectName(QString::fromUtf8("frame_19"));
        frame_19->setGeometry(QRect(220, 0, 111, 51));
        frame_19->setFrameShape(QFrame::StyledPanel);
        frame_19->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(frame_19);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(2, 10, 31, 31));
        QFont font6;
        font6.setPointSize(12);
        font6.setBold(true);
        font6.setWeight(75);
        label_3->setFont(font6);
        lcd_lig = new QLCDNumber(frame_19);
        lcd_lig->setObjectName(QString::fromUtf8("lcd_lig"));
        lcd_lig->setGeometry(QRect(40, 0, 71, 51));
        frame_4 = new QFrame(centralWidget);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setGeometry(QRect(330, 0, 241, 51));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        label_8 = new QLabel(frame_4);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(5, 5, 51, 45));
        label_8->setFont(font1);
        horizontalSlider_pwm = new QSlider(frame_4);
        horizontalSlider_pwm->setObjectName(QString::fromUtf8("horizontalSlider_pwm"));
        horizontalSlider_pwm->setGeometry(QRect(60, 10, 161, 31));
        horizontalSlider_pwm->setOrientation(Qt::Horizontal);
        frame_13 = new QFrame(centralWidget);
        frame_13->setObjectName(QString::fromUtf8("frame_13"));
        frame_13->setGeometry(QRect(0, 50, 191, 81));
        frame_13->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);"));
        frame_13->setFrameShape(QFrame::StyledPanel);
        frame_13->setFrameShadow(QFrame::Raised);
        label_9 = new QLabel(frame_13);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(15, 30, 51, 20));
        label_9->setFont(font1);
        light1_b = new QPushButton(frame_13);
        light1_b->setObjectName(QString::fromUtf8("light1_b"));
        light1_b->setGeometry(QRect(110, 25, 71, 31));
        light1_b->setFont(font);
        light1_b->setStyleSheet(QString::fromUtf8(""));
        frame_14 = new QFrame(centralWidget);
        frame_14->setObjectName(QString::fromUtf8("frame_14"));
        frame_14->setGeometry(QRect(0, 130, 191, 81));
        frame_14->setFrameShape(QFrame::StyledPanel);
        frame_14->setFrameShadow(QFrame::Raised);
        light2_b = new QPushButton(frame_14);
        light2_b->setObjectName(QString::fromUtf8("light2_b"));
        light2_b->setGeometry(QRect(110, 25, 71, 31));
        light2_b->setFont(font);
        label_10 = new QLabel(frame_14);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(15, 25, 51, 30));
        label_10->setFont(font1);
        frame_15 = new QFrame(centralWidget);
        frame_15->setObjectName(QString::fromUtf8("frame_15"));
        frame_15->setGeometry(QRect(0, 210, 191, 81));
        frame_15->setFrameShape(QFrame::StyledPanel);
        frame_15->setFrameShadow(QFrame::Raised);
        light3_b = new QPushButton(frame_15);
        light3_b->setObjectName(QString::fromUtf8("light3_b"));
        light3_b->setGeometry(QRect(110, 25, 71, 31));
        light3_b->setFont(font);
        label_11 = new QLabel(frame_15);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(15, 25, 40, 20));
        label_11->setFont(font1);
        text_log = new QTextEdit(centralWidget);
        text_log->setObjectName(QString::fromUtf8("text_log"));
        text_log->setGeometry(QRect(570, 0, 211, 211));
        frame_16 = new QFrame(centralWidget);
        frame_16->setObjectName(QString::fromUtf8("frame_16"));
        frame_16->setGeometry(QRect(0, 290, 191, 81));
        frame_16->setFrameShape(QFrame::StyledPanel);
        frame_16->setFrameShadow(QFrame::Raised);
        label_14 = new QLabel(frame_16);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(15, 25, 51, 31));
        label_14->setFont(font1);
        light4_b = new QPushButton(frame_16);
        light4_b->setObjectName(QString::fromUtf8("light4_b"));
        light4_b->setGeometry(QRect(110, 26, 71, 31));
        light4_b->setFont(font);
        calendarWidget = new QCalendarWidget(centralWidget);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        calendarWidget->setGeometry(QRect(570, 220, 211, 161));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(380, 130, 191, 241));
        textEdit->setStyleSheet(QString::fromUtf8("border-color: rgb(224, 232, 250);"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 793, 25));
        menuHome = new QMenu(menuBar);
        menuHome->setObjectName(QString::fromUtf8("menuHome"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuHome->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Icare", 0, QApplication::UnicodeUTF8));
        btn_serial->setText(QApplication::translate("MainWindow", "open", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindow", "\345\274\200\345\220\257\344\270\262\345\217\243", 0, QApplication::UnicodeUTF8));
        label_touch->setText(QApplication::translate("MainWindow", "\346\227\240\350\247\246\346\221\270", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "\350\247\246\346\221\270\344\274\240\346\204\237\345\231\250", 0, QApplication::UnicodeUTF8));
        label_fire->setText(QApplication::translate("MainWindow", "\346\227\240\347\203\237\351\233\276", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "\347\203\237\351\233\276\344\274\240\346\204\237\345\231\250", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "\347\272\242\345\244\226\344\274\240\346\204\237\345\231\250", 0, QApplication::UnicodeUTF8));
        label_inf_ray->setText(QApplication::translate("MainWindow", "\346\227\240\344\272\272\345\221\230\346\264\273\345\212\250", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "\346\214\257\345\212\250\344\274\240\346\204\237\345\231\250", 0, QApplication::UnicodeUTF8));
        label_shake->setText(QApplication::translate("MainWindow", "\346\227\240\346\214\257\345\212\250", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "\346\270\251\345\272\246", 0, QApplication::UnicodeUTF8));
        pushButton2->setText(QApplication::translate("MainWindow", "\346\271\277\345\272\246", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "\344\272\256\345\272\246", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "\350\260\203\345\205\211\347\201\257", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "\345\256\242\345\216\205\347\201\257", 0, QApplication::UnicodeUTF8));
        light1_b->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200", 0, QApplication::UnicodeUTF8));
        light2_b->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "\345\215\247\345\256\244\347\201\257", 0, QApplication::UnicodeUTF8));
        light3_b->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindow", "\351\243\216\346\211\207", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("MainWindow", "\347\205\244\346\260\224", 0, QApplication::UnicodeUTF8));
        light4_b->setText(QApplication::translate("MainWindow", "\347\205\244\346\260\224\345\267\262\345\205\263", 0, QApplication::UnicodeUTF8));
        textEdit->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#c54848;\">\346\210\221\344\273\254\345\234\250\346\202\250\350\272\253\350\276\271\351\231\252\344\274\264\346\202\250</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#c54848;\">\351\231\252\346\202\250\345\272\246\350\277\207</span></"
                        "p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#c54848;\">\346\257\217\344\270\200\344\270\252</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#c54848;\">\347\276\216\345\245\275\347\232\204\346\227\245\345\255\220</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; color:#c54848;\"></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; color:#c54848;\"></p>\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#c54848;\">             </span></p>"
                        "\n"
"<p align=\"right\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; color:#c54848;\"></p>\n"
"<p align=\"right\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; color:#c54848;\"></p>\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#c54848;\"> by TeenDream</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        menuHome->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
