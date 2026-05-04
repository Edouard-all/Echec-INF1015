#include "vuePiece.h"

namespace vue {
Piece::Piece(QWidget *parent)
    : QWidget{parent}
{}

void Piece::setCouleur(bool estNoir) {

}

void Piece::dessinerPiece() {
    //echiquer_.scene_->addPixmap(QPixmap(":/Images/DarkKing.jpg"));
}
void Piece::setPosition(pair<int,int> position) {
    position_ = position;
}

}