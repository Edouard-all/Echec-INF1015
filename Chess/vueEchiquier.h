#ifndef VUEECHIQUIER_H
#define VUEECHIQUIER_H

#include <QWidget>
#include <QGraphicsView>
#include <QGraphicsScene>

namespace vue {
class Echiquier : public QGraphicsView
{
    Q_OBJECT
    friend class Jeu;
    friend class Piece;
    friend class Roi;
    friend class Dame;
    friend class Tour;
public:
    explicit Echiquier(QWidget *parent = nullptr);
    void dessinerEchiquier(QGraphicsScene* scene);
private:
    int tailleBordure_ = 8;
    int tailleCarre_ = 100;

signals:
};
}
#endif // VUEECHIQUIER_H
