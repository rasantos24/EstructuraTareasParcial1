#ifndef TAREA4CARTAS_H
#define TAREA4CARTAS_H
#include <iostream>
#include "cartas.h"
#include <QDialog>

using namespace std;

namespace Ui {
class Tarea4Cartas;
}

class Tarea4Cartas : public QDialog
{
    Q_OBJECT

public:
    explicit Tarea4Cartas(QWidget *parent = 0);
    ~Tarea4Cartas();
    Cartas* inicio;
    Cartas* final;
    int size;
    QString lista[20];
    void agregarCarta(int numero);
    void eliminarCarta(int posi);
    Cartas* getPos(int posi);
    void insertarCarta(int numero, int posi);
    Cartas* buscarCarta(int numero);
    void llenarLista();

private slots:
    void on_agregar_clicked();

    void on_insertar_clicked();

    void on_eliminar_clicked();

private:
    Ui::Tarea4Cartas *ui;
};

#endif // TAREA4CARTAS_H
