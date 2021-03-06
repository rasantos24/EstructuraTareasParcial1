#ifndef ESTRUCTURAPARCIAL1_H
#define ESTRUCTURAPARCIAL1_H
#include <QMainWindow>
#include "tarea1semafaro.h"
#include "tareas3arreglos.h"
#include "tarea4cartas.h"
#include "tarea5.h"
#include "tarea6.h"
#include "tareas7.h"

namespace Ui {
class EstructuraParcial1;
}

class EstructuraParcial1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit EstructuraParcial1(QWidget *parent = 0);
    ~EstructuraParcial1();

private slots:
    void on_Tarea1Calle_clicked();

    void on_Tarea2_clicked();

    void on_Tarea3Arreglo_clicked();

    void on_Tarea4_clicked();

    void on_Tarea5_clicked();

    void on_Tarea6_clicked();

    void on_Tarea7_clicked();

private:
    Ui::EstructuraParcial1 *ui;
};

#endif // ESTRUCTURAPARCIAL1_H
