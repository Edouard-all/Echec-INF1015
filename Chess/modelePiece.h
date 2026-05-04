#pragma once
#ifndef MODELEPIECE_H
#define MODELEPIECE_H

#include <QObject>

using namespace std;
namespace modele {
const int tailleEchiquier = 8;
class Piece : public QObject
{
    Q_OBJECT
    friend class Tour;
    friend class Roi;
    friend class Dame;
public:
    explicit Piece(QObject *parent = nullptr, pair<int,int> cases = {0,0});
    explicit Piece(const Piece& autre);
public slots:
    pair<int, int> getPosition();
    vector<pair<int, int>> getPositionsValides() ;
    void reinitialiserPositionsValides();
    bool getEstNoir();
    void setEstNoir(bool estNoir);
    virtual void deplacer(pair<int, int> position);
    virtual void mettreAJourPositionsValides();
signals:
    void positionChange(pair<int,int> nouvellePosition);
    void couleurInitialise(bool estNoir);
private:
    pair<int, int> position_;
    vector<pair<int, int>> positionsValides_;
    bool estNoir_;
};
}

#endif // MODELEPIECE_H