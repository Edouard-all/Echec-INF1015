#include "vueDame.h"

namespace vue {

Dame::Dame() {

    piece_ = new ItemPiece();
}

Dame::~Dame(){
    delete piece_;
    piece_ = nullptr;
}

void Dame::dessinerPiece(QGraphicsScene* scene){
    QPixmap image;

    if (getCouleur()){
        image = QPixmap(":/images/Images/DarkQueen.png");
    }
    else {
        image = QPixmap(":/images/Images/LightQueen.png");
    }

    QPixmap imageRedimentionne = image.scaled(getEchiquier().getTailleCarre(), getEchiquier().getTailleCarre());
    piece_->setPixmap(imageRedimentionne);
    scene->addItem(piece_);
    piece_->setPos(position_.first * getEchiquier().getTailleCarre(), position_.second * getEchiquier().getTailleCarre());
}

} // namespace vue
