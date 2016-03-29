#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    //建立信号与槽的链接
    connect(ui->btnConfirm,SIGNAL(clicked()),this,SLOT(slotConfirm()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::slotConfirm()
{
    /*警告！！！用这种方法创建的对话框，在调用show方法显示后会立刻消失！！！
    QMessageBox testMsg1(QMessageBox::Information,"Test Message",ui->txtText->toPlainText());
    testMsg1.show();
    */
    QMessageBox *testMsg2 = new QMessageBox(QMessageBox::Information,"自定义消息",ui->txtText->toPlainText());


    testMsg2->show();
}
