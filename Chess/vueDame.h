#pragma once
#ifndef VUEDAME_H
#define VUEDAME_H

#include <QObject>
#include "vuePiece.h"

namespace vue {

class Dame : public vue::Piece
{
public:
    Dame();
    ~Dame();
    virtual void dessinerPiece(QGraphicsScene* scene) override;

private:
    ItemPiece* piece_;
    pair<int,int> position_;

};

} // namespace vue

#endif // VUEDAME_H
