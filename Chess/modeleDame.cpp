#include "modeleDame.h"

modele::Dame::Dame(QObject *parent, pair<uint8_t,uint8_t> position)
    : modele::Piece{parent}
{
    position_ = position;
}

void modele::Dame::mettreAJourPositionsValides() {
    reinitialiserPositionsValides();
    for (uint8_t i = 0; i < 8; i++) {
        if (i != position_.second)
            positionsValides_.push_back(make_pair(position_.first,i));
        if (i != position_.first)
            positionsValides_.push_back(make_pair(i,position_.second));
        for(uint8_t j = 0; i < 8; j++) {
            if (j + i == i + position_.first + position_.second)
                continue;
        }
    }
    for (uint8_t i = 0; i < 8; i++) {
        if (i != position_.first) {
            positionsValides_.push_back(make_pair(i,position_.second));
        }
    }

}