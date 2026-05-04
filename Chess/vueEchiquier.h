#ifndef VUEECHIQUIER_H
#define VUEECHIQUIER_H

#include <QWidget>
#include <QGraphicsView>
#include <QGraphicsScene>

namespace vue {
class Echiquier : public QGraphicsView
{
    Q_OBJECT
public:
    explicit Echiquier(QWidget *parent = nullptr);
    void dessinerEchiquier();
    ~Echiquier();
private:
    QGraphicsScene* scene_;
    int tailleBordure_ = 8;
    int tailleCarre_ = 100;

signals:
};
}
#endif // VUEECHIQUIER_H
