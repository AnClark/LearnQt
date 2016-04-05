#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Link slots with signals
    connect(ui->btnSimpleBox,SIGNAL(clicked()),this,SLOT(slotBoxSeries()));
    connect(ui->btnCustomBox,SIGNAL(clicked()),this,SLOT(slotCustomBox()));

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::slotBoxSeries()
{
    const QString defaultTitle="Test Information Text";
    QMessageBox::information    (this,defaultTitle,ui->txtContent->toPlainText());
    QMessageBox::warning        (this,defaultTitle,ui->txtContent->toPlainText());
    QMessageBox::critical       (this,defaultTitle,ui->txtContent->toPlainText());
}

void MainWindow::slotCustomBox()
{
    const QString defaultTitle="Test CustomBox Text";
    QMessageBox *myBox = new QMessageBox(QMessageBox::NoIcon,defaultTitle,ui->txtContent->toPlainText());
    myBox->addButton("Test OK",QMessageBox::AcceptRole);
    myBox->show();
}
