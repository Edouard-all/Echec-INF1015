#pragma once
#ifndef VUEROI_H
#define VUEROI_H

#include "vuePiece.h"

namespace vue {

class Roi : public vue::Piece
{
public:
    Roi();
    virtual void dessinerPiece(QGraphicsScene* scene) override;

};

} // namespace vue

#endif // VUEROI_H
