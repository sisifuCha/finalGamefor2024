#include "cshopdlg.h"
#include "ui_cshopdlg.h"
#include <QGraphicsPixmapItem>
#include"Global.h"
#include"cgamedlg.h"
CShopdlg::CShopdlg(CGameDlg* cgamedlg,QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::CShopdlg)
{
    ui->setupUi(this);
    this->cgamedlg=cgamedlg;
    QPixmap pixmap1(":/new/picture/boom.png"); // 替换为你的图片路径
    QPixmap pixmap2(":/new/picture/color.png"); // 替换为你的图片路径
    QPixmap pixmap3(":/new/picture/cross.png"); // 替换为你的图片路径
    // 创建一个QGraphicsPixmapItem
    QGraphicsPixmapItem *pixmapItem1 = new QGraphicsPixmapItem(pixmap1);
    QGraphicsPixmapItem *pixmapItem2 = new QGraphicsPixmapItem(pixmap2);
    QGraphicsPixmapItem *pixmapItem3 = new QGraphicsPixmapItem(pixmap3);

    this->ui->boom->setScene(new QGraphicsScene(this));
    this->ui->color->setScene(new QGraphicsScene(this));
    this->ui->cross->setScene(new QGraphicsScene(this));

    // 将QGraphicsPixmapItem添加到QGraphicsScene
    this->ui->boom->scene()->addItem(pixmapItem1);
    this->ui->color->scene()->addItem(pixmapItem2);
    this->ui->cross->scene()->addItem(pixmapItem3);

    // 调整视图以适应图片大小（可选）
    this->ui->boom->setBackgroundRole(QPalette::Light);
    this->ui->color->setBackgroundRole(QPalette::Light);
    this->ui->cross->setBackgroundRole(QPalette::Light);
    this->ui->boom->fitInView(pixmapItem1, Qt::KeepAspectRatio);
    this->ui->color->fitInView(pixmapItem2, Qt::KeepAspectRatio);
    this->ui->cross->fitInView(pixmapItem3, Qt::KeepAspectRatio);

    // 显示QGraphicsView
    this->ui->boom->show();
    this->ui->color->show();
    this->ui->cross->show();

    this->ui->numOfMoney->setText(QString::number(money));
    this->ui->numOfBoom->setText(QString::number(g_props_boom));
    this->ui->numOfColor->setText(QString::number(g_props_color));
    this->ui->numOfCross->setText(QString::number(g_props_cross));
}

CShopdlg::~CShopdlg()
{
    delete ui;
}


void CShopdlg::on_pushButton_4_clicked()
{
    this->cgamedlg->Continue();
    this->close();
}


void CShopdlg::on_buyBoom_clicked()
{
    if(money>=1){
        g_props_boom++;
        money--;
        this->ui->numOfMoney->setText(QString::number(money));
        this->ui->numOfBoom->setText(QString::number(g_props_boom));
        this->cgamedlg->SetNumOfPorp();
    }
}


void CShopdlg::on_buyColor_clicked()
{
    if(money>=2){
        g_props_color++;
        money-=2;
        this->ui->numOfMoney->setText(QString::number(money));
        this->ui->numOfColor->setText(QString::number(g_props_color));
        this->cgamedlg->SetNumOfPorp();
    }
}



void CShopdlg::on_buyCross_clicked()
{
    if(money>=3){
        g_props_cross++;
        money-=3;
        this->ui->numOfMoney->setText(QString::number(money));
        this->ui->numOfCross->setText(QString::number(g_props_color));
        this->cgamedlg->SetNumOfPorp();
    }
}

