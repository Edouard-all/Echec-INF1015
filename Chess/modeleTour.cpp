#include "modeleTour.h"

namespace modele {
Tour::Tour(pair<int,int> positionInitiale ,QObject *parent)
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