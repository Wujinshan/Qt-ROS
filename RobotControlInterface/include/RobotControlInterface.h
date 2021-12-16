#pragma once

#include "ui_RobotControlInterface.h"
#include "CameraInterface.h"
#include <QTimer>
#include "RosCommunication.h"

class RobotControlInterface:public QWidget
{
    Q_OBJECT
public:
    RobotControlInterface(ros::NodeHandle &nh);
    ~RobotControlInterface();

public slots:
    void ExitButtonClicked(void);
    void CameraButtonClicked(void);
    void UpdateJointState(void);
    void RunButtonClicked(void);
    void ResetButtonClicked(void);

private:
    Ui::RobotControlInterface *ui;
    CameraInterface *camera_interface;
    QTimer *timer;
    RosCommunication *RC;
};