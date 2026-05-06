#include "vueRoi.h"


namespace vue {

Roi::Roi() {
    piece_ = new ItemPiece();
}

Roi::~Roi(){
    delete piece_;
    piece_ = nullptr;
}

void Roi::dessinerPiece(QGraphicsScene* scene){
    QPixmap image;

    if (getCouleur()){
        image = QPixmap(":/images/Images/DarkKing.png");
    }
    else {
        image = QPixmap(":/images/Images/LightKing.png");
    }

    QPixmap imageRedimentionne = image.scaled(getEchiquier().getTailleCarre(), getEchiquier().getTailleCarre());
    piece_->setPixmap(imageRedimentionne);
    scene->addItem(piece_);
    piece_->setPos(position_.first * getEchiquier().getTailleCarre(), position_.second * getEchiquier().getTailleCarre());
}
} // namespace vue
