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
    //piece_.setPosition({0,1});
    echiquier_.dessinerEchiquier(scene_);
    piece_.dessinerPiece(scene_);
    show();
}

}