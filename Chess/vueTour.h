#pragma once
#ifndef VUETOUR_H
#define VUETOUR_H

#include "vuepiece.h"

namespace vue {

class Tour : public vue::Piece
{
public:
    Tour();
    ~Tour();
    virtual void dessinerPiece(QGraphicsScene* scene) override;
private:
    ItemPiece* piece_;
    //pair<int,int> position_;

};

} // namespace vue

#endif // VUETOUR_Hxw
