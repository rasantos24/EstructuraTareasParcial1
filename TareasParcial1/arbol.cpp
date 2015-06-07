#include "arbol.h"

Arbol::Arbol()
{
    raiz = NULL;
    hijoDerecho = NULL;
    hijoIzquierdo = NULL;
}

Arbol::Arbol(int valor)
{
    this->valor = valor;
}

void Arbol::insertar(int valor, Arbol *actual)
{
    if(!actual)
    {
        actual = new Arbol(valor);
        return;
    }
    if(actual->valor < valor)
        insertar(valor, actual->hijoIzquierdo);
    else
        insertar(valor, actual->hijoDerecho);
}

Arbol* Arbol::buscar(int valor, Arbol *pos)
{
    if(!raiz)
        return NULL;

    if(pos->valor == valor)
        return pos;

    if(pos->hijoIzquierdo->valor < valor)
        return buscar(valor,pos->hijoIzquierdo);

    return buscar(valor, pos->hijoDerecho);
}

void Arbol::eliminar(int valor)
{
    if(!raiz)
        return;

    Arbol* borra = buscar(valor, raiz);

    if(!borra->hijoDerecho && !borra->hijoIzquierdo)
        return delete borra;

    Arbol* tempo;

    if(borra && !borra->hijoDerecho)
    {
        tempo = borra;
        borra = borra->hijoIzquierdo;
        return delete tempo;
    }

    if(borra && !borra->hijoIzquierdo)
    {
        tempo = borra;
        borra = borra->hijoDerecho;
        return delete tempo;
    }
}

Arbol* Arbol::getMaximoDerecho(Arbol *raiz)
{
    while(!raiz->hijoDerecho)
        raiz = raiz->hijoDerecho;

    return raiz;
}

void Arbol::actualizar(int valor, int viejo)
{
    if(!raiz)
        return;

    Arbol* tempo = buscar(valor,raiz);

    if(tempo)
        return;

    eliminar(viejo);
    insertar(valor,raiz);
}

Arbol* Arbol::getRaiz(int valor, Arbol *raiz)
{
    if(!raiz || (raiz && raiz->valor == valor))
        return NULL;

    if((raiz->hijoDerecho && raiz->hijoDerecho->valor == valor) || (raiz->hijoIzquierdo && raiz->hijoIzquierdo->valor == valor))
        return raiz;

    if(raiz->hijoDerecho && valor > raiz->hijoDerecho->valor)
        return getRaiz(valor, raiz->hijoDerecho);

    if(raiz->hijoIzquierdo && valor < raiz->hijoIzquierdo->valor)
        return getRaiz(valor, raiz->hijoIzquierdo);

    return NULL;
}

void Arbol::preOrden(Arbol *raiz)
{
    if(!raiz)
        return;
    insertar(valor,raiz);
    preOrden(raiz->hijoIzquierdo);
    preOrden(raiz->hijoDerecho);
}

void Arbol::inOrden(Arbol *raiz)
{
    if(!raiz)
        return;
    inOrden(raiz->hijoIzquierdo);
    insertar(valor,raiz);
    inOrden(raiz->hijoDerecho);
}

void Arbol::postOrden(Arbol *raiz)
{
    if(!raiz)
        return;
    postOrden(raiz->hijoIzquierdo);
    postOrden(raiz->hijoDerecho);
    insertar(valor,raiz);
}

void Arbol::recorrer(char val)
{
    if(!raiz)
        return;
    Arbol* temp;
    while(!temp)
    {
        switch(val)
        {
            case '+':
                SDMR(val);
            break;

            case '-':
                SDMR(val);
            break;

            case '*':
                SDMR(val);
            break;

            case '/':
                SDMR(val);
            break;
        }

        temp = temp->siguiente;
    }
}

void Arbol::SDMR(char val)
{
    Arbol* tempo;

    switch(val)
    {
        case '+':
            global->siguiente->siguiente->valor += tempo->valor;
            inOrden(tempo);
        break;

        case '-':
            global->siguiente->siguiente->valor -= tempo->valor;
            inOrden(tempo);
        break;

        case '*':
            global->siguiente->siguiente->valor *= tempo->valor;
            inOrden(tempo);
        break;

        case '/':
            global->siguiente->siguiente->valor /= tempo->valor;
            inOrden(tempo);
        break;
    }

    tempo = global->siguiente->siguiente;
    global->siguiente->siguiente = tempo->siguiente;
    tempo->siguiente = tempo;

    if(!tempo->hijoDerecho && !tempo->hijoIzquierdo)
    {
        inOrden(tempo);
    }

}
