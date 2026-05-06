#pragma once
#ifndef MODELEJEU_H
#define MODELEJEU_H

#include <QObject>
#include "modelEchiquier.h"


namespace  modele {


class Jeu : public QObject
{
    Q_OBJECT
public:
    explicit Jeu(QObject *parent = nullptr);
    void jouerPartie();
    void menu();
    void initialisationPartie();

    template <typename T>
    void initialisationPiece(T piece, pair<int, int> positionInitiale, bool estNoir);

    void PlacerNoirInit();
    void PlacerBlancInit();
    void initialiserFinaleRoiVsRoi();
    void initialiserFinaleRoiDameVsRoi();
    void initialiserFinaleRoiTourVsRoi();
    void initialiserFinaleRoiDameVsRoiTour();

private:
    Echiquier echiquier_;

signals:
    void pieceInitialise(string piece, pair<int,int> position, bool estNoir);
    /*void pieceInitialise(unique_ptr<Dame> piece, pair<int,int> position, bool estNoir);
    void pieceInitialise(unique_ptr<Tour> piece, pair<int,int> position, bool estNoir);*/
};
}

#endif // MODELEJEU_H
