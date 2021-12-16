/********************************************************************************
** Form generated from reading UI file 'RobotControlInterface.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROBOTCONTROLINTERFACE_H
#define UI_ROBOTCONTROLINTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RobotControlInterface
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *Joint1StateShowEdit;
    QLineEdit *Joint2StateShowEdit;
    QLineEdit *Joint3StateShowEdit;
    QLineEdit *Joint4StateShowEdit;
    QLineEdit *Joint5StateShowEdit;
    QLineEdit *Joint6StateShowEdit;
    QLabel *label_8;
    QSlider *Joint1Slider;
    QSlider *Joint2Slider;
    QSlider *Joint3Slider;
    QSlider *Joint4Slider;
    QSlider *Joint5Slider;
    QSlider *Joint6Slider;
    QSpinBox *Joint1SpinBox;
    QSpinBox *Joint2SpinBox;
    QSpinBox *Joint3SpinBox;
    QSpinBox *Joint4SpinBox;
    QSpinBox *Joint5SpinBox;
    QSpinBox *Joint6SpinBox;
    QPushButton *ExitButton;
    QPushButton *CameraButton;
    QPushButton *ResetButton;
    QPushButton *RunButton;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;

    void setupUi(QWidget *RobotControlInterface)
    {
        if (RobotControlInterface->objectName().isEmpty())
            RobotControlInterface->setObjectName(QString::fromUtf8("RobotControlInterface"));
        RobotControlInterface->resize(1000, 650);
        RobotControlInterface->setMinimumSize(QSize(1000, 650));
        RobotControlInterface->setMaximumSize(QSize(1000, 650));
        QFont font;
        font.setPointSize(15);
        RobotControlInterface->setFont(font);
        label = new QLabel(RobotControlInterface);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 30, 191, 71));
        QFont font1;
        font1.setPointSize(20);
        label->setFont(font1);
        label_2 = new QLabel(RobotControlInterface);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 145, 130, 40));
        label_3 = new QLabel(RobotControlInterface);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(70, 195, 130, 40));
        label_4 = new QLabel(RobotControlInterface);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(70, 245, 130, 40));
        label_5 = new QLabel(RobotControlInterface);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(70, 295, 130, 40));
        label_6 = new QLabel(RobotControlInterface);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(70, 345, 130, 40));
        label_7 = new QLabel(RobotControlInterface);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(70, 395, 130, 40));
        Joint1StateShowEdit = new QLineEdit(RobotControlInterface);
        Joint1StateShowEdit->setObjectName(QString::fromUtf8("Joint1StateShowEdit"));
        Joint1StateShowEdit->setGeometry(QRect(200, 150, 100, 30));
        Joint1StateShowEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Joint1StateShowEdit->setReadOnly(true);
        Joint2StateShowEdit = new QLineEdit(RobotControlInterface);
        Joint2StateShowEdit->setObjectName(QString::fromUtf8("Joint2StateShowEdit"));
        Joint2StateShowEdit->setGeometry(QRect(200, 200, 100, 30));
        Joint2StateShowEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Joint2StateShowEdit->setReadOnly(true);
        Joint3StateShowEdit = new QLineEdit(RobotControlInterface);
        Joint3StateShowEdit->setObjectName(QString::fromUtf8("Joint3StateShowEdit"));
        Joint3StateShowEdit->setGeometry(QRect(200, 250, 100, 30));
        Joint3StateShowEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Joint3StateShowEdit->setReadOnly(true);
        Joint4StateShowEdit = new QLineEdit(RobotControlInterface);
        Joint4StateShowEdit->setObjectName(QString::fromUtf8("Joint4StateShowEdit"));
        Joint4StateShowEdit->setGeometry(QRect(200, 300, 100, 30));
        Joint4StateShowEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Joint4StateShowEdit->setReadOnly(true);
        Joint5StateShowEdit = new QLineEdit(RobotControlInterface);
        Joint5StateShowEdit->setObjectName(QString::fromUtf8("Joint5StateShowEdit"));
        Joint5StateShowEdit->setGeometry(QRect(200, 350, 100, 30));
        Joint5StateShowEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Joint5StateShowEdit->setReadOnly(true);
        Joint6StateShowEdit = new QLineEdit(RobotControlInterface);
        Joint6StateShowEdit->setObjectName(QString::fromUtf8("Joint6StateShowEdit"));
        Joint6StateShowEdit->setGeometry(QRect(200, 400, 100, 30));
        Joint6StateShowEdit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Joint6StateShowEdit->setReadOnly(true);
        label_8 = new QLabel(RobotControlInterface);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(490, 30, 291, 71));
        label_8->setFont(font1);
        Joint1Slider = new QSlider(RobotControlInterface);
        Joint1Slider->setObjectName(QString::fromUtf8("Joint1Slider"));
        Joint1Slider->setGeometry(QRect(630, 150, 200, 20));
        Joint1Slider->setMinimum(-180);
        Joint1Slider->setMaximum(180);
        Joint1Slider->setOrientation(Qt::Horizontal);
        Joint2Slider = new QSlider(RobotControlInterface);
        Joint2Slider->setObjectName(QString::fromUtf8("Joint2Slider"));
        Joint2Slider->setGeometry(QRect(630, 200, 200, 20));
        Joint2Slider->setMinimum(-180);
        Joint2Slider->setMaximum(180);
        Joint2Slider->setOrientation(Qt::Horizontal);
        Joint3Slider = new QSlider(RobotControlInterface);
        Joint3Slider->setObjectName(QString::fromUtf8("Joint3Slider"));
        Joint3Slider->setGeometry(QRect(630, 250, 200, 20));
        Joint3Slider->setMinimum(-180);
        Joint3Slider->setMaximum(180);
        Joint3Slider->setOrientation(Qt::Horizontal);
        Joint4Slider = new QSlider(RobotControlInterface);
        Joint4Slider->setObjectName(QString::fromUtf8("Joint4Slider"));
        Joint4Slider->setGeometry(QRect(630, 300, 200, 20));
        Joint4Slider->setMinimum(-180);
        Joint4Slider->setMaximum(180);
        Joint4Slider->setOrientation(Qt::Horizontal);
        Joint5Slider = new QSlider(RobotControlInterface);
        Joint5Slider->setObjectName(QString::fromUtf8("Joint5Slider"));
        Joint5Slider->setGeometry(QRect(630, 350, 200, 20));
        Joint5Slider->setMinimum(-180);
        Joint5Slider->setMaximum(180);
        Joint5Slider->setOrientation(Qt::Horizontal);
        Joint6Slider = new QSlider(RobotControlInterface);
        Joint6Slider->setObjectName(QString::fromUtf8("Joint6Slider"));
        Joint6Slider->setGeometry(QRect(630, 400, 200, 20));
        Joint6Slider->setMinimum(-180);
        Joint6Slider->setMaximum(180);
        Joint6Slider->setOrientation(Qt::Horizontal);
        Joint1SpinBox = new QSpinBox(RobotControlInterface);
        Joint1SpinBox->setObjectName(QString::fromUtf8("Joint1SpinBox"));
        Joint1SpinBox->setGeometry(QRect(840, 140, 80, 40));
        Joint1SpinBox->setMinimum(-180);
        Joint1SpinBox->setMaximum(180);
        Joint2SpinBox = new QSpinBox(RobotControlInterface);
        Joint2SpinBox->setObjectName(QString::fromUtf8("Joint2SpinBox"));
        Joint2SpinBox->setGeometry(QRect(840, 190, 80, 40));
        Joint2SpinBox->setMinimum(-180);
        Joint2SpinBox->setMaximum(180);
        Joint3SpinBox = new QSpinBox(RobotControlInterface);
        Joint3SpinBox->setObjectName(QString::fromUtf8("Joint3SpinBox"));
        Joint3SpinBox->setGeometry(QRect(840, 240, 80, 40));
        Joint3SpinBox->setMinimum(-180);
        Joint3SpinBox->setMaximum(180);
        Joint4SpinBox = new QSpinBox(RobotControlInterface);
        Joint4SpinBox->setObjectName(QString::fromUtf8("Joint4SpinBox"));
        Joint4SpinBox->setGeometry(QRect(840, 290, 80, 40));
        Joint4SpinBox->setMinimum(-180);
        Joint4SpinBox->setMaximum(180);
        Joint5SpinBox = new QSpinBox(RobotControlInterface);
        Joint5SpinBox->setObjectName(QString::fromUtf8("Joint5SpinBox"));
        Joint5SpinBox->setGeometry(QRect(840, 340, 80, 40));
        Joint5SpinBox->setMinimum(-180);
        Joint5SpinBox->setMaximum(180);
        Joint6SpinBox = new QSpinBox(RobotControlInterface);
        Joint6SpinBox->setObjectName(QString::fromUtf8("Joint6SpinBox"));
        Joint6SpinBox->setGeometry(QRect(840, 390, 80, 40));
        Joint6SpinBox->setMinimum(-180);
        Joint6SpinBox->setMaximum(180);
        ExitButton = new QPushButton(RobotControlInterface);
        ExitButton->setObjectName(QString::fromUtf8("ExitButton"));
        ExitButton->setGeometry(QRect(820, 570, 100, 50));
        CameraButton = new QPushButton(RobotControlInterface);
        CameraButton->setObjectName(QString::fromUtf8("CameraButton"));
        CameraButton->setGeometry(QRect(700, 570, 100, 50));
        ResetButton = new QPushButton(RobotControlInterface);
        ResetButton->setObjectName(QString::fromUtf8("ResetButton"));
        ResetButton->setGeometry(QRect(700, 450, 100, 50));
        RunButton = new QPushButton(RobotControlInterface);
        RunButton->setObjectName(QString::fromUtf8("RunButton"));
        RunButton->setGeometry(QRect(820, 450, 100, 50));
        label_9 = new QLabel(RobotControlInterface);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(500, 190, 130, 40));
        label_10 = new QLabel(RobotControlInterface);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(500, 290, 130, 40));
        label_11 = new QLabel(RobotControlInterface);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(500, 340, 130, 40));
        label_12 = new QLabel(RobotControlInterface);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(500, 140, 130, 40));
        label_13 = new QLabel(RobotControlInterface);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(500, 240, 130, 40));
        label_14 = new QLabel(RobotControlInterface);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(500, 390, 130, 40));

        retranslateUi(RobotControlInterface);

        QMetaObject::connectSlotsByName(RobotControlInterface);
    } // setupUi

    void retranslateUi(QWidget *RobotControlInterface)
    {
        RobotControlInterface->setWindowTitle(QApplication::translate("RobotControlInterface", "Robot Control Interface", nullptr));
        label->setText(QApplication::translate("RobotControlInterface", "Robot State:", nullptr));
        label_2->setText(QApplication::translate("RobotControlInterface", "Joint NO.1", nullptr));
        label_3->setText(QApplication::translate("RobotControlInterface", "Joint NO.2", nullptr));
        label_4->setText(QApplication::translate("RobotControlInterface", "Joint NO.3", nullptr));
        label_5->setText(QApplication::translate("RobotControlInterface", "Joint NO.4", nullptr));
        label_6->setText(QApplication::translate("RobotControlInterface", "Joint NO.5", nullptr));
        label_7->setText(QApplication::translate("RobotControlInterface", "Joint NO.6", nullptr));
        Joint1StateShowEdit->setText(QString());
        Joint2StateShowEdit->setText(QString());
        Joint3StateShowEdit->setText(QString());
        Joint4StateShowEdit->setText(QString());
        Joint5StateShowEdit->setText(QString());
        Joint6StateShowEdit->setText(QString());
        label_8->setText(QApplication::translate("RobotControlInterface", "Robot Command:", nullptr));
        ExitButton->setText(QApplication::translate("RobotControlInterface", "Exit", nullptr));
        CameraButton->setText(QApplication::translate("RobotControlInterface", "Camera", nullptr));
        ResetButton->setText(QApplication::translate("RobotControlInterface", "Reset", nullptr));
        RunButton->setText(QApplication::translate("RobotControlInterface", "Run", nullptr));
        label_9->setText(QApplication::translate("RobotControlInterface", "Joint NO.2", nullptr));
        label_10->setText(QApplication::translate("RobotControlInterface", "Joint NO.4", nullptr));
        label_11->setText(QApplication::translate("RobotControlInterface", "Joint NO.5", nullptr));
        label_12->setText(QApplication::translate("RobotControlInterface", "Joint NO.1", nullptr));
        label_13->setText(QApplication::translate("RobotControlInterface", "Joint NO.3", nullptr));
        label_14->setText(QApplication::translate("RobotControlInterface", "Joint NO.6", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RobotControlInterface: public Ui_RobotControlInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROBOTCONTROLINTERFACE_H
