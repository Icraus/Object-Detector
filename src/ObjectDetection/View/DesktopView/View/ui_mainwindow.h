/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
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
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
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
    QGridLayout *gridLayout;
    QPushButton *pushButton_3;
    QSlider *vMaxSlider;
    QSlider *sMinSlider;
    QHBoxLayout *horizontalLayout;
    QLabel *radiusLabel;
    QLabel *yLabelCenter;
    QLabel *xCenterLabel;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QSlider *minDistSlider;
    QSlider *param1Slider;
    QSlider *param2Slider;
    QPushButton *pushButton_2;
    QSlider *circleThicknessSlider;
    QSlider *vMinSlider;
    QSlider *sMaxSlider;
    QSlider *hMinSlider;
    QPushButton *pushButton;
    QSlider *hMaxSlider;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_5;
    QLabel *label_8;
    QSpinBox *spinBox_3;
    QSpinBox *spinBox_4;
    QSpinBox *spinBox_2;
    QSpinBox *spinBox_5;
    QSpinBox *spinBox_6;
    QSpinBox *spinBox_7;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QSlider *dilSlider;
    QPushButton *pushButton_5;
    QSpinBox *spinBox;
    QVBoxLayout *verticalLayout_3;
    QListView *listView;
    QPushButton *pushButton_4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(622, 471);
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
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 2, 5, 1, 1);

        vMaxSlider = new QSlider(centralWidget);
        vMaxSlider->setObjectName(QStringLiteral("vMaxSlider"));
        vMaxSlider->setMaximum(255);
        vMaxSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(vMaxSlider, 3, 4, 1, 1);

        sMinSlider = new QSlider(centralWidget);
        sMinSlider->setObjectName(QStringLiteral("sMinSlider"));
        sMinSlider->setMaximum(255);
        sMinSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(sMinSlider, 2, 2, 1, 1);

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


        gridLayout->addLayout(horizontalLayout, 3, 5, 1, 1);

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


        gridLayout->addWidget(groupBox_2, 4, 5, 1, 1);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 4, 4, 1, 1);

        circleThicknessSlider = new QSlider(centralWidget);
        circleThicknessSlider->setObjectName(QStringLiteral("circleThicknessSlider"));
        circleThicknessSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(circleThicknessSlider, 1, 5, 1, 1);

        vMinSlider = new QSlider(centralWidget);
        vMinSlider->setObjectName(QStringLiteral("vMinSlider"));
        vMinSlider->setMaximum(255);
        vMinSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(vMinSlider, 3, 2, 1, 1);

        sMaxSlider = new QSlider(centralWidget);
        sMaxSlider->setObjectName(QStringLiteral("sMaxSlider"));
        sMaxSlider->setMaximum(255);
        sMaxSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(sMaxSlider, 2, 4, 1, 1);

        hMinSlider = new QSlider(centralWidget);
        hMinSlider->setObjectName(QStringLiteral("hMinSlider"));
        hMinSlider->setMaximum(180);
        hMinSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(hMinSlider, 1, 2, 1, 1);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 4, 2, 1, 1);

        hMaxSlider = new QSlider(centralWidget);
        hMaxSlider->setObjectName(QStringLiteral("hMaxSlider"));
        hMaxSlider->setMaximum(180);
        hMaxSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(hMaxSlider, 1, 4, 1, 1);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 3, 0, 1, 1);

        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_7, 0, 2, 1, 1);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 2, 0, 1, 1);

        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        sizePolicy.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy);
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_8, 0, 4, 1, 1);

        spinBox_3 = new QSpinBox(centralWidget);
        spinBox_3->setObjectName(QStringLiteral("spinBox_3"));

        gridLayout->addWidget(spinBox_3, 2, 1, 1, 1);

        spinBox_4 = new QSpinBox(centralWidget);
        spinBox_4->setObjectName(QStringLiteral("spinBox_4"));

        gridLayout->addWidget(spinBox_4, 3, 1, 1, 1);

        spinBox_2 = new QSpinBox(centralWidget);
        spinBox_2->setObjectName(QStringLiteral("spinBox_2"));

        gridLayout->addWidget(spinBox_2, 1, 1, 1, 1);

        spinBox_5 = new QSpinBox(centralWidget);
        spinBox_5->setObjectName(QStringLiteral("spinBox_5"));

        gridLayout->addWidget(spinBox_5, 1, 3, 1, 1);

        spinBox_6 = new QSpinBox(centralWidget);
        spinBox_6->setObjectName(QStringLiteral("spinBox_6"));

        gridLayout->addWidget(spinBox_6, 2, 3, 1, 1);

        spinBox_7 = new QSpinBox(centralWidget);
        spinBox_7->setObjectName(QStringLiteral("spinBox_7"));

        gridLayout->addWidget(spinBox_7, 3, 3, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 1, 1, 1);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy1);
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

        pushButton_5 = new QPushButton(groupBox);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));

        verticalLayout->addWidget(pushButton_5);

        spinBox = new QSpinBox(groupBox);
        spinBox->setObjectName(QStringLiteral("spinBox"));

        verticalLayout->addWidget(spinBox);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 1, 0, 1, 2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        listView = new QListView(centralWidget);
        listView->setObjectName(QStringLiteral("listView"));

        verticalLayout_3->addWidget(listView);

        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));

        verticalLayout_3->addWidget(pushButton_4);


        gridLayout_3->addLayout(verticalLayout_3, 1, 2, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 622, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(hMaxSlider, SIGNAL(valueChanged(int)), spinBox_5, SLOT(setValue(int)));
        QObject::connect(sMaxSlider, SIGNAL(valueChanged(int)), spinBox_6, SLOT(setValue(int)));
        QObject::connect(vMaxSlider, SIGNAL(valueChanged(int)), spinBox_7, SLOT(setValue(int)));
        QObject::connect(hMinSlider, SIGNAL(valueChanged(int)), spinBox_2, SLOT(setValue(int)));
        QObject::connect(sMinSlider, SIGNAL(valueChanged(int)), spinBox_3, SLOT(setValue(int)));
        QObject::connect(vMinSlider, SIGNAL(valueChanged(int)), spinBox_4, SLOT(setValue(int)));
        QObject::connect(spinBox_2, SIGNAL(valueChanged(int)), hMinSlider, SLOT(setValue(int)));
        QObject::connect(spinBox_3, SIGNAL(valueChanged(int)), sMinSlider, SLOT(setValue(int)));
        QObject::connect(spinBox_4, SIGNAL(valueChanged(int)), vMinSlider, SLOT(setValue(int)));
        QObject::connect(spinBox_5, SIGNAL(valueChanged(int)), hMaxSlider, SLOT(setValue(int)));
        QObject::connect(spinBox_6, SIGNAL(valueChanged(int)), sMaxSlider, SLOT(setValue(int)));
        QObject::connect(spinBox_7, SIGNAL(valueChanged(int)), vMaxSlider, SLOT(setValue(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "Circle Color", Q_NULLPTR));
        radiusLabel->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        yLabelCenter->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        xCenterLabel->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Circles", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "Max Color", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Min Color", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "H", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "V", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Min", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "S", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Max", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "Elide", Q_NULLPTR));
        radioButton->setText(QApplication::translate("MainWindow", "RadioButton", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("MainWindow", "RadioButton", Q_NULLPTR));
        radioButton_3->setText(QApplication::translate("MainWindow", "RadioButton", Q_NULLPTR));
        radioButton_4->setText(QApplication::translate("MainWindow", "RadioButton", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "add More Dilate", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "Set Port", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
