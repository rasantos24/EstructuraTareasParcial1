#ifndef NODO_H
#define NODO_H
#include <iostream>
#include <QString>
using namespace std;

class Nodo
{
public:
    Nodo(QString valor);
    QString valor;
    int valores;
    Nodo(int valores);
    Nodo* anterior;
    Nodo* siguiente;

};

#endif // NODO_H
