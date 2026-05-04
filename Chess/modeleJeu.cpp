#include "modeleJeu.h"
#include "modelEchiquier.h"
#include "modeleTour.h"
#include "modeleDame.h"
#include "modeleRoi.h"

namespace modele {

    Jeu::Jeu(QObject *parent)
        : QObject{parent}
    {};

    void Jeu::jouerPartie(){};

    void Jeu::menu(){};

    void Jeu::PlacerNoirInit(){
        //unique_ptr<Roi> roi = make_unique(Roi({0,4}));
        unique_ptr<Dame> dame;
        unique_ptr<Tour> tour;
        //roi->setEstNoir(1);
        dame->setEstNoir(1);
        tour->setEstNoir(1);

        //echiquier_.placerPiece({uint8_t(0), uint8_t(4)}, std::move(roi));
        echiquier_.placerPiece({uint8_t(0), uint8_t(4)}, std::move(dame));
        echiquier_.placerPiece({uint8_t(0), uint8_t(4)}, std::move(tour));
        };

    void Jeu::PlacerBlancInit(){};

    void Jeu::initialisationPartie(){

    };
}