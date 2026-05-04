#ifndef MODELEDAME_H
#define MODELEDAME_H

#include "modelePiece.h"

namespace modele {
class Dame : public Piece
{
public:
    explicit Dame(pair<int,int> position = {0,0}, QObject *parent = nullptr);
public slots:
    void mettreAJourPositionsValides() override;
};
}

#endif // MODELEDAME_H
