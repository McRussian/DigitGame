#include "maingamewidget.h"


MainGameWidget::MainGameWidget(QWidget *parent) :
    QWidget(parent)
{
    this->_init();
}

MainGameWidget::~MainGameWidget()
{

}

void MainGameWidget::_init()
{
    this->setMinimumSize(250, 290);
}
