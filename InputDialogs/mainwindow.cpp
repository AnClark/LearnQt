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
    QString buff=QInputDialog::getText(this,commonTitle,"想设置什么卷标呢？");
    ui->lblLabel->setText(buff);
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
    int diskSize=QInputDialog::getInt(this,commonTitle,"输入要分配的磁盘空间大小",ui->lblSize->text().toInt(),0,16777216,100);

    //要将数值数据转换成QString，必须要用到QString的静态函数number
    ui->lblSize->setText(QString::number(diskSize));


}

void MainWindow::slotSetUnit(){
    QStringList unitList;
    unitList.append("4096");
    unitList.append("2048");
    unitList.append("1024");
    unitList.append("512");
    unitList.append("256");

    QString buff=QInputDialog::getItem(this,commonTitle,"选择分配单元大小，单位为字节",unitList,3,false);
    ui->lblUnit->setText(buff);
}
