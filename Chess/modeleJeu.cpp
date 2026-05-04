#include "modeleJeu.h"
#include "modelEchiquier.h"
#include "modeleTour.h"
#include "modeleDame.h"
#include "modeleRoi.h"

namespace modele {

    Jeu::Jeu(QObject *parent)
        : QObject{parent}
    {};

    void Jeu::jouerPartie(){
        menu();

    };

    void Jeu::menu(){
        initialisationPartie(); // si appuyer sur jouer partie
    };

    template <typename T>
    void Jeu::initialisationPiece(T piece, pair<int, int> positionInitiale, bool estNoir){
        unique_ptr<T> t = make_unique<T>(positionInitiale);
        t->setEstNoir(estNoir);
        echiquier_.placerPiece(positionInitiale, std::move(t));
    };


    void Jeu::PlacerNoirInit(){

        initialisationPiece(Roi(), {4,0}, 1);
        initialisationPiece(Dame(), {3,0}, 1);
        initialisationPiece(Tour(), {7,0}, 1);
        };

    void Jeu::PlacerBlancInit(){

        initialisationPiece(Roi(), {4,7}, 0);
        initialisationPiece(Dame(), {3,7}, 0);
        initialisationPiece(Tour(), {0,7}, 0);
    };

    void Jeu::initialisationPartie(){
        PlacerNoirInit();
        PlacerBlancInit();
    };

    void Jeu::initialiserFinaleRoiVsRoi(){

        initialisationPiece(Roi(), {4,2}, 1);
        initialisationPiece(Roi(), {4,4}, 0);

    }

    void Jeu::initialiserFinaleRoiDameVsRoi(){

        initialisationPiece(Roi(), {4,0}, 1);
        initialisationPiece(Roi(), {4,4}, 0);
        initialisationPiece(Dame(), {3,3}, 0);

    }

    void Jeu::initialiserFinaleRoiTourVsRoi(){

        initialisationPiece(Roi(), {4,0}, 1);
        initialisationPiece(Roi(), {4,4}, 0);
        initialisationPiece(Tour(), {0,7}, 0);

    }

    void Jeu::initialiserFinaleRoiDameVsRoiTour(){

        initialisationPiece(Roi(), {6,0}, 1);
        initialisationPiece(Tour(), {4,0}, 1);
        initialisationPiece(Roi(), {4,6}, 0);
        initialisationPiece(Dame(), {3,4}, 0);

    }


}