#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);



    connect(ui->btnFileDialog,SIGNAL(clicked()),this,SLOT(slotFileDialog()));
    connect(ui->btnColorDialog,SIGNAL(clicked()),this,SLOT(slotColorDialog()));
    connect(ui->btnFontDialog,SIGNAL(clicked()),this,SLOT(slotFontDialog()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::slotFileDialog()
{
    //显示文件对话框
    QString fileName  = QFileDialog::getOpenFileName(this,"选择一个文件","home","C Files (*.c *.cpp);;C Header Files (*.h);;Plain Text Files (*.txt)");
    ui->txtFile->setText(fileName);     //打出获取到的文件名

    //若未选择文件，则弹出警告并退出

    if(fileName.isEmpty())
    {
        QMessageBox::warning(this,"Info","未选择文件");

    }
    else
    {
        //新建QFile类
        QFile *file=new QFile(fileName);

        //打开文件，同时判断是否打开成功
        if(file->open(QIODevice::ReadOnly)==true){      //若打开成功
            QTextStream in(file);       //建立文本流对象
            ui->txtTextContent->setText(in.readAll());      //读入文本流全部内容，并输出到文本框中
        }
        else        //否则弹出错误框
            QMessageBox::critical(this,"Error!","文件打开出错！");

        //释放文件对象
        file->close();
        delete file;
    }
}

void MainWindow::slotColorDialog()
{
    /*
    QColor color =QColorDialog::getColor(Qt::white,this,"选择颜色");
    QPalette pal;
    pal.setColor(QPalette::Background,color);
    ui->frmColor->setPalette(pal);
*/

    QColor color = QColorDialog::getColor(Qt::white,this,"选择颜色");

    if(color.isValid())
        ui->frmColor->setPalette(QPalette(color));

}

void MainWindow::slotFontDialog()
{
    bool ok;
    QFont font=QFontDialog::getFont(&ok,ui->txtFont->font());
    if(ok)
        ui->txtFont->setFont(font);

}
