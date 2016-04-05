#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QMessageBox>

#include<QFileDialog>
#include<QColorDialog>
#include<QFontDialog>

#include<QTextStream>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;


public slots:
    void slotFileDialog();
    void slotColorDialog();
    void slotFontDialog();
};

#endif // MAINWINDOW_H
