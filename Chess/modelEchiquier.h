#pragma once
#ifndef MODELECHIQUIER_H
#define MODELECHIQUIER_H



#include <QObject>

#include "modelePiece.h"

#include <utility>

using namespace std;
namespace modele {
class Echiquier : public QObject
{
    Q_OBJECT
public:
    explicit Echiquier(QObject *parent = nullptr);
    pair<int, unique_ptr<modele::Piece>>& getEchiquier(int range, int colone);
    void placerPiece(pair<uint8_t, uint8_t> cases, unique_ptr<modele::Piece> piece);
    void movePiece(pair<uint8_t, uint8_t> initial , pair<uint8_t, uint8_t> final);

private:
    pair<int, unique_ptr<modele::Piece>> echiquier_[8][8];
signals:
};
}
#endif // MODELECHIQUIER_H
