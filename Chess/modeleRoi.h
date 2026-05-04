#ifndef ROI_H
#define ROI_H

#include"modelePiece.h"

namespace modele {
class Roi : public modele::Piece
{
public:
    explicit Roi(pair<int,int> positionInitiale = {0,0}, QObject *parent = nullptr);
    ~Roi();
public slots:
    void mettreAJourPositionsValides() override;
private:
    inline static uint8_t compteurInstaces_ = 0;
};
}

#endif // ROI_H)
