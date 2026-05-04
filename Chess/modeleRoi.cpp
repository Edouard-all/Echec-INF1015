#include "modeleRoi.h"


modele::Roi::Roi(QObject *parent)
    : modele::Piece{parent}
{
    if(compteurInstaces_ >= 2)
        throw logic_error("");
    compteurInstaces_++;
}

modele::Roi::~Roi() {
    compteurInstaces_--;
}
void modele::Roi::mettreAJourPositionsValides() {
    reinitialiserPositionsValides();
    for(int i = -1; i < 2; i++) {
        if((position_.first + i >= 0) && (position_.first + i < tailleEchiquier)) {
            for (int j = -1; j < 2; j++) {
                if((position_.second + j >= 0) && (position_.second + j < tailleEchiquier)) {
                    if ((i == 0) && (j == 0))
                        continue;
                    positionsValides_.push_back(make_pair(position_.first + i, position_.second + j));
                }
            }
        }
    }
}