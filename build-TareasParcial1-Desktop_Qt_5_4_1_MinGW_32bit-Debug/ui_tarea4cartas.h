/********************************************************************************
** Form generated from reading UI file 'tarea4cartas.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAREA4CARTAS_H
#define UI_TAREA4CARTAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Tarea4Cartas
{
public:
    QLabel *posicion;
    QLabel *numero;
    QListWidget *lista;
    QPushButton *agregar;
    QPushButton *insertar;
    QPushButton *eliminar;
    QLineEdit *posi;
    QLineEdit *nume;

    void setupUi(QDialog *Tarea4Cartas)
    {
        if (Tarea4Cartas->objectName().isEmpty())
            Tarea4Cartas->setObjectName(QStringLiteral("Tarea4Cartas"));
        Tarea4Cartas->resize(400, 300);
        posicion = new QLabel(Tarea4Cartas);
        posicion->setObjectName(QStringLiteral("posicion"));
        posicion->setGeometry(QRect(30, 50, 47, 13));
        numero = new QLabel(Tarea4Cartas);
        numero->setObjectName(QStringLiteral("numero"));
        numero->setGeometry(QRect(30, 80, 47, 13));
        lista = new QListWidget(Tarea4Cartas);
        lista->setObjectName(QStringLiteral("lista"));
        lista->setGeometry(QRect(30, 110, 321, 111));
        agregar = new QPushButton(Tarea4Cartas);
        agregar->setObjectName(QStringLiteral("agregar"));
        agregar->setGeometry(QRect(30, 240, 75, 23));
        insertar = new QPushButton(Tarea4Cartas);
        insertar->setObjectName(QStringLiteral("insertar"));
        insertar->setGeometry(QRect(160, 240, 75, 23));
        eliminar = new QPushButton(Tarea4Cartas);
        eliminar->setObjectName(QStringLiteral("eliminar"));
        eliminar->setGeometry(QRect(290, 240, 75, 23));
        posi = new QLineEdit(Tarea4Cartas);
        posi->setObjectName(QStringLiteral("posi"));
        posi->setGeometry(QRect(80, 50, 113, 20));
        nume = new QLineEdit(Tarea4Cartas);
        nume->setObjectName(QStringLiteral("nume"));
        nume->setGeometry(QRect(80, 80, 113, 20));

        retranslateUi(Tarea4Cartas);

        QMetaObject::connectSlotsByName(Tarea4Cartas);
    } // setupUi

    void retranslateUi(QDialog *Tarea4Cartas)
    {
        Tarea4Cartas->setWindowTitle(QApplication::translate("Tarea4Cartas", "Dialog", 0));
        posicion->setText(QApplication::translate("Tarea4Cartas", "Posicion:", 0));
        numero->setText(QApplication::translate("Tarea4Cartas", "Numero:", 0));
        agregar->setText(QApplication::translate("Tarea4Cartas", "Agregar", 0));
        insertar->setText(QApplication::translate("Tarea4Cartas", "Insertar", 0));
        eliminar->setText(QApplication::translate("Tarea4Cartas", "Eliminar", 0));
    } // retranslateUi

};

namespace Ui {
    class Tarea4Cartas: public Ui_Tarea4Cartas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAREA4CARTAS_H
