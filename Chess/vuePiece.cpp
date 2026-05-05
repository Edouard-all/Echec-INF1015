#include "vuePiece.h"

namespace vue {
Piece::Piece(QWidget *parent)
    : QWidget{parent}
{
    piece_ = new QLabel(this);
}

Piece::~Piece() {
    delete piece_;
    piece_ = nullptr;
}
void Piece::setCouleur(bool estNoir) {

}

void Piece::dessinerPiece(QGraphicsScene* scene) {
    QPixmap image("C:/Users/Édouard/Documents/Polytechnique/H2026/INF1015/Echec-INF1015/Chess/Images/LightKing.jpg");
    QPixmap imageRedimentionne = image.scaled(echiquier_.getTailleCarre(), echiquier_.getTailleCarre());
    piece_->setPixmap(imageRedimentionne);
    QGraphicsProxyWidget *proxy = scene->addWidget(piece_);
    proxy->setPos(position_.first * echiquier_.getTailleCarre(), position_.second * echiquier_.getTailleCarre());
}
void Piece::setPosition(pair<int,int> position) {
    position_ = position;
}

}