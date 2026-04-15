#ifndef VUEECHIQUIER_H
#define VUEECHIQUIER_H

#include <QWidget>
#include <QGraphicsView>
#include <QGraphicsScene>

class VueEchiquier : public QGraphicsView
{
    Q_OBJECT
public:
    explicit VueEchiquier(QWidget *parent = nullptr);
    void dessinerEchiquier();
    ~VueEchiquier();
private:
    QGraphicsScene* scene_;
    int tailleBordure_ = 8;
    int tailleCarre_ = 100;

signals:
};

#endif // VUEECHIQUIER_H
