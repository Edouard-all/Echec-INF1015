#ifndef MODELETOUR_H
#define MODELETOUR_H
#include "modelePiece.h"
namespace modele {
class modeleTour : public modele::ModelePiece
{
public:
    modeleTour();
    void mettreAJourPositionsValides() override;
};

}


#endif // MODELETOUR_H
