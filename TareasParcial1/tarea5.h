#ifndef TAREA5_H
#define TAREA5_H
#include <iostream>
#include <QString>
#include <QDialog>
#include "nodo.h"

using namespace std;
namespace Ui {
class Tarea5;
}

class Tarea5 : public QDialog
{
    Q_OBJECT

public:
    explicit Tarea5(QWidget *parent = 0);
    ~Tarea5();
    Nodo* tope;
    Nodo* getTope();
    bool sacar();
    void meter(Nodo*obj);
    bool vaciar();
    void anular();
    void llenar();

private slots:
    void on_MeterValor_clicked();

    void on_SacarValor_clicked();

    void on_AnularValores_clicked();

private:
    Ui::Tarea5 *ui;
};

#endif // TAREA5_H
