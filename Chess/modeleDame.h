#ifndef MODELEDAME_H
#define MODELEDAME_H

#include "modelePiece.h"

namespace modele {
class Dame : public Piece
{
public:
    explicit Dame(QObject *parent = nullptr, pair<int,int> position = {0,0});
public slots:
    void mettreAJourPositionsValides() override;
};
}

#endif // MODELEDAME_H
