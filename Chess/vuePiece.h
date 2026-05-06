#ifndef VUEPIECE_H
#define VUEPIECE_H

#include <QWidget>
#include <QGraphicsProxyWidget>
#include <QLabel>
#include <QPixmap>
#include <QGraphicsSceneMouseEvent>
#include "vueEchiquier.h"

using namespace std;
namespace vue {
class Piece : public QGraphicsPixmapItem
{

public:
    explicit Piece(QGraphicsPixmapItem* parent = nullptr);
    ~Piece();
    void mousePressEvent(QGraphicsSceneMouseEvent* event) override;
    void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override;
    void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override;
    Echiquier& getEchiquier();
    bool getCouleur();
    virtual void dessinerPiece(QGraphicsScene* scene);

public slots:
    void setCouleur(bool estNoir);
    void setPosition(pair<int,int> position);
signals:

private:
    bool estNoir_;
    pair<int,int> position_;
    QPointF positionPiece_;
    QGraphicsPixmapItem* piece_;
    Echiquier echiquier_;
    //QPixmap image_(":/Images/DarkKing.jpg");
};
}

#endif // VUEPIECE_H
