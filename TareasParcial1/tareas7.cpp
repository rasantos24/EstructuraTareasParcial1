#include "tareas7.h"
#include "ui_tareas7.h"

Tareas7::Tareas7(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Tareas7)
{
    ui->setupUi(this);
    conjunto = NULL;
    conjuntoA = NULL;
    conjuntoB = NULL;
}

Tareas7::~Tareas7()
{
    delete ui;
}

void Tareas7::agregar(int valor)
{
    if(!conjunto)
    {
        conjunto = new Nodo(valor);
    }
    Nodo* temp = conjunto;
    if(conjunto->valores != valor)
    {
        while(temp->siguiente !=NULL && temp->siguiente->valores != valor)
            temp = temp->siguiente;

        temp->siguiente = new Nodo(valor);
    }
}

void Tareas7::insertar(int valor, bool tgmr)
{
    if(tgmr)
    {
        if(conjuntoA == NULL)
        {
            conjuntoA = new Nodo(valor);
            return;
        }
        Nodo* tempo = conjuntoA;
        if(tempo->valores>valor)
        {
            conjuntoA = new Nodo(valor);
            conjuntoA->siguiente = tempo;
            return;
        }
        while(true)
        {
            if(valor == tempo->valores)
                return;
            if(tempo->siguiente !=NULL && tempo->siguiente->valores < valor)
                tempo = tempo->siguiente;
            if(tempo->siguiente == NULL)
                break;
            if(tempo->siguiente !=NULL && tempo->siguiente->valores > valor)
                break;
        }
        if(tempo != NULL)
        {
            Nodo* tempor = tempo->siguiente;
            tempo->siguiente = new Nodo(valor);
            tempo->siguiente->siguiente = tempor;
        }
   }

    if(!tgmr)
    {
        if(conjuntoB == NULL)
        {
            conjuntoB = new Nodo(valor);
            return;
        }
        Nodo* tempo = conjuntoB;
        if(tempo->valores > valor)
        {
            conjuntoB = new Nodo(valor);
            conjuntoB->siguiente = tempo;
            return;
        }
        while(true)
        {
            if(valor == tempo->valores)
                return;
            if(tempo->siguiente !=NULL && tempo->siguiente->valores < valor)
                tempo = tempo->siguiente;
            if(tempo->siguiente == NULL)
                break;
            if(tempo->siguiente !=NULL && tempo->siguiente->valores > valor)
                break;
        }
        if(tempo != NULL)
        {
            Nodo* tempor = tempo->siguiente;
            tempo->siguiente = new Nodo(valor);
            tempo->siguiente->siguiente = tempor;
        }
    }
}

void Tareas7::combinar()
{
    while(conjuntoA != NULL)
    {
        agregar(conjuntoA->valores);
        conjuntoA = conjuntoA->siguiente;
    }

    while(conjuntoB != NULL)
    {
        agregar(conjuntoB->valores);
        conjuntoB = conjuntoB->siguiente;
    }

}

void Tareas7::interseccion()
{
    while(conjuntoA && conjuntoB)
    {
         if(conjuntoA->valor == conjuntoB->valor)
         {
             agregar(conjuntoA->valores);
             conjuntoA = conjuntoA->siguiente;
             conjuntoB = conjuntoB->siguiente;
         }
         else if(conjuntoA->valor > conjuntoB->valor)
            conjuntoB = conjuntoB->siguiente;
         else
            conjuntoA = conjuntoA->siguiente;
     }
}
void Tareas7::diferencia(bool tgmr)
{
    if(tgmr)
    {
        while(conjuntoA && conjuntoB)
        {
             if(conjuntoA->valor != conjuntoB->valor)
             {
                 agregar(conjuntoA->valores);
                 conjuntoA = conjuntoA->siguiente;
             }
             else
             {
                 conjuntoA = conjuntoA->siguiente;
                 conjuntoB = conjuntoB->siguiente;
             }
         }
    }
    else
    {
        while(conjuntoA && conjuntoB)
        {
             if(conjuntoA->valor != conjuntoB->valor)
             {
                 agregar(conjuntoB->valores);
                 conjuntoB = conjuntoB->siguiente;
             }
             else
             {
                 conjuntoA = conjuntoA->siguiente;
                 conjuntoB = conjuntoB->siguiente;
             }
         }
    }

}

void Tareas7::llenar(int tgmr)
{
    if(tgmr == 1)
    {
        Nodo* tempo = conjuntoA;
        while(tempo != NULL)
        {
            ui->ListaA->addItem(QString::number(tempo->valores));
            tempo = tempo->siguiente;
        }
    }
    else if (tgmr == 2)
    {
        Nodo* tempo = conjuntoB;
        while(tempo != NULL)
        {
            ui->ListaB->addItem(QString::number(tempo->valores));
            tempo = tempo->siguiente;
        }
    }
    else
    {
        Nodo* tempo = conjunto;
        while(tempo != NULL)
        {
            ui->ListaR->addItem(QString::number(tempo->valores));
            tempo = tempo->siguiente;
        }
    }
}

bool Tareas7::limpiar()
{
    Nodo* tempo;
    if(conjunto)
    {
        tempo = conjunto;
        conjunto = tempo->siguiente;
        delete tempo;
        return true;
    }
    return false;
}

void Tareas7::quitar()
{
    while(limpiar());
}

void Tareas7::on_Intersepcion_clicked()
{
    ui->ListaR->clear();
    interseccion();
    llenar(3);
}

void Tareas7::on_Diferencia1_clicked()
{
    ui->ListaR->clear();
    diferencia(true);
    llenar(3);
}

void Tareas7::on_Diferencia2_clicked()
{
    ui->ListaR->clear();
    diferencia(false);
    llenar(3);
}

void Tareas7::on_Limpiar_clicked()
{
    ui->ListaR->clear();
    ui->ListaA->clear();
    ui->ListaB->clear();
    quitar();
}

void Tareas7::on_ConjuntoA_clicked()
{
    ui->ListaA->clear();
    insertar(ui->valore->text().toInt(),true);
    llenar(1);
}

void Tareas7::on_ConjuntoB_clicked()
{
    ui->ListaB->clear();
    insertar(ui->valore->text().toInt(),false);
    llenar(2);
}

void Tareas7::on_ConjuntoR_clicked()
{
    ui->ListaR->clear();
    combinar();
    llenar(3);
}
