#include "tarea1semafaro.h"
#include "ui_tarea1semafaro.h"

Tarea1Semafaro::Tarea1Semafaro(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Tarea1Semafaro)
{
    ui->setupUi(this);

    Calle* AB = new Calle("AB");
    Calle* AC = new Calle("AC");
    Calle* AD = new Calle("AD");
    Calle* BA = new Calle("BA");
    Calle* BC = new Calle("BC");
    Calle* BD = new Calle("BD");
    Calle* DA = new Calle("DA");
    Calle* DB = new Calle("DB");
    Calle* DC = new Calle("DC");
    Calle* EA = new Calle("EA");
    Calle* EB = new Calle("EB");
    Calle* EC = new Calle("EC");
    Calle* ED = new Calle("ED");

    Alabel.push_back(ui->AB);
    Alabel.push_back(ui->AC);
    Alabel.push_back(ui->AD);
    Alabel.push_back(ui->BA);
    Alabel.push_back(ui->BC);
    Alabel.push_back(ui->BD);
    Alabel.push_back(ui->DA);
    Alabel.push_back(ui->DB);
    Alabel.push_back(ui->DC);
    Alabel.push_back(ui->EA);
    Alabel.push_back(ui->EB);
    Alabel.push_back(ui->EC);
    Alabel.push_back(ui->ED);

    Grafo.push_back(AB);
    Grafo.push_back(AC);
    Grafo.push_back(AD);
    Grafo.push_back(BA);
    Grafo.push_back(BC);
    Grafo.push_back(BD);
    Grafo.push_back(DA);
    Grafo.push_back(DB);
    Grafo.push_back(DC);
    Grafo.push_back(EA);
    Grafo.push_back(EB);
    Grafo.push_back(EC);
    Grafo.push_back(ED);

    Grafo[0]->agregarCalle(BC);
    Grafo[0]->agregarCalle(BD);
    Grafo[0]->agregarCalle(DA);
    Grafo[0]->agregarCalle(EA);
    Grafo[1]->agregarCalle(DA);
    Grafo[1]->agregarCalle(DB);
    Grafo[1]->agregarCalle(EA);
    Grafo[1]->agregarCalle(BD);
    Grafo[1]->agregarCalle(EB);
    Grafo[2]->agregarCalle(EC);
    Grafo[2]->agregarCalle(EA);
    Grafo[2]->agregarCalle(EB);
    Grafo[4]->agregarCalle(DB);
    Grafo[4]->agregarCalle(EB);
    Grafo[5]->agregarCalle(DA);
    Grafo[5]->agregarCalle(EC);
    Grafo[5]->agregarCalle(EB);
    Grafo[6]->agregarCalle(EB);
    Grafo[6]->agregarCalle(EC);
    Grafo[7]->agregarCalle(EC);
}

Tarea1Semafaro::~Tarea1Semafaro()
{
    delete ui;
}

void Tarea1Semafaro::pintar()
{
    bool azul = false;
    bool rojo = false;
    bool verde = false;
    bool cambio = false;

    for(vector<Calle*>::iterator g = Grafo.begin(); g!=Grafo.end(); g++)
    {
        for(vector<Calle*>::iterator e = Grafo.begin(); e!=Grafo.end(); e++)
        {
            if((*e)->existeCalle((*g)->getNombre()) == false)
            {
                azul = true;
            }
            else if((*e)->existeCalle((*g)->getNombre()) && (*e)->getColor()=="AZUL")
            {
                rojo = true;
                azul = false;
                cambio = false;
            }
            else if((*e)->existeCalle((*g)->getNombre()) && (*e)->getColor()=="ROJO")
            {
                cambio = false;
                rojo = false;
                azul = false;
                verde = true;
            }
            else if((*e)->existeCalle((*g)->getNombre()) && (*e)->getColor()=="VERDE")
            {
                cambio = true;
                rojo = false;
                azul = false;
                verde = false;
            }
            else
            {
                azul = false;
                rojo = false;
                verde = false;
                cambio = false;
                break;
            }
        }

        if(azul && !cambio)
        {
            (*g)->cambiarColor("AZUL");
            azul = false;
        }
        if(rojo && !cambio)
        {
            (*g)->cambiarColor("ROJO");
            rojo = false;
        }
        if(verde && !cambio)
        {
            (*g)->cambiarColor("VERDE");
            verde = false;
        }
        if(cambio)
        {
            (*g)->cambiarColor("AMARILLO");
            cambio = false;
        }
    }

}
void Tarea1Semafaro::comparar()
{
    for(vector<QLabel*>::iterator l = Alabel.begin(); l!=Alabel.end(); l++)
    {
        for(vector<Calle*>::iterator g = Grafo.begin(); g!=Grafo.end(); g++)
        {
            if((*l)->text()==(*g)->getNombre()&&(*g)->getColor() == "AZUL")
                (*l)->setStyleSheet("QLabel{color:blue;}");
            else if((*l)->text()==(*g)->getNombre()&&(*g)->getColor() == "ROJO")
                (*l)->setStyleSheet("QLabel{color:red;}");
            else if((*l)->text()==(*g)->getNombre()&&(*g)->getColor() == "VERDE")
                (*l)->setStyleSheet("QLabel{color:green;}");
            else if((*l)->text()==(*g)->getNombre()&&(*g)->getColor() == "AMARILLO")
                (*l)->setStyleSheet("QLabel{color:yellow;}");
        }
    }
}

void Tarea1Semafaro::on_pintarCalles_clicked()
{
    pintar();
    comparar();
}

