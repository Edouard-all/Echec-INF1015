#include "vueEchiquier.h"
#include <QGraphicsRectItem>

vue::Echiquier::Echiquier(QWidget *parent)
    : QGraphicsView{parent}
{}


void vue::Echiquier::dessinerEchiquier(QGraphicsScene* scene){
    for (int i = 0; i < tailleBordure_; i++){
        for (int j = 0; j < tailleBordure_; j++ ){
             QGraphicsRectItem* carre = scene->addRect(j*tailleCarre_, i * tailleCarre_, tailleCarre_, tailleCarre_);
            if (i % 2 == 0){
                 if (j % 2 == 0){
                 carre->setBrush(Qt::white);
                 }
                 else {
                     carre->setBrush(Qt::black);
                 }
           }
           else{
                 if (j % 2 == 0){
                 carre->setBrush(Qt::black);
                 }
                 else {
                     carre->setBrush(Qt::white);
                 }
           }

        }
    }
}

int vue::Echiquier::getTailleCarre() {
    return tailleCarre_;
}
