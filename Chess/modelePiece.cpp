#include "modelePiece.h"

modele::Piece::Piece(QObject *parent, pair<uint8_t,uint8_t> cases)
    : QObject{parent}
{
    position_ = cases;
}

pair<uint8_t, uint8_t> modele::Piece::getPosition() {
    return position_;
}

vector<pair<uint8_t,uint8_t>>& modele::Piece::getPositionsValides() {
    return positionsValides_;
}

void modele::Piece::reinitialiserPositionsValides() {
    for (uint8_t i = 0; i < positionsValides_.size(); i++) {
        positionsValides_.pop_back();
    }
}

void modele::Piece::deplacer(pair<uint8_t, uint8_t> position) {
    for (uint8_t i = 0 ; i < sizeof(positionsValides_) ; i++) {
        if (positionsValides_[i] == position)
            position_ = position;
        emit positionChange();
    }
}

void modele::Piece::mettreAJourPositionsValides() {

}