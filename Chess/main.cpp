/**
* programme qui implémente et teste les pièces, les exceptions de roi et le RAII
* \file   main.cpp
* \author  Aliou Dialo et Édouard Allaire
* \date   21 avril 2026
* Créé le 13 avril 2026
*/
#include "mainwindow.h"
#include "vueEchiquier.h"
#include "modeleRoi.h"
#include "modeleTour.h"
#include "modeleDame.h"
#include "raii.h"
#include <iostream>

#include <QApplication>

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    vue::Echiquier v;
    v.show();
    // w.show();
    modele::Roi roi1;
    modele::Roi roi2;
    try {
        modele::Roi roi3;
    }
    catch (logic_error) {
        cout << "Trop de Rois" << endl;
    }

    modele::Tour tour;
    tour.mettreAJourPositionsValides();
    roi1.mettreAJourPositionsValides();
    roi2.mettreAJourPositionsValides();
    cout << "tour" << endl;
    cout << tour.getPositionsValides().size() << endl;
    modele::Dame dame;
    dame.mettreAJourPositionsValides();
    cout << "dame" << endl;
    pair<int,int> positionTemporaire = tour.getPositionsValides()[0];
    cout << "(" << positionTemporaire.first << "," << positionTemporaire.second << ")" << endl;
    cout << "(" << tour.getPosition().first <<"," << tour.getPosition().second << ")" << endl;
    RAII raii(tour,positionTemporaire);
    cout << "(" << tour.getPosition().first <<"," << tour.getPosition().second << ")" << endl;
    raii.~RAII();
    cout << "(" << tour.getPosition().first <<"," << tour.getPosition().second << ")" << endl;

    pair<int,int> positionTemporaire1 = roi1.getPositionsValides()[0];
    cout << "(" << (int)positionTemporaire1.first << "," << (int)positionTemporaire1.second << ")" << endl;
    cout << "(" << roi1.getPosition().first <<"," << roi1.getPosition().second << ")" << endl;
    RAII raii1(roi1,positionTemporaire);
    cout << "(" << roi1.getPosition().first <<"," << roi1.getPosition().second << ")" << endl;
    raii1.~RAII();
    cout << "(" << roi1.getPosition().first <<"," << roi1.getPosition().second << ")" << endl;

    pair<int,int> positionTemporaire2 = roi2.getPositionsValides()[0];
    cout << "(" << roi2.getPosition().first <<"," << roi2.getPosition().second << ")" << endl;
    RAII raii2(roi2,positionTemporaire);
    cout << "(" << roi2.getPosition().first <<"," << roi2.getPosition().second << ")" << endl;
    raii2.~RAII();
    cout << "(" << roi2.getPosition().first <<"," << roi2.getPosition().second << ")" << endl;

    pair<int,int> positionTemporaire3 = dame.getPositionsValides()[0];
    cout << "(" << dame.getPosition().first <<"," << dame.getPosition().second << ")" << endl;
    RAII raii3(dame,positionTemporaire);
    cout << "(" << dame.getPosition().first <<"," << dame.getPosition().second << ")" << endl;
    raii3.~RAII();
    cout << "(" << dame.getPosition().first <<"," << dame.getPosition().second << ")" << endl;

    cout << "fin" << endl;

    return QCoreApplication::exec();
}
