#include<QApplication>
#include<QPushButton>
#include<QRect>
#include<QFont>

int fileTest();

int main(int argc, char *argv[])
{
    QApplication aa(argc,argv);
    QPushButton btn("I'm a push button!");

    QRect geo;
    geo.setHeight(500);
    geo.setWidth(500);
    btn.setGeometry(geo);

    QFont fon;
    fon.setBold(true);
    fon.setItalic(true);
    fon.setFamily("Droid Serif");
    fon.setPixelSize(50);
    btn.setFont(fon);

    btn.show();

   QObject::connect(&btn,SIGNAL(clicked()),qApp,SLOT(closeAllWindows()));
   // QObject::connect(&btn,SIGNAL(clicked()),qApp,fileTest());

    return aa.exec();
}


