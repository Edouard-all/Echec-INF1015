#ifndef ITEMPIECE_H
#define ITEMPIECE_H

#include <QGraphicsPixmapItem>
#include <QGraphicsSceneMouseEvent>

class ItemPiece : public QGraphicsPixmapItem
{
public:
    ItemPiece();
    QPointF getPositionPiece();
protected:
    void mousePressEvent(QGraphicsSceneMouseEvent* event) override;
    void mouseMoveEvent(QGraphicsSceneMouseEvent* event) override;
    void mouseReleaseEvent(QGraphicsSceneMouseEvent* event) override;
private:
    int tailleCase_ = 100;
    QPointF positionPiece_;
};

#endif // ITEMPIECE_H
