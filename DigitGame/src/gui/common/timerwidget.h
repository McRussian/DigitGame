#ifndef TIMERWIDGET_H
#define TIMERWIDGET_H

#include <QWidget>
#include <QLabel>
#include <QTime>
#include <QTimer>

/*
 * Простой таймер, отрисовывает прошедшее время
 * возвращает прошедшее время по запросу
 */

class TimerWidget : public QWidget
{
    Q_OBJECT

public:
    explicit TimerWidget(QWidget *parent = 0);
    ~TimerWidget();

    void start();
    void stop();
    void pause();
    QTime getTime();

private slots:
    void _update_label_timer();

private:
    QLabel * _lbl_name;
    QLabel * _lbl_time;
    QTimer * _timer;
    QTime * _time;

};

#endif // TIMERWIDGET_H
