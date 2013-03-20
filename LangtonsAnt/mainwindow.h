#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include "antgrid.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void advanceButtonClicked();

private:
    Ui::MainWindow *ui;
    QLabel* gridDisplay [10][10];

    void setupGridArray();
    void updateDisplay();
};

#endif // MAINWINDOW_H
