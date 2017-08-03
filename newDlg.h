#ifndef NEWDLG_H
#define NEWDLG_H

#include <QDialog>
#include <QPainter>
#include <QTimer>
#include <QVector>
namespace Ui {
class newDlg;
}

class newDlg : public QDialog
{
    Q_OBJECT
public:
    explicit newDlg(QWidget *parent = 0);
    ~newDlg();
private slots:
    void on_pushButton_clicked();//退出
    void paintEvent(QPaintEvent *);//绘图模块
    void on_Daydate_clicked();//日数据
    void on_Mouthdate_clicked();//月数据
private:
    Ui::newDlg *ui;
    float tempData[25];
    int Md;//日月
};

#endif // NEWDLG_H
