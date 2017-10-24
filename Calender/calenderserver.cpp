#include "calenderserver.h"
#include "ui_calenderserver.h"

CalenderServer::CalenderServer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CalenderServer)
{
    ui->setupUi(this);
}

CalenderServer::~CalenderServer()
{
    delete ui;
}
