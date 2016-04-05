#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stdio.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);



    connect(ui->btnOpenFile,SIGNAL(clicked()),this,SLOT(slotOpenFile()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::slotOpenFile()
{
    FILE *in;
    in=fopen("mainwindow.cpp","r");

    QString *buff=new QString("");
    char buff_line[1000];
    while(fscanf(in,"%c",buff_line)!=EOF){
        buff->append(buff_line);
    }

    ui->txtMain->clear();
    ui->txtMain->setText(*buff);

    fclose(in);
}
