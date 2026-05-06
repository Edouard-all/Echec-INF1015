#include "itemPiece.h"

ItemPiece::ItemPiece() {}

void ItemPiece::mousePressEvent(QGraphicsSceneMouseEvent* event) {
    positionPiece_ = pos();
}

void ItemPiece::mouseMoveEvent(QGraphicsSceneMouseEvent* event){
    QPointF positionSouris = event->scenePos();
    setPos(positionSouris - QPointF(tailleCase_/2, tailleCase_/2));

}

void ItemPiece::mouseReleaseEvent(QGraphicsSceneMouseEvent* event){
    QPointF positionSouris = event->scenePos();
    int x = int(positionSouris.x() / tailleCase_);
    int y = int(positionSouris.y() / tailleCase_);
    setPos(x * tailleCase_, y * tailleCase_);
}

QPointF ItemPiece::getPositionPiece() {
    return positionPiece_;
}
