#include "mainwindow.h"
#include "ui_mainwindow.h"


#include<QInputDialog>

const QString commonTitle="选择一个选项";

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->btnSetLabel,SIGNAL(clicked()),this,SLOT(slotSetLabel()));
    connect(ui->btnSetFS,SIGNAL(clicked()),this,SLOT(slotSetFS()));
    connect(ui->btnSetSize,SIGNAL(clicked()),this,SLOT(slotSetSize()));
    connect(ui->btnSetUnit,SIGNAL(clicked()),this,SLOT(slotSetUnit()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::slotSetLabel()
{

}

void MainWindow::slotSetFS(){
    QStringList fsList;
    fsList.append("NTFS");
    fsList.append("FAT32");
    fsList.append("EXT4");
    fsList.append("YAFFS2");

    QString buff=QInputDialog::getItem(this,commonTitle,"选择一个文件系统",fsList,0,false);
    ui->lblFS->setText(buff);

}

void MainWindow::slotSetSize(){


}

void MainWindow::slotSetUnit(){

}
