#include<QApplication>
#include<QObject>
#include<QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc,argv);

    QPushButton *oneButton=new QPushButton("Test Here!");
    oneButton->show();


    return a.exec();
}
