#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QTextEdit>
#include<QRect>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    QTextEdit edt;
    QRect sz;
    sz.setHeight(500);
    sz.setWidth(500);
    sz.setX(10);
    sz.setY(10);
    edt.setGeometry(sz);
   // edt.show();
}
