#include "vueTour.h"

namespace vue {

Tour::Tour() {}

void Tour::dessinerPiece(QGraphicsScene* scene){
    QPixmap image;

    if (getCouleur()){
        image = QPixmap(":/images/Images/DarkRook.png");
    }
    else {
        image = QPixmap(":/images/Images/LightRook.png");
    }

    QPixmap imageRedimentionne = image.scaled(getEchiquier().getTailleCarre(), getEchiquier().getTailleCarre());
    setPixmap(imageRedimentionne);
    scene->addItem(this);
}

} // namespace vue
