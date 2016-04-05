#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "QMainWindow"
#include "qtextedit.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget * parent = 0);
    ~MainWindow();

private:
    void openFile();
    void saveFile();
    QAction * openAction;
    QAction * saveAction;
    QTextEdit * textEdit;
};
#endif
