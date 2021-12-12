#ifndef MAINGAMEWIDGET_H
#define MAINGAMEWIDGET_H

#include <QWidget>


class MainGameWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MainGameWidget(QWidget *parent = 0);
    ~MainGameWidget();

private:
    void _init();


};

#endif // MAINGAMEWIDGET_H
