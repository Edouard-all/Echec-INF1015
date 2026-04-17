#include "modeleDame.h"

modele::Dame::Dame(QObject *parent, pair<uint8_t,uint8_t> position)
    : modele::Piece{parent}
{
    position_ = position;
}

void modele::Dame::mettreAJourPositionsValides() {
    reinitialiserPositionsValides();
    for (uint8_t)
}