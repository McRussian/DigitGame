#include "timerwidget.h"

TimerWidget::TimerWidget(QWidget *parent) :
    QWidget(parent)
{
    this->setFixedSize(120, 25);

    this->_lbl_name = new QLabel(this);
    this->_lbl_name->setGeometry(2, 2, 60, 20);
    this->_lbl_name->setText(tr("Timer: "));
    this->_lbl_name->setAlignment(Qt::AlignRight);

    this->_lbl_time = new QLabel(this);
    this->_lbl_time->setGeometry(65, 2, 50, 20);

    this->_timer = new QTimer(this);
    this->_timer->setInterval(1000);
    connect(this->_timer, SIGNAL(timeout()), this, SLOT(_update_label_timer()));

    this->_time = new QTime(0, 0, 0);
}

void TimerWidget::_update_label_timer()
{
    this->_time->addSecs(1);
    this->_lbl_time->setText(this->_time->toString(Qt::ISODate));
}


void TimerWidget::start()
{
    this->_lbl_time->setText(this->_time->toString(Qt::ISODate));
    this->_timer->start();
}

void TimerWidget::stop()
{
    this->_timer->stop();
    this->_time = new QTime(0, 0, 0);
}


void TimerWidget::pause()
{
    this->_timer->stop();
}

QTime TimerWidget::getTime()
{
    return *this->_time;
}

TimerWidget::~TimerWidget()
{
    disconnect(this->_timer, SIGNAL(timeout()), this, SLOT(_update_label_timer()));
    delete this->_time;
}
