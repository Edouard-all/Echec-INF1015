#ifndef MODELETOUR_H
#define MODELETOUR_H
#include "modelePiece.h"
namespace modele {
class modeleTour : public modele::Piece
{
public:
    modeleTour();
    void mettreAJourPositionsValides() override;
};

}


#endif // MODELETOUR_H
