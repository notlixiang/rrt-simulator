#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "renderarea.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private:
    Ui::MainWindow *ui;
    RenderArea *renderArea;
    RRT_PLANNER *rrt;
    bool simulated;
    bool resetFlag;
private slots:
    void on_startButton_clicked();
    void on_resetButton_clicked();
//    void do_rrt_connect();
//    void do_rrt_star();
};

#endif // MAINWINDOW_H
