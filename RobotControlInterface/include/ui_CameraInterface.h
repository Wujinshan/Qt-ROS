/********************************************************************************
** Form generated from reading UI file 'CameraInterface.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERAINTERFACE_H
#define UI_CAMERAINTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CameraInterface
{
public:
    QLabel *Camera1ShowLabel;
    QLabel *Camera2ShowLabel;
    QPushButton *CloseButton;

    void setupUi(QWidget *CameraInterface)
    {
        if (CameraInterface->objectName().isEmpty())
            CameraInterface->setObjectName(QString::fromUtf8("CameraInterface"));
        CameraInterface->resize(850, 750);
        CameraInterface->setMinimumSize(QSize(850, 750));
        CameraInterface->setMaximumSize(QSize(850, 750));
        Camera1ShowLabel = new QLabel(CameraInterface);
        Camera1ShowLabel->setObjectName(QString::fromUtf8("Camera1ShowLabel"));
        Camera1ShowLabel->setGeometry(QRect(10, 10, 640, 360));
        Camera1ShowLabel->setMinimumSize(QSize(640, 360));
        Camera1ShowLabel->setFrameShape(QFrame::StyledPanel);
        Camera1ShowLabel->setFrameShadow(QFrame::Plain);
        Camera2ShowLabel = new QLabel(CameraInterface);
        Camera2ShowLabel->setObjectName(QString::fromUtf8("Camera2ShowLabel"));
        Camera2ShowLabel->setGeometry(QRect(10, 380, 640, 360));
        Camera2ShowLabel->setMinimumSize(QSize(640, 360));
        Camera2ShowLabel->setFrameShape(QFrame::StyledPanel);
        Camera2ShowLabel->setFrameShadow(QFrame::Plain);
        CloseButton = new QPushButton(CameraInterface);
        CloseButton->setObjectName(QString::fromUtf8("CloseButton"));
        CloseButton->setGeometry(QRect(700, 690, 111, 51));
        QFont font;
        font.setPointSize(15);
        CloseButton->setFont(font);

        retranslateUi(CameraInterface);

        QMetaObject::connectSlotsByName(CameraInterface);
    } // setupUi

    void retranslateUi(QWidget *CameraInterface)
    {
        CameraInterface->setWindowTitle(QApplication::translate("CameraInterface", "Camera Interface", nullptr));
        Camera1ShowLabel->setText(QString());
        Camera2ShowLabel->setText(QString());
        CloseButton->setText(QApplication::translate("CameraInterface", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CameraInterface: public Ui_CameraInterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERAINTERFACE_H
