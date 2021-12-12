#ifndef STATUSWIDGET_H
#define STATUSWIDGET_H

#include <QWidget>
#include <QHBoxLayout>

#include "timerwidget.h"


/*
 * Виджет статуса. Должен отображать таймер игры. уровни сложности
 * И дополнительную инфу, которую присылает игра
 */

class StatusWidget : public QWidget
{
    Q_OBJECT

public:
    explicit StatusWidget(QWidget *parent = 0);
    ~StatusWidget();

private:
    void _init();

private:
    QHBoxLayout * _hbox_layout;
    TimerWidget * _wd_timer;
};

#endif // STATUSWIDGET_H
