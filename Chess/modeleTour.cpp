#include "modeleTour.h"

namespace modele {
Tour::Tour(QObject *parent, pair<int,int> positionInitiale)
    : Piece{parent,positionInitiale}
{}

void Tour::mettreAJourPositionsValides(){

    reinitialiserPositionsValides();
    for (int i = 0; i < tailleEchiquier; i++){
        if (i != position_.first){
            positionsValides_.push_back(make_pair(i, position_.second));
        }

        if (i != position_.second){
            positionsValides_.push_back(make_pair(position_.first, i));
        }
    }
}
}