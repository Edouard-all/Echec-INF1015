#include "raii.h"

RAII::RAII(modele::Piece& piece, pair<uint8_t,uint8_t> positionTemporaire) {
    piece_ = &piece;
    anciennePosition_ = make_pair(piece_->getPosition().first,piece_->getPosition().second);
    piece_->deplacer(positionTemporaire);
}

RAII::~RAII() {
    piece_->deplacer(anciennePosition_);
}
