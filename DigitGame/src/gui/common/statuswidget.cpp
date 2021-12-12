#include "statuswidget.h"

StatusWidget::StatusWidget(QWidget *parent) :
    QWidget(parent)
{
    this->_init();
}

StatusWidget::~StatusWidget()
{

}

void StatusWidget::_init()
{
    this->setMinimumWidth(250);
    this->setFixedHeight(30);

    this->_hbox_layout = new QHBoxLayout(this);

    this->_wd_timer = new TimerWidget();
    this->_hbox_layout->addWidget(this->_wd_timer);
}
