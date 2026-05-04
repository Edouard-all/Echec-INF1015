#ifndef MODELEJEU_H
#define MODELEJEU_H

#include <QObject>
namespace  modele {


class Jeu : public QObject
{
    Q_OBJECT
public:
    explicit Jeu(QObject *parent = nullptr);
    void menu();
    void initialisation();


signals:
};
}

#endif // MODELEJEU_H
