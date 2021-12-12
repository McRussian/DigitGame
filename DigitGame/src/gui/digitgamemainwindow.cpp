#include "digitgamemainwindow.h"

DigitGameMainWindow::DigitGameMainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->_init();
}

DigitGameMainWindow::~DigitGameMainWindow()
{

}

void DigitGameMainWindow::_init()
{
    this->setMinimumSize(250, 350);
    this->setWindowTitle("Game of Digit");
    this->_createMainMenu();

    this->_vbox_layout = new QVBoxLayout();
    this->_vbox_layout->addWidget(this->_mainMenu);

    this->_wd_game = new MainGameWidget(this);
    this->_vbox_layout->addWidget(this->_wd_game);

    this->_wd_status = new StatusWidget(this);
    this->_vbox_layout->addWidget(this->_wd_status);

    this->setLayout(this->_vbox_layout);
}

void DigitGameMainWindow::_createMainMenu()
{
    this->_mainMenu = new QMenuBar(this);
    this->_mainMenu->setMinimumWidth(350);
    this->_mainMenu->setFixedHeight(30);

    this->_gameMenu = new QMenu(tr("Game"));
    this->_mainMenu->addMenu(this->_gameMenu);

    this->_moveMenu = new QMenu(tr("Move"));
    this->_mainMenu->addMenu(this->_moveMenu);

    this->_settingMenu = new QMenu(tr("Setting"));
    this->_mainMenu->addMenu(this->_settingMenu);

    this->_helpMenu = new QMenu(tr("Help"));
    this->_mainMenu->addMenu(this->_helpMenu);

    this->_mainMenu->show();
}
