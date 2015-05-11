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
    Nodo* anterior;
};

#endif // NODO_H
