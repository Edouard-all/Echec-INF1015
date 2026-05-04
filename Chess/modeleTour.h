#ifndef MODELETOUR_H
#define MODELETOUR_H

#include "modelePiece.h"

namespace modele {
class Tour : public Piece
{
public:
    explicit Tour(QObject *parent = nullptr,pair<int,int> positionInitiale = {0,0});
public slots:
    void mettreAJourPositionsValides() override;
};

}


#endif // MODELETOUR_H
