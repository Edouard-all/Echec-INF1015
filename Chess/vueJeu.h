#ifndef VUEJEU_H
#define VUEJEU_H

#include <QWidget>

#include "vueEchiquier.h"

namespace vue {
class Jeu : public QWidget
{
    Q_OBJECT
public:
    explicit Jeu(QWidget *parent = nullptr);
private:
    vue::Echiquier echiquier;
signals:
};
}
#endif // VUEJEU_H
