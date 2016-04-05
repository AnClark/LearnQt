/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *btnFileDialog;
    QLineEdit *txtFile;
    QPushButton *btnColorDialog;
    QFrame *frmColor;
    QPushButton *btnFontDialog;
    QLineEdit *txtFont;
    QLabel *label;
    QTextEdit *txtTextContent;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(708, 498);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(61, 71, 601, 297));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btnFileDialog = new QPushButton(widget);
        btnFileDialog->setObjectName(QStringLiteral("btnFileDialog"));

        gridLayout->addWidget(btnFileDialog, 0, 0, 1, 1);

        txtFile = new QLineEdit(widget);
        txtFile->setObjectName(QStringLiteral("txtFile"));
        QFont font;
        font.setPointSize(9);
        txtFile->setFont(font);

        gridLayout->addWidget(txtFile, 0, 1, 1, 1);

        btnColorDialog = new QPushButton(widget);
        btnColorDialog->setObjectName(QStringLiteral("btnColorDialog"));

        gridLayout->addWidget(btnColorDialog, 1, 0, 1, 1);

        frmColor = new QFrame(widget);
        frmColor->setObjectName(QStringLiteral("frmColor"));
        frmColor->setFrameShape(QFrame::Box);
        frmColor->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frmColor, 1, 1, 1, 1);

        btnFontDialog = new QPushButton(widget);
        btnFontDialog->setObjectName(QStringLiteral("btnFontDialog"));

        gridLayout->addWidget(btnFontDialog, 2, 0, 1, 1);

        txtFont = new QLineEdit(widget);
        txtFont->setObjectName(QStringLiteral("txtFont"));
        QFont font1;
        font1.setPointSize(18);
        txtFont->setFont(font1);

        gridLayout->addWidget(txtFont, 2, 1, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 3, 0, 1, 1);

        txtTextContent = new QTextEdit(widget);
        txtTextContent->setObjectName(QStringLiteral("txtTextContent"));

        gridLayout->addWidget(txtTextContent, 3, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 708, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        btnFileDialog->setText(QApplication::translate("MainWindow", "\346\226\207\344\273\266\345\257\271\350\257\235\346\241\206", 0));
        btnColorDialog->setText(QApplication::translate("MainWindow", "\351\242\234\350\211\262\345\257\271\350\257\235\346\241\206", 0));
        btnFontDialog->setText(QApplication::translate("MainWindow", "\345\255\227\344\275\223\345\257\271\350\257\235\346\241\206", 0));
        label->setText(QApplication::translate("MainWindow", "\346\226\207\346\234\254\345\206\205\345\256\271", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
