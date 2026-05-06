#include "vueRoi.h"


namespace vue {

Roi::Roi() {}

void Roi::dessinerPiece(QGraphicsScene* scene){
    QPixmap image;

    if (getCouleur()){
        image = QPixmap(":/images/Images/DarkKing.png");
    }
    else {
        image = QPixmap(":/images/Images/LightKing.png");
    }

    QPixmap imageRedimentionne = image.scaled(getEchiquier().getTailleCarre(), getEchiquier().getTailleCarre());
    setPixmap(imageRedimentionne);
    scene->addItem(this);
}
} // namespace vue
