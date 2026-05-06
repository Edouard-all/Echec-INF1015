#include "vuePiece.h"


namespace vue {
Piece::Piece(QWidget* parent)
    : QWidget{parent}
{
    piece_ = new ItemPiece();
}

Piece::~Piece() {
    delete piece_;
    piece_ = nullptr;
}
void Piece::setCouleur(bool estNoir) {
    estNoir_ = estNoir;
}

void Piece::dessinerPiece(QGraphicsScene* scene) {
    QPixmap image(":/images/Images/DarkKing.png");
    QPixmap imageRedimentionne = image.scaled(echiquier_.getTailleCarre(), echiquier_.getTailleCarre());
    piece_->setPixmap(imageRedimentionne);
    scene->addItem(piece_);
    piece_->setPos(position_.first * echiquier_.getTailleCarre(), position_.second * echiquier_.getTailleCarre());
}

Echiquier& Piece::getEchiquier() {
    return echiquier_;
}

bool Piece::getCouleur(){
    return estNoir_;
}

void Piece::setPosition(pair<int,int> position) {
    position_ = position;
}

}