#include "RobotControlInterface.h"
#include <QString>
#include <string>

#define PI 3.1415926

RobotControlInterface::RobotControlInterface(ros::NodeHandle &nh)
{
    this->ui = new Ui::RobotControlInterface;
    this->ui->setupUi(this);
    
    this->timer = new QTimer;

    this->timer->start(500);

    //Create the RC(RosCommunication)
    std::string JointStateTopic = "/joint_states";
    std::string JointCommandTopic = "/robot_controller/command";
    std::vector<std::string> JointImageTopic;
    JointImageTopic.push_back("/camera1/image_raw");
    JointImageTopic.push_back("/camera2/image_raw");
    this->RC = new RosCommunication(JointCommandTopic, JointStateTopic, JointImageTopic, nh);

    this->camera_interface = new CameraInterface(RC);

    this->connect(this->ui->ExitButton, SIGNAL(clicked()), this, SLOT(ExitButtonClicked()));
    this->connect(this->ui->CameraButton, SIGNAL(clicked()), this, SLOT(CameraButtonClicked()));
    this->connect(this->ui->RunButton, SIGNAL(clicked()), this, SLOT(RunButtonClicked()));
    this->connect(this->ui->ResetButton, SIGNAL(clicked()), this, SLOT(ResetButtonClicked()));

    this->connect(this->timer, SIGNAL(timeout()), this, SLOT(UpdateJointState()));

    this->connect(this->ui->Joint1Slider, SIGNAL(valueChanged(int)), this->ui->Joint1SpinBox, SLOT(setValue(int)));
    this->connect(this->ui->Joint2Slider, SIGNAL(valueChanged(int)), this->ui->Joint2SpinBox, SLOT(setValue(int)));
    this->connect(this->ui->Joint3Slider, SIGNAL(valueChanged(int)), this->ui->Joint3SpinBox, SLOT(setValue(int)));
    this->connect(this->ui->Joint4Slider, SIGNAL(valueChanged(int)), this->ui->Joint4SpinBox, SLOT(setValue(int)));
    this->connect(this->ui->Joint5Slider, SIGNAL(valueChanged(int)), this->ui->Joint5SpinBox, SLOT(setValue(int)));
    this->connect(this->ui->Joint6Slider, SIGNAL(valueChanged(int)), this->ui->Joint6SpinBox, SLOT(setValue(int)));
    this->connect(this->ui->Joint1SpinBox, SIGNAL(valueChanged(int)), this->ui->Joint1Slider, SLOT(setValue(int)));
    this->connect(this->ui->Joint2SpinBox, SIGNAL(valueChanged(int)), this->ui->Joint2Slider, SLOT(setValue(int)));
    this->connect(this->ui->Joint3SpinBox, SIGNAL(valueChanged(int)), this->ui->Joint3Slider, SLOT(setValue(int)));
    this->connect(this->ui->Joint4SpinBox, SIGNAL(valueChanged(int)), this->ui->Joint4Slider, SLOT(setValue(int)));
    this->connect(this->ui->Joint5SpinBox, SIGNAL(valueChanged(int)), this->ui->Joint5Slider, SLOT(setValue(int)));
    this->connect(this->ui->Joint6SpinBox, SIGNAL(valueChanged(int)), this->ui->Joint6Slider, SLOT(setValue(int)));
}

RobotControlInterface::~RobotControlInterface()
{
    delete this->ui;
    delete this->camera_interface;
    delete this->timer;
    delete this->RC;
}

void RobotControlInterface::ExitButtonClicked(void)
{
    this->camera_interface->close();
    this->close();
}

void RobotControlInterface::CameraButtonClicked(void)
{
    this->camera_interface->show();
}

void RobotControlInterface::UpdateJointState()
{
    sensor_msgs::JointState::ConstPtr state;
    state = RC->GetJointState();
    double num[6];
    if (state)
    {
        for (int i = 0; i < 6;i++)
        {
            num[i] = state->position[i] * 180 / PI;
        }
        this->ui->Joint1StateShowEdit->setText(QString::number(num[2], 'f', 3));
        this->ui->Joint2StateShowEdit->setText(QString::number(num[1], 'f', 3));
        this->ui->Joint3StateShowEdit->setText(QString::number(num[0], 'f', 3));
        this->ui->Joint4StateShowEdit->setText(QString::number(num[3], 'f', 3));
        this->ui->Joint5StateShowEdit->setText(QString::number(num[4], 'f', 3));
        this->ui->Joint6StateShowEdit->setText(QString::number(num[5], 'f', 3));
    }
    else
    {
        this->ui->Joint1StateShowEdit->setText("NAN");
        this->ui->Joint2StateShowEdit->setText("NAN");
        this->ui->Joint3StateShowEdit->setText("NAN");
        this->ui->Joint4StateShowEdit->setText("NAN");
        this->ui->Joint5StateShowEdit->setText("NAN");
        this->ui->Joint6StateShowEdit->setText("NAN");
    }
}

void RobotControlInterface::RunButtonClicked()
{
    std_msgs::Float64MultiArray command;
    command.data.push_back((double)this->ui->Joint1SpinBox->value() * PI / 180);
    command.data.push_back((double)this->ui->Joint2SpinBox->value() * PI / 180);
    command.data.push_back((double)this->ui->Joint3SpinBox->value() * PI / 180);
    command.data.push_back((double)this->ui->Joint4SpinBox->value() * PI / 180);
    command.data.push_back((double)this->ui->Joint5SpinBox->value() * PI / 180);
    command.data.push_back((double)this->ui->Joint6SpinBox->value() * PI / 180);

    this->RC->SetJointPosition(command);
}

void RobotControlInterface::ResetButtonClicked()
{
    this->ui->Joint1SpinBox->setValue(0);
    this->ui->Joint2SpinBox->setValue(0);
    this->ui->Joint3SpinBox->setValue(0);
    this->ui->Joint4SpinBox->setValue(0);
    this->ui->Joint5SpinBox->setValue(0);
    this->ui->Joint6SpinBox->setValue(0);
}