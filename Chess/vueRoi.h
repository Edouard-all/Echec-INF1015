#pragma once
#ifndef VUEROI_H
#define VUEROI_H

#include "vuePiece.h"


namespace vue {

class Roi : public vue::Piece
{
public:
    Roi();
    ~Roi();
    virtual void dessinerPiece(QGraphicsScene* scene) override;

private:
    ItemPiece* piece_;
    pair<int,int> position_;

};

} // namespace vue

#endif // VUEROI_H
