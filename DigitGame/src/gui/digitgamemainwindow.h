#ifndef DIGITGAMEMAINWINDOW_H
#define DIGITGAMEMAINWINDOW_H

#include <QMainWindow>
#include <QMenuBar>
#include <QVBoxLayout>
#include <QWidget>

#include "common/statuswidget.h"
#include "common/maingamewidget.h"

/*
 * Главное окно, в котором будут отражаться все игры
 * Содержит главное меню, главный виджет игры, и панель статуса
 * Главный виджет игры, у каждой выбранной игры свой
 * В панели статуса: таймер, сложность
 */

class DigitGameMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    DigitGameMainWindow(QWidget *parent = 0);
    ~DigitGameMainWindow();

private:
    void _init();
    void _createMainMenu();

private:
    QMenuBar * _mainMenu;
    QMenu * _gameMenu;
    QMenu * _moveMenu;
    QMenu * _settingMenu;
    QMenu * _helpMenu;

    QVBoxLayout* _vbox_layout;
    StatusWidget * _wd_status;
    MainGameWidget * _wd_game;
};

#endif // DIGITGAMEMAINWINDOW_H
