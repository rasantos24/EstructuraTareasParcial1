#include "tarea6.h"
#include "ui_tarea6.h"

Tarea6::Tarea6(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Tarea6)
{
    ui->setupUi(this);
    primero = NULL;
    ultimo = NULL;
}

Tarea6::~Tarea6()
{
    delete ui;
}

bool Tarea6::vaciar()
{
    if(primero)
        return false;
    return true;
}

void Tarea6::ponerCola(Nodo* tgmr){
    if(primero == NULL)
    {
        primero = tgmr;
        ultimo = tgmr;
        return;
    }
    ultimo->anterior = tgmr;
    ultimo = tgmr;
}

bool Tarea6::quitarCola(){
    Nodo* tempo;
    if(primero)
    {
        tempo = primero;
        primero = tempo->anterior;
        delete tempo;
        return true;
    }
    return false;
}

Nodo* Tarea6::getPrimero()
{
    return primero;

}

void Tarea6::anular()
{
    while(quitarCola());
}

void Tarea6::llenar()
{
    Nodo* tempo = primero;
    while (tempo != NULL)
    {
        ui->mostrar->addItem(tempo->valor);
        tempo = tempo->anterior;
    }
}

void Tarea6::on_MeterValor_clicked()
{
    ui->mostrar->clear();
    Nodo* tempo = new Nodo(ui->numeros->text());
    ponerCola(tempo);
    llenar();
}

void Tarea6::on_SacarValor_clicked()
{
    ui->mostrar->clear();
    quitarCola();
    llenar();
}

void Tarea6::on_AnularValores_clicked()
{
    ui->mostrar->clear();
    anular();
    llenar();
}
