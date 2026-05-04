#include "modelePiece.h"

modele::Piece::Piece(QObject *parent, pair<int,int> cases)
    : QObject{parent}
{
    position_ = cases;
}

modele::Piece::Piece(const Piece& autre) {
    position_ = make_pair(autre.position_.first,autre.position_.second);
    for(pair<int,int> position : autre.positionsValides_) {
        positionsValides_.push_back(make_pair(position.first, position.second));
    }
}

pair<int, int> modele::Piece::getPosition() {
    return position_;
}

vector<pair<int,int>> modele::Piece::getPositionsValides() {
    return positionsValides_;
}

void modele::Piece::reinitialiserPositionsValides() {
    //for (int i = 0; i < positionsValides_.size(); i++) {
        positionsValides_.clear();
    //}
}

void modele::Piece::deplacer(pair<int, int> position) {
    for (int i = 0 ; i < positionsValides_.size() ; i++) {
        if (positionsValides_[i] == position)
            position_ = position;
        emit positionChange(position_);
    }
    mettreAJourPositionsValides();
}

void modele::Piece::mettreAJourPositionsValides() {

}