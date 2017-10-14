/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
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
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QSlider *dilSlider;
    QGridLayout *gridLayout;
    QSlider *circleThicknessSlider;
    QSlider *blueColorMinSlider;
    QSlider *greenColorMinSlider;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QSlider *redColorMaxSlider;
    QSlider *blueColorMaxSlider;
    QPushButton *pushButton_3;
    QSlider *redColorMinSlider;
    QSlider *greenColorMaxSlider;
    QHBoxLayout *horizontalLayout;
    QLabel *radiusLabel;
    QLabel *yLabelCenter;
    QLabel *xCenterLabel;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QSlider *minDistSlider;
    QSlider *param1Slider;
    QSlider *param2Slider;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(799, 348);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_3->addWidget(label_3, 0, 0, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_3->addWidget(label_2, 0, 1, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_3->addWidget(label, 0, 2, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        verticalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        verticalLayout->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(groupBox);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));

        verticalLayout->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(groupBox);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));

        verticalLayout->addWidget(radioButton_4);

        dilSlider = new QSlider(groupBox);
        dilSlider->setObjectName(QStringLiteral("dilSlider"));
        dilSlider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(dilSlider);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        circleThicknessSlider = new QSlider(centralWidget);
        circleThicknessSlider->setObjectName(QStringLiteral("circleThicknessSlider"));
        circleThicknessSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(circleThicknessSlider, 0, 2, 1, 1);

        blueColorMinSlider = new QSlider(centralWidget);
        blueColorMinSlider->setObjectName(QStringLiteral("blueColorMinSlider"));
        blueColorMinSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(blueColorMinSlider, 2, 0, 1, 1);

        greenColorMinSlider = new QSlider(centralWidget);
        greenColorMinSlider->setObjectName(QStringLiteral("greenColorMinSlider"));
        greenColorMinSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(greenColorMinSlider, 1, 0, 1, 1);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 3, 1, 1, 1);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 3, 0, 1, 1);

        redColorMaxSlider = new QSlider(centralWidget);
        redColorMaxSlider->setObjectName(QStringLiteral("redColorMaxSlider"));
        redColorMaxSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(redColorMaxSlider, 0, 1, 1, 1);

        blueColorMaxSlider = new QSlider(centralWidget);
        blueColorMaxSlider->setObjectName(QStringLiteral("blueColorMaxSlider"));
        blueColorMaxSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(blueColorMaxSlider, 2, 1, 1, 1);

        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 1, 2, 1, 1);

        redColorMinSlider = new QSlider(centralWidget);
        redColorMinSlider->setObjectName(QStringLiteral("redColorMinSlider"));
        redColorMinSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(redColorMinSlider, 0, 0, 1, 1);

        greenColorMaxSlider = new QSlider(centralWidget);
        greenColorMaxSlider->setObjectName(QStringLiteral("greenColorMaxSlider"));
        greenColorMaxSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(greenColorMaxSlider, 1, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        radiusLabel = new QLabel(centralWidget);
        radiusLabel->setObjectName(QStringLiteral("radiusLabel"));

        horizontalLayout->addWidget(radiusLabel);

        yLabelCenter = new QLabel(centralWidget);
        yLabelCenter->setObjectName(QStringLiteral("yLabelCenter"));

        horizontalLayout->addWidget(yLabelCenter);

        xCenterLabel = new QLabel(centralWidget);
        xCenterLabel->setObjectName(QStringLiteral("xCenterLabel"));

        horizontalLayout->addWidget(xCenterLabel);


        gridLayout->addLayout(horizontalLayout, 2, 2, 1, 1);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        minDistSlider = new QSlider(groupBox_2);
        minDistSlider->setObjectName(QStringLiteral("minDistSlider"));
        minDistSlider->setMinimum(5);
        minDistSlider->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(minDistSlider);

        param1Slider = new QSlider(groupBox_2);
        param1Slider->setObjectName(QStringLiteral("param1Slider"));
        param1Slider->setMinimum(5);
        param1Slider->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(param1Slider);

        param2Slider = new QSlider(groupBox_2);
        param2Slider->setObjectName(QStringLiteral("param2Slider"));
        param2Slider->setMinimum(5);
        param2Slider->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(param2Slider);


        gridLayout->addWidget(groupBox_2, 3, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 1, 0, 1, 2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 799, 21));
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
        label_3->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_2->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Elide", 0));
        radioButton->setText(QApplication::translate("MainWindow", "RadioButton", 0));
        radioButton_2->setText(QApplication::translate("MainWindow", "RadioButton", 0));
        radioButton_3->setText(QApplication::translate("MainWindow", "RadioButton", 0));
        radioButton_4->setText(QApplication::translate("MainWindow", "RadioButton", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "Max Color", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Min Color", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "Circle Color", 0));
        radiusLabel->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        yLabelCenter->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        xCenterLabel->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Circles", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
