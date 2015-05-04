#ifndef TAREAS3ARREGLOS_H
#define TAREAS3ARREGLOS_H
#include <iostream>
#include <QDialog>

using namespace std;

namespace Ui {
class Tareas3Arreglos;
}

class Tareas3Arreglos : public QDialog
{
    Q_OBJECT

public:
    explicit Tareas3Arreglos(QWidget *parent = 0);
    ~Tareas3Arreglos();
    bool agregar(int numero);
    bool insertar(int posi, int numero);
    bool eliminar(int posi);
    int buscar(int numero);
    void limpiar();
    void imprimir();
    void llenar();

private slots:
    void on_agregar_clicked();

    void on_insertar_clicked();

    void on_limpiar_clicked();

    void on_eliminar_clicked();

private:
    Ui::Tareas3Arreglos *ui;
    int actual;
    QString arreglo[15];
};

#endif // TAREAS3ARREGLOS_H
