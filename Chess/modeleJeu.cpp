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
        unique_ptr<Roi> roi = make_unique<Roi>(pair{0,4});
        unique_ptr<Dame> dame = make_unique<Dame>(pair{0,3});
        unique_ptr<Tour> tour = make_unique<Tour>(pair{0,7});
        roi->setEstNoir(1);
        dame->setEstNoir(1);
        tour->setEstNoir(1);

        echiquier_.placerPiece({uint8_t(0), uint8_t(4)}, std::move(roi));
        echiquier_.placerPiece({uint8_t(0), uint8_t(3)}, std::move(dame));
        echiquier_.placerPiece({uint8_t(0), uint8_t(7)}, std::move(tour));
        };

    void Jeu::PlacerBlancInit(){
        unique_ptr<Roi> roi = make_unique<Roi>(pair{7,4});
        unique_ptr<Dame> dame = make_unique<Dame>(pair{7,3});
        unique_ptr<Tour> tour = make_unique<Tour>(pair{7,0});
        roi->setEstNoir(0);
        dame->setEstNoir(0);
        tour->setEstNoir(0);

        echiquier_.placerPiece({uint8_t(7), uint8_t(4)}, std::move(roi));
        echiquier_.placerPiece({uint8_t(7), uint8_t(3)}, std::move(dame));
        echiquier_.placerPiece({uint8_t(7), uint8_t(0)}, std::move(tour));
    };

    void Jeu::initialisationPartie(){

    };
}