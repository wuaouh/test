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
    ui->textEdit->append("asdasdasdasd");
    ui->textEdit->append("。。。。。");
    //asjdhfakhjsdfaw
    //
    //
    //
    ui->textEdit->append("，，，，，，，，啊实打实发生");
}
