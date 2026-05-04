#ifndef VUEPIECE_H
#define VUEPIECE_H

#include <QWidget>
#include <QLabel>
#include <QPixmap>

#include "vueEchiquier.h"

using namespace std;
namespace vue {
class Piece : public QWidget
{
    Q_OBJECT
public:
    explicit Piece(QWidget *parent = nullptr);
    void dessinerPiece();
public slots:
    void setCouleur(bool estNoir);
    void setPosition(pair<int,int> position);
signals:

private:
    bool estNoir_;
    pair<int,int> position_;
    QLabel piece_;
    Echiquier echiquer_;
    //QPixmap image_(":/Images/DarkKing.jpg");
};
}

#endif // VUEPIECE_H
