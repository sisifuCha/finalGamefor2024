#ifndef CGAMEDLG_H
#define CGAMEDLG_H

#include <QMainWindow>
#include "cgamelogic.h"
#include "cranklogic.h"
#include "cthemedlg.h"
//#include "cmusicplayer.h"
#include <string.h>
#include <QDebug>
#include <QTimer>
#include <QLabel>
#include <QPixmap>
#include <QPainter>
#include <QMouseEvent>
#include <QCloseEvent>
#include "cmaildlg.h"
namespace Ui {
class CGameDlg;
}

class CGameDlg : public QMainWindow
{
    Q_OBJECT

public:
    explicit CGameDlg(QWidget *parent = nullptr);
    ~CGameDlg();

    void Music();
    void Game_over(bool saveRank = true); //时间耗尽时游戏结束
    void Continue();
    void SetNumOfPorp();
signals:
    void gameToMain();
    void gameToTheme();
    void gameToHelp();
    //void clicked();//鼠标点击信号

private slots:
    void on_btn_gameToMain_clicked();
    void doMainToGame();
    void doThemeToGame();
    void on_btn_gameToTheme_clicked();
    void do_theme_background_change(QString);//更换背景主题
    void do_theme_gem_change(QString);//更换石子主题
    void on_pushButton_stop_clicked();//暂停
    void update_timebar(); //每隔一秒timebar就更新一次的槽函数
    void Game_start();
    void on_pushButton_continue_clicked();
    void on_pushButton_restart_clicked();
    void do_btn_hint();//点击提示
    void paintEvent(QPaintEvent *event);
    void closeEvent(QCloseEvent *event);
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    /**************三个道具**********/
    void on_pushButton_cross_clicked();
    void on_pushButton_color_clicked();
    void on_pushButton_boom_clicked();

    void on_help_btn_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::CGameDlg *ui;

    /*————弹出窗口————*/
    CThemeDlg *theme = new CThemeDlg();
    CGameLogic *gamelogic = new CGameLogic();
    cmaildlg *mail;
    CRankLogic * ranklogic = new CRankLogic();
    //道具使用
    bool props=false,boom=false,cross=false,color=false;
    //鼠标位置
    QPoint point;
    QPoint point1;
    QPoint point2;
    //时间
    QTimer *timer;
    int mouseflag;
    int focus;
    int focus_x;
    int focus_y;
    int eliminateNumber = 0;
    int isSelected[8][8];//是否选中（0/1）
    int midSituation[8][8];//消除中间过程（1，2，3，对应三张图片）
    string string_grade;//分数转成string类型
    int addScoreSituation=-1;//加分情况的状态（0-9）
    int totaltime=60; //时间

    /*图片资源*/
    void iniRecources();
    QPixmap pixmap[8];//存宝石图片
    QPixmap pixmap_di;//储存被选中框
    QPixmap number[10];//分数图片
    //消除泡泡的过程
    QPixmap disappear1;
    QPixmap disappear2;
    QPixmap disappear3;
    QPixmap circle;//圆圈
    //分数资源
    QPixmap addscore;
    QImage *image_stop = new QImage(":/new/picture/stop.jpg"); //游戏暂停的图片
    QImage *image_gameover = new QImage(":/new/picture/gameover3.png"); //游戏结束的图片
    QLabel *label_image=new QLabel(this); //存放暂停图片的容器
    QString gemtype; //宝石类型，其值为"gem","fish","mine",默认值为"gem"
    //音乐
    //int music = 1;
    //int eli_music=0;
    //CMusicPlayer *mus = new CMusicPlayer;
    //CMusicPlayer *mus1 = new CMusicPlayer;
protected:
    void mousePressEvent(QMouseEvent *ev);
    QPoint mousePos;//鼠标位置a

};

#endif // CGAMEDLG_H
