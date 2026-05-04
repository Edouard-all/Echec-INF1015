#ifndef VUEJEU_H
#define VUEJEU_H

#include <QWidget>
#include <QGraphicsView>
#include <QGraphicsScene>

#include "vueEchiquier.h"
#include "vuePiece.h"

namespace vue {
class Jeu : public QGraphicsView
{
    Q_OBJECT
public:
    explicit Jeu(QWidget *parent = nullptr);
    ~Jeu();
public slots:
    void dessinerJeu();
private:
    vue::Piece piece_;
    vue::Echiquier echiquier_;
    QGraphicsScene* scene_;
signals:
};
}
#endif // VUEJEU_H
