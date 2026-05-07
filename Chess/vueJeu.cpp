#include "vueJeu.h"

namespace vue{
Jeu::Jeu(QWidget *parent)
    : QGraphicsView{parent}
{
    scene_ = new QGraphicsScene(this);
    bouton_ = new QPushButton("Menu");
    menu_= new QMenu();

    setScene(scene_);

    dessinerJeu();
}

Jeu::~Jeu() {
    delete scene_;
    scene_ = nullptr;

    delete bouton_;
    bouton_ = nullptr;

    delete menu_;
    menu_ = nullptr;
}

void Jeu::initialisationPiece(unique_ptr<Piece> piece, bool estNoir, QGraphicsScene* scene){
    piece->setCouleur(estNoir);
    piece->dessinerPiece(scene);
    piece_.push_back(std::move(piece));

}

void Jeu::initialisationPieceNoir(QGraphicsScene* scene){
    initialisationPiece(make_unique<Roi>(), 1, scene);
    initialisationPiece(make_unique<Dame>(), 1, scene);
    initialisationPiece(make_unique<Tour>(), 1, scene);
}

void Jeu::initialisationPieceBlanche(QGraphicsScene* scene){
    initialisationPiece(make_unique<Roi>(), 0, scene);
    initialisationPiece(make_unique<Dame>(), 0, scene);
    initialisationPiece(make_unique<Tour>(), 0, scene);
}

void Jeu::initialisationsPieces(QGraphicsScene* scene){
    initialisationPieceNoir(scene);
    initialisationPieceBlanche(scene);
}

void Jeu::dessinerMenu(){

    menu_->addAction("Nouvelle partie");
    menu_->addAction("Finale Roi vs Roi");
    menu_->addAction("Finale Roi + Dame vs Roi");
    menu_->addAction("Finale Roi + Tour vs Roi");
    menu_->addAction("Finale Roi + Dame vs Roi + Tour");

    bouton_->setMenu(menu_);

    scene_->addWidget(bouton_);
    proxy_ = scene_->addWidget(bouton_);
    proxy_->setPos(0,20);
}

void Jeu::dessinerJeu() {
    echiquier_.dessinerEchiquier(scene_);
    initialisationsPieces(scene_);
    dessinerMenu();

}

}