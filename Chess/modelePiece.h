#pragma once
#ifndef MODELEPIECE_H
#define MODELEPIECE_H

#include <QObject>

using namespace std;
namespace modele {

class Piece : public QObject
{
    Q_OBJECT
    friend class Tour;
    friend class Roi;
    friend class Dame;
public:
    explicit Piece(QObject *parent = nullptr, pair<uint8_t,uint8_t> cases = {0,0});
    explicit Piece(const Piece& autre);
public slots:
    pair<uint8_t, uint8_t> getPosition();
    vector<pair<uint8_t, uint8_t>> getPositionsValides() ;
    void reinitialiserPositionsValides();
    virtual void deplacer(pair<uint8_t, uint8_t> position);
    virtual void mettreAJourPositionsValides();
signals:
    void positionChange(pair<uint8_t,uint8_t> nouvellePosition);
private:
    pair<uint8_t, uint8_t> position_;
    vector<pair<uint8_t, uint8_t>> positionsValides_;
};
}

#endif // MODELEPIECE_H