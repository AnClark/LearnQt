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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QFormLayout *formLayout;
    QPushButton *btnSetLabel;
    QLabel *lblLabel;
    QPushButton *btnSetFS;
    QLabel *lblFS;
    QPushButton *btnSetSize;
    QLabel *lblSize;
    QPushButton *btnSetUnit;
    QLabel *lblUnit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(747, 415);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(70, 80, 611, 121));
        formLayout = new QFormLayout(widget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        btnSetLabel = new QPushButton(widget);
        btnSetLabel->setObjectName(QStringLiteral("btnSetLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, btnSetLabel);

        lblLabel = new QLabel(widget);
        lblLabel->setObjectName(QStringLiteral("lblLabel"));
        lblLabel->setFrameShape(QFrame::Box);

        formLayout->setWidget(0, QFormLayout::FieldRole, lblLabel);

        btnSetFS = new QPushButton(widget);
        btnSetFS->setObjectName(QStringLiteral("btnSetFS"));

        formLayout->setWidget(1, QFormLayout::LabelRole, btnSetFS);

        lblFS = new QLabel(widget);
        lblFS->setObjectName(QStringLiteral("lblFS"));
        lblFS->setFrameShape(QFrame::Box);

        formLayout->setWidget(1, QFormLayout::FieldRole, lblFS);

        btnSetSize = new QPushButton(widget);
        btnSetSize->setObjectName(QStringLiteral("btnSetSize"));

        formLayout->setWidget(2, QFormLayout::LabelRole, btnSetSize);

        lblSize = new QLabel(widget);
        lblSize->setObjectName(QStringLiteral("lblSize"));
        lblSize->setFrameShape(QFrame::Box);

        formLayout->setWidget(2, QFormLayout::FieldRole, lblSize);

        btnSetUnit = new QPushButton(widget);
        btnSetUnit->setObjectName(QStringLiteral("btnSetUnit"));

        formLayout->setWidget(3, QFormLayout::LabelRole, btnSetUnit);

        lblUnit = new QLabel(widget);
        lblUnit->setObjectName(QStringLiteral("lblUnit"));
        lblUnit->setFrameShape(QFrame::Box);

        formLayout->setWidget(3, QFormLayout::FieldRole, lblUnit);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 747, 23));
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
        btnSetLabel->setText(QApplication::translate("MainWindow", "\347\243\201\347\233\230\345\215\267\346\240\207", 0));
        lblLabel->setText(QString());
        btnSetFS->setText(QApplication::translate("MainWindow", "\346\226\207\344\273\266\347\263\273\347\273\237", 0));
        lblFS->setText(QString());
        btnSetSize->setText(QApplication::translate("MainWindow", "\347\243\201\347\233\230\345\244\247\345\260\217", 0));
        lblSize->setText(QString());
        btnSetUnit->setText(QApplication::translate("MainWindow", "\345\210\206\351\205\215\345\215\225\345\205\203", 0));
        lblUnit->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
