#ifndef CALENDERSERVER_H
#define CALENDERSERVER_H

#include <QMainWindow>

namespace Ui {
class CalenderServer;
}

class CalenderServer : public QMainWindow
{
    Q_OBJECT

public:
    explicit CalenderServer(QWidget *parent = 0);
    ~CalenderServer();

private:
    Ui::CalenderServer *ui;
};

#endif // CALENDERSERVER_H
