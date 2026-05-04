#ifndef MODELETOUR_H
#define MODELETOUR_H

#include "modelePiece.h"

namespace modele {
class Tour : public modele::Piece
{
public:
    Tour();
public slots:
    void mettreAJourPositionsValides() override;
};

}


#endif // MODELETOUR_H
