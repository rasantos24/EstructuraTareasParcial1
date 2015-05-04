#include "calle.h"

Calle::Calle(QString nombre)
{
    this->nombre = nombre;
    color = "WHITE";
}

QString Calle::getNombre()
{
    return nombre;
}

vector<Calle*> Calle::getAdyacente()
{
    return adyacente;
}

void Calle::getAgregar()
{
    for(vector<Calle*>::iterator e = adyacente.begin(); e!=adyacente.end(); e++)
    {
        cout<<(*e)->getNombre().toStdString()<<endl;
    }
}

string Calle::getColor()
{
    return color;
}

bool Calle::existeCalle(QString nombre)
{
    for(vector<Calle*>::iterator e = adyacente.begin(); e!=adyacente.end(); e++)
    {
        if((*e)->getNombre()== nombre)
        {
            return true;
        }
    }
    return false;
}

void Calle::agregarCalle(Calle* calle)
{
    adyacente.push_back(calle);
}

void Calle::cambiarColor(string color)
{
    this->color = color;
}

Calle::~Calle()
{

}
