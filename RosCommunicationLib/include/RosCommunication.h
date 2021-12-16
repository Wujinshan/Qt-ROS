#pragma once
#include "ros/ros.h"
#include "sensor_msgs/JointState.h"
#include "sensor_msgs/Image.h"
#include "std_msgs/Float64MultiArray.h"
#include <string>

class RosCommunication
{
public:
    RosCommunication(std::string JointCommandTopic, std::string JointStateTopic, std::vector<std::string> ImageTopic, ros::NodeHandle &nh);

public:
    void SetJointPosition(const std_msgs::Float64MultiArray &JointArray);
    sensor_msgs::JointState::ConstPtr GetJointState();
    sensor_msgs::Image::ConstPtr GetImage(int num);

private:
    std::string JointCommandTopic;
    std::string JointStateTopic;
    std::vector<std::string> ImageTopic;
    ros::Publisher pub;
    ros::NodeHandle nh;
};
