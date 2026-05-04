#include "vueEchiquier.h"
#include <QGraphicsRectItem>

vue::Echiquier::Echiquier(QWidget *parent)
    : QGraphicsView{parent}
{
    scene_ = new QGraphicsScene(this);

    setScene(scene_);

    dessinerEchiquier();
}

vue::Echiquier::~Echiquier() {
    delete scene_;
    scene_ = nullptr;
}

void vue::Echiquier::dessinerEchiquier(){
    for (int i = 0; i < tailleBordure_; i++){
        for (int j = 0; j < tailleBordure_; j++ ){
             auto carre = scene_->addRect(j*tailleCarre_, i * tailleCarre_, tailleCarre_, tailleCarre_);
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