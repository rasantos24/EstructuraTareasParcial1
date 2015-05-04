#include "tareas3arreglos.h"
#include "ui_tareas3arreglos.h"

Tareas3Arreglos::Tareas3Arreglos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Tareas3Arreglos)
{
    ui->setupUi(this);
    actual = 0;
    llenar();
    imprimir();
}

Tareas3Arreglos::~Tareas3Arreglos()
{
    delete ui;
}

bool Tareas3Arreglos::agregar(int numero)
{
    if(actual < 15)
    {
        arreglo[actual++] = QString::number(numero);
        return true;
    }
    return false;
}

bool Tareas3Arreglos::insertar(int posi, int numero)
{
    if(actual < 15 && posi < actual)
    {
        for(int i=actual-1; i>=posi; i--)
        {
            arreglo[i+1] = arreglo[i];
        }
        arreglo[posi] = QString::number(numero);
        actual++;
        return true;
    }
    return false;
}

void Tareas3Arreglos::limpiar()
{
    for(int i=0; i<actual; i++)
    {
        arreglo[i] = " ";
    }
    actual = 0;
}

int Tareas3Arreglos::buscar(int numero)
{
    for(int i=0; i < actual; i++)
    {
        if(arreglo[i] == QString::number(numero))
        {
            return i;
        }
    }
    return -1;
}

bool Tareas3Arreglos::eliminar(int posi)
{
    if(posi<actual)
    {
        for(int i= posi; i<actual; i++)
        {
            arreglo[i] = arreglo[i+1];
        }
        arreglo[--actual] = QString::number(0);
        return true;
    }
    return false;
}

void Tareas3Arreglos::imprimir()
{
    QString impresion;
    for(int i=0; i<actual; i++)
    {
        impresion += " · "+arreglo[i];
    }
    ui->arreglo->setText(impresion);
}

void Tareas3Arreglos::llenar()
{
    for(int i=0; i<actual; i++)
    {
        arreglo[i] = " ";
    }
}

void Tareas3Arreglos::on_agregar_clicked()
{
    int tempo = ui->valor->text().toInt();
    agregar(tempo);
    imprimir();
}

void Tareas3Arreglos::on_insertar_clicked()
{
    int numero = ui->valor->text().toInt();
    int posi = ui->posi->text().toInt();
    insertar(posi,numero);
    imprimir();
}

void Tareas3Arreglos::on_limpiar_clicked()
{
    limpiar();
    imprimir();
}

void Tareas3Arreglos::on_eliminar_clicked()
{
    int posi = ui->posi->text().toInt();
    eliminar(posi);
    imprimir();
}
