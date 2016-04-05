#include "mainwindow.h"
#include "ui_mainwindow.h"

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
    QString fileName=QFileDialog::getOpenFileName(this,"打开文本文件","home","Plain Text File (*.txt);;C/C++ Language Source (*.c *.cpp *.h)");
    QFile *file=new QFile(fileName);

    if(fileName.isEmpty())
    {
        QMessageBox::warning(this,"注意","未选择文件！");
        return;
    }

    if(file->open(QIODevice::ReadOnly)==true){
        QTextStream in(file);
        ui->textEdit->setText(in.readAll());

    }
    else
    {
        QMessageBox::critical(this,"错误","打开文件失败！");
        return;
    }

    file->close();
    delete file;
}
