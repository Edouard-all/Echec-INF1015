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
    vue::VueEchiquier v;
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
    cout << "tour" << endl;
    cout << tour.getPositionsValides().size() << endl;
    modele::Dame dame;
    cout << "dame" << endl;
    pair<uint8_t,uint8_t> positionTemporaire = tour.getPositionsValides()[0];
    cout << "(" << (int)positionTemporaire.first << "," << (int)positionTemporaire.second << ")" << endl;
    cout << "(" << (int)tour.getPosition().first <<"," << (int)tour.getPosition().second << ")" << endl;
    RAII raii(tour,positionTemporaire);
    cout << "(" << (int)tour.getPosition().first <<"," << (int)tour.getPosition().second << ")" << endl;
    raii.~RAII();
    cout << "(" << (int)tour.getPosition().first <<"," << (int)tour.getPosition().second << ")" << endl;

    pair<uint8_t,uint8_t> positionTemporaire1 = roi1.getPositionsValides()[0];
    cout << "(" << (int)positionTemporaire1.first << "," << (int)positionTemporaire1.second << ")" << endl;

    cout << "(" << roi1.getPosition().first <<"," << roi1.getPosition().second << ")" << endl;
    RAII raii1(roi1,positionTemporaire);
    cout << "(" << roi1.getPosition().first <<"," << roi1.getPosition().second << ")" << endl;
    raii1.~RAII();
    pair<uint8_t,uint8_t> positionTemporaire2 = tour.getPositionsValides()[0];

    cout << "(" << tour.getPosition().first <<"," << tour.getPosition().second << ")" << endl;
    RAII raii2(tour,positionTemporaire);
    cout << "(" << tour.getPosition().first <<"," << tour.getPosition().second << ")" << endl;
    raii2.~RAII();
    pair<uint8_t,uint8_t> positionTemporaire3 = tour.getPositionsValides()[0];

    cout << "(" << tour.getPosition().first <<"," << tour.getPosition().second << ")" << endl;
    RAII raii3(tour,positionTemporaire);
    cout << "(" << tour.getPosition().first <<"," << tour.getPosition().second << ")" << endl;
    raii3.~RAII();

    return QCoreApplication::exec();
}
