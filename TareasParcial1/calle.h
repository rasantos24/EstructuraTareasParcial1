#ifndef CALLES_H
#define CALLES_H

#include <vector>
#include <iostream>
#include <QString>

using namespace std;

class Calle
{

private:
    QString nombre;
    vector<Calle*> adyacente;
    string color;

public:
    Calle(QString nombre);
    QString getNombre();
    vector<Calle*> getAdyacente();
    string getColor();
    void getAgregar();
    bool existeCalle(QString nombre);
    void agregarCalle(Calle* calle);
    void cambiarColor(string color);
    ~Calle();  
};

#endif // CALLE_H
