#ifndef MODELEDAME_H
#define MODELEDAME_H

#include "modelePiece.h"

namespace modele {
class Dame : public Piece
{
public:
    explicit Dame(QObject *parent = nullptr, pair<uint8_t,uint8_t> position = {0,0});
    void mettreAJourPositionsValides() override;
};
}

#endif // MODELEDAME_H
