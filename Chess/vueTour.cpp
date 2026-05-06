#include "vueTour.h"

namespace vue {

Tour::Tour() {
    piece_ = new ItemPiece();
}

Tour::~Tour(){
    delete piece_;
    piece_ = nullptr;
}

void Tour::dessinerPiece(QGraphicsScene* scene){
    QPixmap image;

    if (getCouleur()){
        image = QPixmap(":/images/Images/DarkRook.png");
    }
    else {
        image = QPixmap(":/images/Images/LightRook.png");
    }

    QPixmap imageRedimentionne = image.scaled(getEchiquier().getTailleCarre(), getEchiquier().getTailleCarre());
    piece_->setPixmap(imageRedimentionne);
    scene->addItem(piece_);
    piece_->setPos(position_.first * getEchiquier().getTailleCarre(), position_.second * getEchiquier().getTailleCarre());
}

} // namespace vue
