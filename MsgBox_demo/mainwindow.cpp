#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
#include<QPushButton>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //创建自定义对话框
    anclarkMsg = new QMessageBox(QMessageBox::NoIcon,"自定义对话框","匠心独运，爱拼会赢");
    anclarkMsg->setIconPixmap(QPixmap("/otto.png"));
    QPushButton *firstButton = new QPushButton("Testor");
    anclarkMsg->addButton(firstButton,QMessageBox::AcceptRole);

    anclarkMsg->addButton("Second Button",QMessageBox::AcceptRole);
    anclarkMsg->addButton("Third Button",QMessageBox::AcceptRole);
    anclarkMsg->addButton(QMessageBox::Cancel);



    //连接信号和槽
    connect(ui->btnInformation,SIGNAL(clicked()),this,SLOT(slotInformation()));
    connect(ui->btnQuestion,SIGNAL(clicked()),this,SLOT(slotQuestion()));
    connect(ui->btnWarning,SIGNAL(clicked()),this,SLOT(slotWarning()));
    connect(ui->btnCritical,SIGNAL(clicked()),this,SLOT(slotCritical()));
    connect(ui->btnAbout,SIGNAL(clicked()),this,SLOT(slotAbout()));
    connect(ui->btnAboutQt,SIGNAL(clicked()),this,SLOT(slotAboutQt()));
    connect(ui->btnCustom,SIGNAL(clicked()),this,SLOT(slotCustom()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

//写槽函数
void MainWindow::slotInformation()
{
    QMessageBox::information(this,"信息对话框","欢迎感受Qt的对话框！");
}

void MainWindow::slotWarning()
{
    QMessageBox::warning(this,"警告对话框","你还有未保存的文件，请马上保存！",QMessageBox::Ok | QMessageBox::Cancel);
}

void MainWindow::slotQuestion()
{
    QMessageBox::question(this,"问题对话框","您要使用我们的推荐配置吗？",QMessageBox::Yes | QMessageBox::No);
}

void MainWindow::slotCritical()
{
    QMessageBox::critical(this,"出错对话框","程序崩溃，即将重启！",QMessageBox::Abort | QMessageBox::Retry | QMessageBox::Cancel);
}

void MainWindow::slotAbout()
{
    QMessageBox::about(this,"关于","爱拼安小匠，匠心独运，爱拼会赢！");
}

void MainWindow::slotAboutQt()
{
    QMessageBox::aboutQt(this);
}

void MainWindow::slotCustom()
{
    anclarkMsg->show();
}
