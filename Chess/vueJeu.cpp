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

void Jeu::initialisationPiece(string piece, pair<int,int> positionInitiale, bool estNoir){
    if (piece == "roi") {
        unique_ptr<Roi> roi = make_unique<Roi>();
        roi->setCouleur(estNoir);
        roi->setPosition(positionInitiale);
        piece_.push_back(std::move(roi));
    }
    else if (piece == "dame") {
        unique_ptr<Dame> dame = make_unique<Dame>();
        dame->setCouleur(estNoir);
        dame->setPosition(positionInitiale);
        piece_.push_back(std::move(dame));
    }
    else if (piece == "tour") {
        unique_ptr<Tour> tour = make_unique<Tour>();
        tour->setCouleur(estNoir);
        tour->setPosition(positionInitiale);
        piece_.push_back(std::move(tour));
    }
    /*piece->setCouleur(estNoir);
    piece->setPosition(positionInitiale);
    // piece->dessinerPiece(scene);
    piece_.push_back(std::move(piece));*/

}

/*void Jeu::initialisationPieceNoir(QGraphicsScene* scene){
    initialisationPiece(make_unique<Roi>(), 1, scene);
    initialisationPiece(make_unique<Dame>(), 1, scene);
    initialisationPiece(make_unique<Tour>(), 1, scene);
}

void Jeu::initialisationPieceBlanche(QGraphicsScene* scene){
    initialisationPiece(make_unique<Roi>(), 0, scene);
    initialisationPiece(make_unique<Dame>(), 0, scene);
    initialisationPiece(make_unique<Tour>(), 0, scene);
}
*/
void Jeu::initialisationsPieces(QGraphicsScene* scene){
    /*initialisationPieceNoir(scene);
    initialisationPieceBlanche(scene);*/
    for (auto& piece: piece_) {
        piece->dessinerPiece(scene);
    }
}

void Jeu::dessinerJeu() {
    echiquier_.dessinerEchiquier(scene_);
    initialisationsPieces(scene_);
    show();
}

}