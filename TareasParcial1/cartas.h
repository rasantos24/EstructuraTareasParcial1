#ifndef CARTAS_H
#define CARTAS_H


class Cartas
{
public:
    Cartas();
    Cartas(int numero);
    int numero;
    Cartas* siguiente;
    ~Cartas();
};

#endif // CARTAS_H
