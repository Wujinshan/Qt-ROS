#pragma once
#include "ui_CameraInterface.h"
#include "RosCommunication.h"
#include <QTimer>
#include <QImage>

class CameraInterface:public QWidget
{
    Q_OBJECT
public:
    CameraInterface(RosCommunication *RC);
    ~CameraInterface();

public slots:
    void CloseButtonClicked(void);
    void UpdateImage(void);

private:
    Ui::CameraInterface *ui;
    RosCommunication *RC;
    QTimer *timer;
};