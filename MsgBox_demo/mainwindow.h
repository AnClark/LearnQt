#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QMessageBox>               //必须先定义QMessageBox，才能调出对话框！

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void slotInformation();
    void slotQuestion();
    void slotWarning();
    void slotCritical();
    void slotAbout();
    void slotAboutQt();
    void slotCustom();

private:
    Ui::MainWindow *ui;

    //自定义对话框之对象声明
    QMessageBox *anclarkMsg;
};

#endif // MAINWINDOW_H
