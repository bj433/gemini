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



void MainWindow::on_pb_kontoAnlegen_clicked()
{

}

void MainWindow::on_pb_einzahlen_clicked()
{

}

void MainWindow::on_pb_auszahlen_clicked()
{

}

void MainWindow::on_pb_ueberweisen_clicked()
{

}
