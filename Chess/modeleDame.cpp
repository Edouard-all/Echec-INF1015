#include "modeleDame.h"

namespace modele {
Dame::Dame(QObject *parent, pair<int,int> positionInitiale)
    : Piece{parent,positionInitiale}
{}

void Dame::mettreAJourPositionsValides() {
    reinitialiserPositionsValides();
    for (int i = 0; i < tailleEchiquier; i++) {
        if (i != position_.second)
            positionsValides_.push_back(make_pair(position_.first,i));
        if (i != position_.first)
            positionsValides_.push_back(make_pair(i,position_.second));
        for(int j = 0; j < tailleEchiquier; j++) {
            if (j + i == position_.first + position_.second)
                positionsValides_.push_back(make_pair(i,j));
        }
        for(int j = 0; j < tailleEchiquier; j++) {
            if (j - i == position_.first - position_.second)
                positionsValides_.push_back(make_pair(i,j));
        }
    }
}
}