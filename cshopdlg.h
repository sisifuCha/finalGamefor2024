#ifndef CSHOPDLG_H
#define CSHOPDLG_H
#include<QPainter>
#include <QWidget>
#include"cgamedlg.h"
#include <QWidget>

namespace Ui {
class CShopdlg;
}

class CShopdlg : public QWidget
{
    Q_OBJECT

public:
    explicit CShopdlg(CGameDlg* cgamedlg, QWidget *parent = nullptr);
    ~CShopdlg();

protected:
    void paintEvent(QPaintEvent *event) override {
        Q_UNUSED(event);

        QPainter painter(this);
        QPixmap backgroundPixmap(":/back9.jpg");
        painter.drawPixmap(0, 0, width(), height(), backgroundPixmap);

        // 如果你还想在背景上绘制其他内容，可以在这里继续添加绘制代码
    }
private slots:

    void on_buyBoom_clicked();

    void on_pushButton_4_clicked();

    void on_buyColor_clicked();

    void on_buyCross_clicked();

private:
    Ui::CShopdlg *ui;
    int money=10;
    CGameDlg* cgamedlg;
};

#endif // CSHOPDLG_H
