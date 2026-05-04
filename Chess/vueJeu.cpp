#include "vueJeu.h"

namespace vue{
Jeu::Jeu(QWidget *parent)
    : QGraphicsView{parent}
{
    scene_ = new QGraphicsScene(this);

    setScene(scene_);

    dessinerJeu();
}

Jeu::~Jeu() {
    delete scene_;
    scene_ = nullptr;
}

void Jeu::dessinerJeu() {
    echiquier_.dessinerEchiquier(scene_);
}

}