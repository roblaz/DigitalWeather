/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_3;
    QWidget *widget_Input;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_Addr;
    QLabel *label_3;
    QComboBox *comboBox;
    QLabel *label_4;
    QLineEdit *lineEdit_AppKey;
    QPushButton *pushButton;
    QLabel *label_8;
    QLCDNumber *lcdNumber;
    QWidget *widget_SunInfo;
    QGridLayout *gridLayout_2;
    QLineEdit *lineEdit_SunRise;
    QLineEdit *lineEdit_SunSet;
    QLabel *label_Sun;
    QProgressBar *progressBar;
    QWidget *widget_Termometer;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_9;
    QLabel *label_6;
    QLabel *label_11;
    QLabel *label_7;
    QLabel *label_10;
    QLabel *label_5;
    QLabel *label_12;
    QSlider *verticalSlider;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(593, 340);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        widget_Input = new QWidget(centralWidget);
        widget_Input->setObjectName(QString::fromUtf8("widget_Input"));
        verticalLayout = new QVBoxLayout(widget_Input);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_2 = new QLabel(widget_Input);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        lineEdit_Addr = new QLineEdit(widget_Input);
        lineEdit_Addr->setObjectName(QString::fromUtf8("lineEdit_Addr"));
        lineEdit_Addr->setEnabled(false);

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_Addr);

        label_3 = new QLabel(widget_Input);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        comboBox = new QComboBox(widget_Input);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, comboBox);

        label_4 = new QLabel(widget_Input);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        lineEdit_AppKey = new QLineEdit(widget_Input);
        lineEdit_AppKey->setObjectName(QString::fromUtf8("lineEdit_AppKey"));
        lineEdit_AppKey->setEnabled(false);

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_AppKey);

        pushButton = new QPushButton(widget_Input);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        formLayout->setWidget(3, QFormLayout::SpanningRole, pushButton);

        label_8 = new QLabel(widget_Input);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_8);

        lcdNumber = new QLCDNumber(widget_Input);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lcdNumber->sizePolicy().hasHeightForWidth());
        lcdNumber->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        lcdNumber->setFont(font);
        lcdNumber->setFrameShape(QFrame::NoFrame);
        lcdNumber->setSmallDecimalPoint(true);
        lcdNumber->setSegmentStyle(QLCDNumber::Flat);

        formLayout->setWidget(4, QFormLayout::FieldRole, lcdNumber);


        verticalLayout->addLayout(formLayout);


        gridLayout_3->addWidget(widget_Input, 0, 0, 1, 1);

        widget_SunInfo = new QWidget(centralWidget);
        widget_SunInfo->setObjectName(QString::fromUtf8("widget_SunInfo"));
        gridLayout_2 = new QGridLayout(widget_SunInfo);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        lineEdit_SunRise = new QLineEdit(widget_SunInfo);
        lineEdit_SunRise->setObjectName(QString::fromUtf8("lineEdit_SunRise"));

        gridLayout_2->addWidget(lineEdit_SunRise, 1, 0, 1, 1);

        lineEdit_SunSet = new QLineEdit(widget_SunInfo);
        lineEdit_SunSet->setObjectName(QString::fromUtf8("lineEdit_SunSet"));

        gridLayout_2->addWidget(lineEdit_SunSet, 1, 2, 1, 1);

        label_Sun = new QLabel(widget_SunInfo);
        label_Sun->setObjectName(QString::fromUtf8("label_Sun"));

        gridLayout_2->addWidget(label_Sun, 1, 1, 1, 1);

        progressBar = new QProgressBar(widget_SunInfo);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(24);

        gridLayout_2->addWidget(progressBar, 0, 0, 1, 3);


        gridLayout_3->addWidget(widget_SunInfo, 1, 0, 1, 1);

        widget_Termometer = new QWidget(centralWidget);
        widget_Termometer->setObjectName(QString::fromUtf8("widget_Termometer"));
        verticalLayout_2 = new QVBoxLayout(widget_Termometer);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(widget_Termometer);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 4, 1, 1, 1);

        label_9 = new QLabel(widget_Termometer);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 5, 1, 1, 1);

        label_6 = new QLabel(widget_Termometer);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 2, 1, 1, 1);

        label_11 = new QLabel(widget_Termometer);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout->addWidget(label_11, 1, 1, 1, 1);

        label_7 = new QLabel(widget_Termometer);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_7, 7, 0, 1, 1);

        label_10 = new QLabel(widget_Termometer);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 6, 1, 1, 1);

        label_5 = new QLabel(widget_Termometer);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 3, 1, 1, 1);

        label_12 = new QLabel(widget_Termometer);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout->addWidget(label_12, 0, 1, 1, 1);

        verticalSlider = new QSlider(widget_Termometer);
        verticalSlider->setObjectName(QString::fromUtf8("verticalSlider"));
        verticalSlider->setMinimum(-30);
        verticalSlider->setMaximum(30);
        verticalSlider->setValue(-6);
        verticalSlider->setOrientation(Qt::Vertical);

        gridLayout->addWidget(verticalSlider, 0, 0, 7, 1);


        verticalLayout_2->addLayout(gridLayout);


        gridLayout_3->addWidget(widget_Termometer, 0, 1, 2, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 593, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Open Weather", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Address", nullptr));
        lineEdit_Addr->setText(QApplication::translate("MainWindow", "api.openweathermap.org/data/2.5/weather", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Sity", nullptr));
        comboBox->setItemText(0, QApplication::translate("MainWindow", "Tallinn", nullptr));
        comboBox->setItemText(1, QApplication::translate("MainWindow", "Tartu", nullptr));

        label_4->setText(QApplication::translate("MainWindow", "AppKey", nullptr));
        lineEdit_AppKey->setText(QApplication::translate("MainWindow", "732a21594c62a625fa05abb9a35b8028", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Update", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Temp ", nullptr));
        lineEdit_SunRise->setText(QApplication::translate("MainWindow", "sun rise time", nullptr));
        lineEdit_SunSet->setText(QApplication::translate("MainWindow", "sun set time", nullptr));
        label_Sun->setText(QApplication::translate("MainWindow", "SUN", nullptr));
        label->setText(QApplication::translate("MainWindow", "-10", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "-20", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "+10", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "+20", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "C", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "-30", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "0", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "+30", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
