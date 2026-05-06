#ifndef MENU_H
#define MENU_H

#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout>

class Menu : public QWidget
{
    Q_OBJECT
public:
    explicit Menu(QWidget *parent = nullptr);

signals:
};

#endif // MENU_H
