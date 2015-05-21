#include "nodo.h"

Nodo::Nodo(QString valor)
{
    this->valor = valor;
    anterior = NULL;
}

Nodo::Nodo(int valores)
{
    siguiente = NULL;
    this->valores = valores;
}
