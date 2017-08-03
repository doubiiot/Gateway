#ifndef DLG_HUMI_H
#define DLG_HUMI_H

#include <QDialog>
#include <QVector>
#include <QPainter>
#include <QTimer>

namespace Ui {
class Dlg_humi;
}

class Dlg_humi : public QDialog
{
    Q_OBJECT
    
public:
    explicit Dlg_humi(QWidget *parent = 0);
    ~Dlg_humi();
private slots:
     void paintEvent(QPaintEvent *);
    void on_close_clicked();
    void on_Day_humi_clicked();
    void on_Month_humi_clicked();
private:
    int Md;
    Ui::Dlg_humi *ui;
};

#endif // DLG_HUMI_H
