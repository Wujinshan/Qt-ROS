#include "CameraInterface.h"

CameraInterface::CameraInterface(RosCommunication *RC)
{
    this->ui = new Ui::CameraInterface;
    this->ui->setupUi(this);

    this->RC = RC;

    this->timer = new QTimer;

    this->timer->start(30);

    this->connect(this->ui->CloseButton, SIGNAL(clicked()), this, SLOT(CloseButtonClicked()));
    this->connect(this->timer, SIGNAL(timeout()), this, SLOT(UpdateImage()));
}

CameraInterface::~CameraInterface()
{
    delete this->ui;
    delete this->timer;
}

void CameraInterface::CloseButtonClicked(void)
{
    this->hide();
}

void CameraInterface::UpdateImage(void)
{
    sensor_msgs::ImageConstPtr image1 = this->RC->GetImage(0);
    sensor_msgs::ImageConstPtr image2 = this->RC->GetImage(1);

    uchar *image1_ptr = (uchar *)&(image1->data[0]);
    uchar *image2_ptr = (uchar *)&(image2->data[0]);

    QImage qimage1 = QImage(image1_ptr, image1->width, image1->height, QImage::Format::Format_RGB888);
    QImage qimage2 = QImage(image2_ptr, image2->width, image2->height, QImage::Format::Format_RGB888);

    this->ui->Camera1ShowLabel->setPixmap(QPixmap::fromImage(qimage1));
    this->ui->Camera2ShowLabel->setPixmap(QPixmap::fromImage(qimage2));
}