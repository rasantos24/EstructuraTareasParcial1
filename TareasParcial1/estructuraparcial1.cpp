#include "estructuraparcial1.h"
#include "ui_estructuraparcial1.h"
#include <iostream>
#include <fstream>
#include <string>

EstructuraParcial1::EstructuraParcial1(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::EstructuraParcial1)
{
    ui->setupUi(this);
}

EstructuraParcial1::~EstructuraParcial1()
{
    delete ui;
}

void EstructuraParcial1::on_Tarea1Calle_clicked()
{
    Tarea1Semafaro tgmr;
    tgmr.exec();
}

void EstructuraParcial1::on_Tarea2_clicked()
{

}

void EstructuraParcial1::on_Tarea3Arreglo_clicked()
{
    Tareas3Arreglos tgmr;
    tgmr.exec();
}

void EstructuraParcial1::on_Tarea4_clicked()
{
    Tarea4Cartas tgmr;
    tgmr.exec();
}

void EstructuraParcial1::on_Tarea5_clicked()
{
    Tarea5 tgmr;
    tgmr.exec();
}

void EstructuraParcial1::on_Tarea6_clicked()
{
    Tarea6 tgmr;
    tgmr.exec();
}
