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
    void PlacerNoirInit();
    void PlacerBlancInit();

private:
    Echiquier echiquier_;

signals:
};
}

#endif // MODELEJEU_H
