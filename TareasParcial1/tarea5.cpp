#include "tarea5.h"
#include "ui_tarea5.h"

Tarea5::Tarea5(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Tarea5)
{
    ui->setupUi(this);
    tope = NULL;
}

Tarea5::~Tarea5()
{
    delete ui;
}

Nodo*Tarea5::getTope()
{
    return tope;
}

bool Tarea5::sacar()
{
    if(tope)
    {
        Nodo* tempo = tope;
        tope = tope->anterior;
        delete tempo;
        return true;
    }
    return false;
}

void Tarea5::meter(Nodo* tgmr)
{
    if(tgmr)
        tgmr->anterior = tope;
    tope = tgmr;
}

bool Tarea5::vaciar()
{
    if(tope)
        return false;
    return true;
}

void Tarea5::anular()
{
    while(sacar());
}

void Tarea5::llenar()
{
    Nodo* tempo = tope;
    while (tempo!=NULL){
        ui->mostrar->addItem(tempo->valor);
        tempo=tempo->anterior;
    }
}

void Tarea5::on_MeterValor_clicked()
{
    ui->mostrar->clear();
    Nodo* tempo = new Nodo(ui->numeros->text());
    meter(tempo);
    llenar();
}

void Tarea5::on_SacarValor_clicked()
{
    ui->mostrar->clear();
    sacar();
    llenar();
}

void Tarea5::on_AnularValores_clicked()
{
    ui->mostrar->clear();
    anular();
    llenar();
}
