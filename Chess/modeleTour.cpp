#include "modeleTour.h"

modele::Tour::Tour() {

}

void modele::Tour::mettreAJourPositionsValides(){

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
