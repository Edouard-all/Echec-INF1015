#include "vuePiece.h"


namespace vue {
Piece::Piece(QGraphicsPixmapItem* parent)
    : QGraphicsPixmapItem{parent}
{
    piece_ = new QGraphicsPixmapItem();
}

Piece::~Piece() {
    delete piece_;
    piece_ = nullptr;
}
void Piece::setCouleur(bool estNoir) {

}

void Piece::mousePressEvent(QGraphicsSceneMouseEvent* event) {
    positionPiece_ = pos();
}

void Piece::mouseMoveEvent(QGraphicsSceneMouseEvent* event){
    QPointF positionSouris = event->scenePos();
    setPos(positionSouris - QPointF(echiquier_.tailleCarre_/2, echiquier_.tailleCarre_/2));

}

void Piece::mouseReleaseEvent(QGraphicsSceneMouseEvent* event){
    QPointF positionSouris = event->scenePos();
    int x = int(positionSouris.x() / echiquier_.tailleCarre_);
    int y = int(positionSouris.y() / echiquier_.tailleCarre_);
    setPos(x * echiquier_.tailleCarre_, y * echiquier_.tailleCarre_);
}

void Piece::dessinerPiece(QGraphicsScene* scene) {
    QPixmap image(":/images/Images/DarkKing.jpg");
    QPixmap imageRedimentionne = image.scaled(echiquier_.getTailleCarre(), echiquier_.getTailleCarre());
    setPixmap(imageRedimentionne);

    scene->addItem(this);

}

void Piece::setPosition(pair<int,int> position) {
    position_ = position;
}

}