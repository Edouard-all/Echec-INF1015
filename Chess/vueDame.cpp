#include "vueDame.h"

namespace vue {

Dame::Dame() {}

void Dame::dessinerPiece(QGraphicsScene* scene){
    QPixmap image;

    if (getCouleur()){
        image = QPixmap(":/images/Images/DarkQueen.png");
    }
    else {
        image = QPixmap(":/images/Images/LightQueen.png");
    }

    QPixmap imageRedimentionne = image.scaled(getEchiquier().getTailleCarre(), getEchiquier().getTailleCarre());
    setPixmap(imageRedimentionne);
    scene->addItem(this);
}

} // namespace vue
