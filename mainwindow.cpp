#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    int **matriz;
    ui->tableWidget->setColumnCount(10);
    ui->tableWidget->setRowCount(10);

    ui->tableWidget->setGeometry(10,30, 43*10, 34*10);
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            ui->tableWidget->setColumnWidth(j,1);
            ui->tableWidget->setItem(i, j, new QTableWidgetItem(QString::number(matriz[i+1][j+1])));



        }
    }
}

