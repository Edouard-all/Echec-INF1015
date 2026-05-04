#include "modelePiece.h"

namespace modele {
Piece::Piece(QObject *parent, pair<int,int> positionInitiale)
    : QObject{parent}
{
    position_ = positionInitiale;
}

Piece::Piece(const Piece& autre) {
    position_ = make_pair(autre.position_.first,autre.position_.second);
    for(pair<int,int> position : autre.positionsValides_) {
        positionsValides_.push_back(make_pair(position.first, position.second));
    }
}

pair<int, int> Piece::getPosition() {
    return position_;
}

vector<pair<int,int>> Piece::getPositionsValides() {
    return positionsValides_;
}

void Piece::reinitialiserPositionsValides() {

        positionsValides_.clear();
}

void Piece::deplacer(pair<int, int> position) {
    for (int i = 0 ; i < positionsValides_.size() ; i++) {
        if (positionsValides_[i] == position)
            position_ = position;
        emit positionChange(position_);
    }
    mettreAJourPositionsValides();
}

void Piece::mettreAJourPositionsValides() {

}

bool Piece::getEstNoir(){
    return estNoir_;
};

void Piece::setEstNoir(bool estNoir){
    estNoir_ = estNoir;
};
}