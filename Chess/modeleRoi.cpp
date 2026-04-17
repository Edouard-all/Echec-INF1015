#include "modeleRoi.h"


modele::Roi::Roi(QObject *parent)
    : modele::Piece{parent}
{}

void modele::Roi::mettreAJourPositionsValides() {
    reinitialiserPositionsValides();
    for(uint8_t i = 0; i < 3; i++) {
        if(position_.first) {
            for (uint8_t j = 0; j < 3; j++) {
                if(position_.second)
                    positionsValides_.push_back(make_pair(position_.first - 1 + i, position_.second - 1 + j));
            }
        }
    }
}