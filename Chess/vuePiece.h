#pragma once
#ifndef VUEPIECE_H
#define VUEPIECE_H

#include <QWidget>
#include <QGraphicsProxyWidget>
#include <QLabel>
#include <QPixmap>
#include <QGraphicsSceneMouseEvent>
#include "vueEchiquier.h"
#include "itemPiece.h"

using namespace std;
namespace vue {
class Piece : public QWidget
{
    Q_OBJECT
    friend class Tour;
    friend class Roi;
    friend class Dame;
public:
    explicit Piece(QWidget* parent = nullptr);
    ~Piece();
    Echiquier& getEchiquier();
    bool getCouleur();

public slots:
    virtual void dessinerPiece(QGraphicsScene* scene);
    void setCouleur(bool estNoir);
    void setPosition(pair<int,int> position);
signals:
    void positionChange(pair<int,int> position);
private:
    bool estNoir_;
    pair<int,int> position_;
    //QPointF positionPiece_;
    ItemPiece* piece_;
    Echiquier echiquier_;
    //QPixmap image_(":/Images/DarkKing.jpg");
};
}

#endif // VUEPIECE_H
