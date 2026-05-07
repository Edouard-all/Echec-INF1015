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

void Jeu::initialiserPiece(QString piece, int x, int y, bool estNoir){
    if (piece == "roi") {
        unique_ptr<Roi> roi = make_unique<Roi>();
        roi->setCouleur(estNoir);
        roi->setPosition({x, y});
        piece_.push_back(std::move(roi));
    }
    else if (piece == "dame") {
        unique_ptr<Dame> dame = make_unique<Dame>();
        dame->setCouleur(estNoir);
        dame->setPosition({x, y});
        piece_.push_back(std::move(dame));
    }
    else if (piece == "tour") {
        unique_ptr<Tour> tour = make_unique<Tour>();
        tour->setCouleur(estNoir);
        tour->setPosition({x, y});
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
void Jeu::initialiserPieces(QGraphicsScene* scene){
    /*initialisationPieceNoir(scene);
    initialisationPieceBlanche(scene);*/
    for (auto& piece: piece_) {
        piece->dessinerPiece(scene);
    }
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

    initialiserPieces(scene_);
    show();
}

}