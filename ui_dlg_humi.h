/********************************************************************************
** Form generated from reading ui file 'dlg_humi.ui'
**
** Created: Mon Jul 24 13:46:32 2017
**      by: Qt User Interface Compiler version 4.5.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_DLG_HUMI_H
#define UI_DLG_HUMI_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dlg_humi
{
public:
    QPushButton *Month_humi;
    QPushButton *Day_humi;
    QPushButton *close;

    void setupUi(QDialog *Dlg_humi)
    {
        if (Dlg_humi->objectName().isEmpty())
            Dlg_humi->setObjectName(QString::fromUtf8("Dlg_humi"));
        Dlg_humi->resize(793, 432);
        Month_humi = new QPushButton(Dlg_humi);
        Month_humi->setObjectName(QString::fromUtf8("Month_humi"));
        Month_humi->setGeometry(QRect(450, 390, 92, 27));
        Day_humi = new QPushButton(Dlg_humi);
        Day_humi->setObjectName(QString::fromUtf8("Day_humi"));
        Day_humi->setGeometry(QRect(580, 390, 92, 27));
        close = new QPushButton(Dlg_humi);
        close->setObjectName(QString::fromUtf8("close"));
        close->setGeometry(QRect(700, 390, 92, 27));

        retranslateUi(Dlg_humi);

        QMetaObject::connectSlotsByName(Dlg_humi);
    } // setupUi

    void retranslateUi(QDialog *Dlg_humi)
    {
        Dlg_humi->setWindowTitle(QApplication::translate("Dlg_humi", "Dialog", 0, QApplication::UnicodeUTF8));
        Month_humi->setText(QApplication::translate("Dlg_humi", "\346\234\254\346\234\210\346\225\260\346\215\256", 0, QApplication::UnicodeUTF8));
        Day_humi->setText(QApplication::translate("Dlg_humi", "\346\234\254\346\227\245\346\225\260\346\215\256", 0, QApplication::UnicodeUTF8));
        close->setText(QApplication::translate("Dlg_humi", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(Dlg_humi);
    } // retranslateUi

};

namespace Ui {
    class Dlg_humi: public Ui_Dlg_humi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLG_HUMI_H
