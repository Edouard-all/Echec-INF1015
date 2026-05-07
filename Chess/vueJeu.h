#pragma once
#ifndef VUEJEU_H
#define VUEJEU_H

#include <QWidget>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QPushButton>
#include <QMenu>

#include "vueEchiquier.h"
#include "vuePiece.h"
#include "vueRoi.h"
#include "vueDame.h"
#include "vueTour.h"

namespace vue {
class Jeu : public QGraphicsView
{
    Q_OBJECT
public:
    explicit Jeu(QWidget *parent = nullptr);
    ~Jeu();
    /*void initialisationPieceNoir(QGraphicsScene* scene);
    void initialisationPieceBlanche(QGraphicsScene* scene);
    void initialisationPiece(unique_ptr<Piece> piece, bool estNoir, QGraphicsScene* scene);
    void initialisationsPieces(QGraphicsScene* scene);
    void dessinerMenu();
public slots:
    void initialisationPiece(QGraphicsScene* scene);*/
    void initialiserPieces(QGraphicsScene* scene);
    void dessinerJeu();
public slots:
    void initialiserPiece(QString piece, int x, int y, bool estNoir);
private:
    vector<unique_ptr<Piece>> piece_;
    Echiquier echiquier_;
    QGraphicsScene* scene_;
    QMenu* menu_;
    QPushButton* bouton_;
    QGraphicsProxyWidget* proxy_;

signals:
};
}
#endif // VUEJEU_H
