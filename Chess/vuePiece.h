#ifndef VUEPIECE_H
#define VUEPIECE_H

#include <QWidget>

namespace vue {
    class Piece : public QWidget
    {
        Q_OBJECT
    public:
        explicit Piece(QWidget *parent = nullptr);

    signals:
    };
}

#endif // VUEPIECE_H
