#ifndef TAREA6_H
#define TAREA6_H
#include <QDialog>
#include <QString>
#include <iostream>
#include "nodo.h"

using namespace std;

namespace Ui {
class Tarea6;
}

class Tarea6 : public QDialog
{
    Q_OBJECT

public:
    explicit Tarea6(QWidget *parent = 0);
    ~Tarea6();
    Nodo* primero;
    Nodo* ultimo;
    bool vaciar();
    void ponerCola(Nodo* n);
    bool quitarCola();
    Nodo* getPrimero();
    void anular();
    void llenar();

private slots:
    void on_MeterValor_clicked();

    void on_SacarValor_clicked();

    void on_AnularValores_clicked();

private:
    Ui::Tarea6 *ui;
};

#endif // TAREA6_H
