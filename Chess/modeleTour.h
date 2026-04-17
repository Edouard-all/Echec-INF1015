#ifndef MODELETOUR_H
#define MODELETOUR_H
<<<<<<< HEAD

class modeleTour : public ModelePiece
{
public:
    modeleTour();
};

=======
#include "modelePiece.h"
namespace modele {
class modeleTour : public modele::ModelePiece
{
public:
    modeleTour();
    void mettreAJourPositionsValides() override;
};

}


>>>>>>> main
#endif // MODELETOUR_H
