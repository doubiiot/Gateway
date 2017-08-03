/********************************************************************************
** Form generated from reading ui file 'newdlg.ui'
**
** Created: Mon Jul 24 13:46:32 2017
**      by: Qt User Interface Compiler version 4.5.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_NEWDLG_H
#define UI_NEWDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_newDlg
{
public:
    QPushButton *pushButton;
    QPushButton *Daydate;
    QPushButton *Mouthdate;

    void setupUi(QDialog *newDlg)
    {
        if (newDlg->objectName().isEmpty())
            newDlg->setObjectName(QString::fromUtf8("newDlg"));
        newDlg->resize(793, 432);
        pushButton = new QPushButton(newDlg);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(700, 400, 91, 31));
        Daydate = new QPushButton(newDlg);
        Daydate->setObjectName(QString::fromUtf8("Daydate"));
        Daydate->setGeometry(QRect(580, 400, 101, 31));
        Mouthdate = new QPushButton(newDlg);
        Mouthdate->setObjectName(QString::fromUtf8("Mouthdate"));
        Mouthdate->setGeometry(QRect(460, 400, 101, 31));

        retranslateUi(newDlg);

        QMetaObject::connectSlotsByName(newDlg);
    } // setupUi

    void retranslateUi(QDialog *newDlg)
    {
        newDlg->setWindowTitle(QApplication::translate("newDlg", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("newDlg", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
        Daydate->setText(QApplication::translate("newDlg", "\346\234\254\346\227\245\346\225\260\346\215\256", 0, QApplication::UnicodeUTF8));
        Mouthdate->setText(QApplication::translate("newDlg", "\346\234\254\346\234\210\346\225\260\346\215\256", 0, QApplication::UnicodeUTF8));
        Q_UNUSED(newDlg);
    } // retranslateUi

};

namespace Ui {
    class newDlg: public Ui_newDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWDLG_H
