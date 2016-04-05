#include "QAction"
#include "QMenuBar"
#include "QMessageBox"
#include "QStatusBar"
#include "QToolBar"
#include "qfiledialog.h"
#include "qtextstream.h"
#include "qmessagebox.h"

#include "mainwindow.h"


MainWindow::MainWindow(QWidget * parent):QMainWindow(parent)
{
    setWindowTitle(tr("Main Window"));

    openAction = new QAction(QIcon(":/image/test"),tr("&Open"),this);
    openAction->setShortcuts(QKeySequence::Open);//设置快捷键
    openAction->setStatusTip(tr("Open an exist file"));

    saveAction = new QAction(QIcon(":/image/test"),tr("&save"),this);
    saveAction->setShortcut(QKeySequence::Save);
    saveAction->setStatusTip(tr("Save a new file"));

    QMenu * file = menuBar()->addMenu(tr("&File"));
    file->addAction(openAction);
    file->addAction(saveAction);

    QToolBar * toolBar = addToolBar(tr("&File"));
    toolBar->addAction(openAction);
    toolBar->addAction(saveAction);

    textEdit = new QTextEdit(this);
    setCentralWidget(textEdit);

    connect(openAction,&QAction::triggered,this,&MainWindow::openFile);
    connect(saveAction,&QAction::triggered,this,&MainWindow::saveFile);
}

MainWindow::~MainWindow()
{

}

void MainWindow::openFile()
{
    QString path = QFileDialog::getOpenFileName(this,tr("Open File"),".",tr("Text Files(*.txt)"));

    if(!path.isEmpty())
    {
       QFile file(path);
       if(!file.open(QIODevice::ReadOnly|QIODevice::Text))//以只读方式和文本方式打开这个文件
       {
           QMessageBox::warning(this,tr("Read File"),tr("can't open file"));
           return;
       }
       QTextStream in(&file);
       textEdit->setText(in.readAll());
       file.close();
    }
    else
    {
        QMessageBox::warning(this,tr("Path"),tr("you didn't select anything"));
    }
}

void MainWindow::saveFile()
{
    QString path = QFileDialog::getSaveFileName(this,tr("Save File"),".",tr("Text File(*.txt)"));

    if(!path.isEmpty())
    {
       QFile file(path);
       if(!file.open(QIODevice::WriteOnly|QIODevice::Text))//已只写方式和文本方式打开这个文件
       {
           QMessageBox::warning(this,tr("Save File"),tr("can't save file"));
           return;
       }
       QTextStream out(&file);
       out<<textEdit->toPlainText();
       file.close();
    }
    else
    {
       QMessageBox::warning(this,tr("Path"),tr("you didn't select anything"));
    }
}
