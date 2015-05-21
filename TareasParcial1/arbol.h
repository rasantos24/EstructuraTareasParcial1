#ifndef ARBOL_H
#define ARBOL_H
#include <iostream>
#include <QString>
using namespace std;

class Arbol
{
public:
    Arbol();
    Arbol* raiz;
    Arbol* hijoDerecho;
    Arbol* hijoIzquierdo;
    int valor;
    Arbol(int valor);
    void insertar(int valor, Arbol* actual);
    Arbol* buscar(int valor, Arbol* pos);
    void eliminar(int valor);
    Arbol* getMaximoDerecho(Arbol* raiz);
    void actualizar(int valor, int viejo);
    Arbol* getRaiz(int valor, Arbol* raiz);
    void preOrden(int valor, Arbol* raiz);
    void inOrden(int valor, Arbol* raiz);
    void postOrden(int valor, Arbol* raiz);
};

#endif // ARBOL_H
