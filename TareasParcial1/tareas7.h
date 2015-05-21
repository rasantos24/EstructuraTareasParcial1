#ifndef TAREAS7_H
#define TAREAS7_H

#include <QDialog>
#include "nodo.h"
#include <iostream>

using namespace std;

namespace Ui {
class Tareas7;
}

class Tareas7 : public QDialog
{
    Q_OBJECT

public:
    explicit Tareas7(QWidget *parent = 0);
    ~Tareas7();
    Nodo* conjuntoA;
    Nodo* conjuntoB;
    Nodo* conjunto;
    void insertar(int valor, bool op);
    void combinar();
    void diferencia(bool op);
    void interseccion();
    void agregar(int valor);
    void llenar(int op);
    void quitar();
    bool limpiar();

private slots:
    void on_Intersepcion_clicked();

    void on_Diferencia1_clicked();

    void on_Diferencia2_clicked();

    void on_Limpiar_clicked();

    void on_ConjuntoA_clicked();

    void on_ConjuntoB_clicked();

    void on_ConjuntoR_clicked();

private:
    Ui::Tareas7 *ui;
};

#endif // TAREAS7_H
