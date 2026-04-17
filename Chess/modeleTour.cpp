#include "modeleTour.h"


void modele::modeleTour::mettreAJourPositionsValides(){

    reinitialiserPositionsValides();
    for (uint8_t i = 0; i < 8; i++){
        if (i != position_.first){
            positionsValides_.push_back(make_pair(i, position_.second));
        }

        if (i != position_.second){
            positionsValides_.push_back(make_pair(position_.first, i));
        }
    }
}
