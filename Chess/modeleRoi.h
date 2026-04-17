#ifndef ROI_H
#define ROI_H
#include"modelePiece.h"

namespace modele {
class Roi : public modele::Piece
{
public:
    explicit Roi(QObject *parent = nullptr);
    void mettreAJourPositionsValides() override;
};
}

#endif // ROI_H)
