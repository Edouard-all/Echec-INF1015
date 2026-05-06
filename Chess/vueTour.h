#ifndef VUETOUR_H
#define VUETOUR_H

#include "vuepiece.h"

namespace vue {

class Tour : public vue::Piece
{
public:
    Tour();
    virtual void dessinerPiece(QGraphicsScene* scene) override;

};

} // namespace vue

#endif // VUETOUR_H
