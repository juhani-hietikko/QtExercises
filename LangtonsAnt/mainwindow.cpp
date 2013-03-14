#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow), grid(10,10)
{
    ui->setupUi(this);

    connect(ui->advanceButton, SIGNAL(clicked()), this, SLOT(advanceButtonClicked()));

    setupGridArray();

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            gridDisplay[i][j]->setStyleSheet("QLabel { background-color : white; color : red; }");
            gridDisplay[i][j]->setAlignment(Qt::AlignVCenter | Qt::AlignHCenter);
        }
    }
    grid.placeAntToCell(5, 5, "up");
    updateDisplay();
}

void MainWindow::setupGridArray()
{
    gridDisplay[0][0] = ui->label_0_0;
    gridDisplay[0][1] = ui->label_0_1;
    gridDisplay[0][2] = ui->label_0_2;
    gridDisplay[0][3] = ui->label_0_3;
    gridDisplay[0][4] = ui->label_0_4;
    gridDisplay[0][5] = ui->label_0_5;
    gridDisplay[0][6] = ui->label_0_6;
    gridDisplay[0][7] = ui->label_0_7;
    gridDisplay[0][8] = ui->label_0_8;
    gridDisplay[0][9] = ui->label_0_9;

    gridDisplay[1][0] = ui->label_1_0;
    gridDisplay[1][1] = ui->label_1_1;
    gridDisplay[1][2] = ui->label_1_2;
    gridDisplay[1][3] = ui->label_1_3;
    gridDisplay[1][4] = ui->label_1_4;
    gridDisplay[1][5] = ui->label_1_5;
    gridDisplay[1][6] = ui->label_1_6;
    gridDisplay[1][7] = ui->label_1_7;
    gridDisplay[1][8] = ui->label_1_8;
    gridDisplay[1][9] = ui->label_1_9;

    gridDisplay[2][0] = ui->label_2_0;
    gridDisplay[2][1] = ui->label_2_1;
    gridDisplay[2][2] = ui->label_2_2;
    gridDisplay[2][3] = ui->label_2_3;
    gridDisplay[2][4] = ui->label_2_4;
    gridDisplay[2][5] = ui->label_2_5;
    gridDisplay[2][6] = ui->label_2_6;
    gridDisplay[2][7] = ui->label_2_7;
    gridDisplay[2][8] = ui->label_2_8;
    gridDisplay[2][9] = ui->label_2_9;

    gridDisplay[3][0] = ui->label_3_0;
    gridDisplay[3][1] = ui->label_3_1;
    gridDisplay[3][2] = ui->label_3_2;
    gridDisplay[3][3] = ui->label_3_3;
    gridDisplay[3][4] = ui->label_3_4;
    gridDisplay[3][5] = ui->label_3_5;
    gridDisplay[3][6] = ui->label_3_6;
    gridDisplay[3][7] = ui->label_3_7;
    gridDisplay[3][8] = ui->label_3_8;
    gridDisplay[3][9] = ui->label_3_9;

    gridDisplay[4][0] = ui->label_4_0;
    gridDisplay[4][1] = ui->label_4_1;
    gridDisplay[4][2] = ui->label_4_2;
    gridDisplay[4][3] = ui->label_4_3;
    gridDisplay[4][4] = ui->label_4_4;
    gridDisplay[4][5] = ui->label_4_5;
    gridDisplay[4][6] = ui->label_4_6;
    gridDisplay[4][7] = ui->label_4_7;
    gridDisplay[4][8] = ui->label_4_8;
    gridDisplay[4][9] = ui->label_4_9;

    gridDisplay[5][0] = ui->label_5_0;
    gridDisplay[5][1] = ui->label_5_1;
    gridDisplay[5][2] = ui->label_5_2;
    gridDisplay[5][3] = ui->label_5_3;
    gridDisplay[5][4] = ui->label_5_4;
    gridDisplay[5][5] = ui->label_5_5;
    gridDisplay[5][6] = ui->label_5_6;
    gridDisplay[5][7] = ui->label_5_7;
    gridDisplay[5][8] = ui->label_5_8;
    gridDisplay[5][9] = ui->label_5_9;

    gridDisplay[6][0] = ui->label_6_0;
    gridDisplay[6][1] = ui->label_6_1;
    gridDisplay[6][2] = ui->label_6_2;
    gridDisplay[6][3] = ui->label_6_3;
    gridDisplay[6][4] = ui->label_6_4;
    gridDisplay[6][5] = ui->label_6_5;
    gridDisplay[6][6] = ui->label_6_6;
    gridDisplay[6][7] = ui->label_6_7;
    gridDisplay[6][8] = ui->label_6_8;
    gridDisplay[6][9] = ui->label_6_9;

    gridDisplay[7][0] = ui->label_7_0;
    gridDisplay[7][1] = ui->label_7_1;
    gridDisplay[7][2] = ui->label_7_2;
    gridDisplay[7][3] = ui->label_7_3;
    gridDisplay[7][4] = ui->label_7_4;
    gridDisplay[7][5] = ui->label_7_5;
    gridDisplay[7][6] = ui->label_7_6;
    gridDisplay[7][7] = ui->label_7_7;
    gridDisplay[7][8] = ui->label_7_8;
    gridDisplay[7][9] = ui->label_7_9;

    gridDisplay[8][0] = ui->label_8_0;
    gridDisplay[8][1] = ui->label_8_1;
    gridDisplay[8][2] = ui->label_8_2;
    gridDisplay[8][3] = ui->label_8_3;
    gridDisplay[8][4] = ui->label_8_4;
    gridDisplay[8][5] = ui->label_8_5;
    gridDisplay[8][6] = ui->label_8_6;
    gridDisplay[8][7] = ui->label_8_7;
    gridDisplay[8][8] = ui->label_8_8;
    gridDisplay[8][9] = ui->label_8_9;

    gridDisplay[9][0] = ui->label_9_0;
    gridDisplay[9][1] = ui->label_9_1;
    gridDisplay[9][2] = ui->label_9_2;
    gridDisplay[9][3] = ui->label_9_3;
    gridDisplay[9][4] = ui->label_9_4;
    gridDisplay[9][5] = ui->label_9_5;
    gridDisplay[9][6] = ui->label_9_6;
    gridDisplay[9][7] = ui->label_9_7;
    gridDisplay[9][8] = ui->label_9_8;
    gridDisplay[9][9] = ui->label_9_9;
}

void MainWindow::advanceButtonClicked()
{
    grid.advance();
    updateDisplay();
}

void MainWindow::updateDisplay() {
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (grid.colorAtCell(i, j) == AntGrid::White)
            {
                gridDisplay[i][j]->setStyleSheet("QLabel { background-color : white; color : red; }");
            }
            else
            {
                gridDisplay[i][j]->setStyleSheet("QLabel { background-color : black; color : red; }");
            }
            if (grid.cellStatusAt(i, j) != "")
            {
                gridDisplay[i][j]->setText("A");
            }
            else
            {
                gridDisplay[i][j]->setText("");
            }
        }
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
