#ifndef RAII_H
#define RAII_H

#include "modelePiece.h"

#include <QObject>

class RAII : public QObject
{
    Q_OBJECT

public:
    RAII(modele::Piece& piece, pair<uint8_t,uint8_t> positionTemporaire);
    ~RAII();
private:
    modele::Piece* piece_;
    pair<uint8_t,uint8_t> anciennePosition_;
};

#endif // RAII_H
