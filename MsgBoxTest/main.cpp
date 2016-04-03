#include<QApplication>
#include<QMessageBox>

int main(int argc, char * argv[])
{
    QApplication a(argc,argv);

    QMessageBox msg;
    msg.setText("Dialog Test Here");
    //msg.setButtonText("Click");

    msg.show();

    return a.exec();
}
