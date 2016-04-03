#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    connect(ui->btnCalc,SIGNAL(clicked()),this,SLOT(slotCalc()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::slotCalc()
{
    QString *strcv= new QString(ui->txtRadius->text());
    CircleTool *test= new CircleTool( strcv->toDouble());

    strcv->clear();
    strcv->sprintf("%f",test->GenSquare());

    ui->txtSquare->setText(strcv);

    //QMessageBox *msg=new QMessageBox(QMessageBox::NoIcon," aaaa",strcv);
    //msg->show();

   // ui->txtSquare->;


}




