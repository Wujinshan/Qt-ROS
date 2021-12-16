#include "RobotControlInterface.h"
#include <QApplication>

int main(int argc,char *argv[])
{
    QApplication app(argc,argv);
    ros::init(argc, argv, "RobotContorlInterface");
    ros::NodeHandle nh;
    RobotControlInterface window(nh);
    window.show();
    return app.exec();
}