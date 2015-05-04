#include "tarea4cartas.h"
#include "ui_tarea4cartas.h"

Tarea4Cartas::Tarea4Cartas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Tarea4Cartas)
{
    ui->setupUi(this);
    inicio = NULL;
    final = NULL;
    size = 0;
}

Tarea4Cartas::~Tarea4Cartas()
{
    delete ui;
}

Cartas* Tarea4Cartas::getPos(int posi)
{
    if(posi>=0 && posi<size)
    {
        if(posi==size)
        {
            return final;
        }
        else
        {
            Cartas*temp = inicio;
            for(int x=1; x<=posi; x++)
            {
                temp = temp->siguiente;
            }
            return temp;
        }
    }
}

void Tarea4Cartas::agregarCarta(int numero)
{
    size++;
    if(!inicio)
    {
        inicio = new Cartas(numero);
        final = inicio;
        return;
    }
    final->siguiente = new Cartas(numero);
    final = final->siguiente;
}

void Tarea4Cartas::insertarCarta(int numero, int posi)
{
    if(posi>=0 && posi<size)
    {
        if(posi==0)
        {
            Cartas* temp = new Cartas(numero);
            temp->siguiente = inicio;
            inicio = temp;
        }
        else if(posi==size-1)
        {
            agregarCarta(numero);
            return;
        }
        else
        {
            Cartas* temp = getPos(posi-1);
            Cartas* tempo = new Cartas(numero);
            tempo->siguiente = temp->siguiente;
            temp->siguiente = tempo;
        }
        size++;
    }
}

void Tarea4Cartas::llenarLista()
{
    Cartas* temp = inicio;
    while (temp!=NULL)
    {
        ui->lista->addItem(QString::number(temp->numero));
        temp=temp->siguiente;
    }
}

void Tarea4Cartas::eliminarCarta(int pos)
{
    pos-=1;
    if(pos>=0&&pos<size-1)
    {
        Cartas* temp = getPos(pos);
        Cartas* tempo = temp->siguiente;
        temp->siguiente = tempo->siguiente;
        delete tempo;
        size--;
    }
    else if(pos==-1)
    {
        Cartas* temp = inicio;
        inicio = inicio->siguiente;
        delete temp;
        size--;
    }
    else if(pos==size-2)
    {
        Cartas* temp = getPos(pos);
        temp->siguiente = NULL;
        delete final;
        final = temp;
        size--;
    }

}
void Tarea4Cartas::on_agregar_clicked()
{
    ui->lista->clear();
    int pos = ui->posi->text().toInt();
    int valor = ui->nume->text().toInt();
    insertarCarta(valor,pos);
    llenarLista();
}

void Tarea4Cartas::on_insertar_clicked()
{
    ui->lista->clear();
    int valor = ui->nume->text().toInt();
    agregarCarta(valor);
    llenarLista();
}

void Tarea4Cartas::on_eliminar_clicked()
{
    ui->lista->clear();
    int pos = ui->posi->text().toInt();
    if(inicio!=NULL)
    {
        eliminarCarta(pos);
        llenarLista();
    }
}
