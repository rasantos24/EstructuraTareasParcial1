#ifndef TAREA1SEMAFARO_H
#define TAREA1SEMAFARO_H
#include <vector>
#include "calle.h"
#include <QDialog>
#include <QLabel>

using namespace std;

namespace Ui {
class Tarea1Semafaro;
}

class Tarea1Semafaro : public QDialog
{
    Q_OBJECT

public:
    explicit Tarea1Semafaro(QWidget *parent = 0);
    ~Tarea1Semafaro();

    Calle* AB;
    Calle* AC;
    Calle* AD;
    Calle* BA;
    Calle* BC;
    Calle* BD;
    Calle* DA;
    Calle* DB;
    Calle* DC;
    Calle* EA;
    Calle* EB;
    Calle* EC;
    Calle* ED;
    vector<Calle*> Grafo;
    vector<QLabel*> Alabel;
    void pintar();
    void comparar();

private slots:
    void on_pintarCalles_clicked();

private:
    Ui::Tarea1Semafaro *ui;
};

#endif // TAREA1SEMAFARO_H
