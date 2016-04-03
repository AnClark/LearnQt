#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    //建立信号与槽的连接
    connect(ui->btnLaunch,SIGNAL(clicked()),this,SLOT(slotLaunch()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::slotLaunch()
{
    QMessageBox *msg= new QMessageBox(QMessageBox::NoIcon,ui->txtTitle->toPlainText(),ui->txtText->toPlainText());
    msg->setIconPixmap(QPixmap(":/otto.png"));
    msg->addButton("好样的",QMessageBox::AcceptRole);
    msg->addButton(QMessageBox::Cancel);

    msg->show();
}
