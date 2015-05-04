/********************************************************************************
** Form generated from reading UI file 'tareas3arreglos.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAREAS3ARREGLOS_H
#define UI_TAREAS3ARREGLOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Tareas3Arreglos
{
public:
    QLabel *posicion;
    QLineEdit *posi;
    QLabel *numero;
    QLineEdit *valor;
    QLabel *arreglo;
    QPushButton *agregar;
    QPushButton *insertar;
    QPushButton *limpiar;
    QPushButton *eliminar;
    QLabel *label;

    void setupUi(QDialog *Tareas3Arreglos)
    {
        if (Tareas3Arreglos->objectName().isEmpty())
            Tareas3Arreglos->setObjectName(QStringLiteral("Tareas3Arreglos"));
        Tareas3Arreglos->resize(381, 275);
        posicion = new QLabel(Tareas3Arreglos);
        posicion->setObjectName(QStringLiteral("posicion"));
        posicion->setGeometry(QRect(40, 50, 47, 13));
        posi = new QLineEdit(Tareas3Arreglos);
        posi->setObjectName(QStringLiteral("posi"));
        posi->setGeometry(QRect(100, 50, 113, 20));
        numero = new QLabel(Tareas3Arreglos);
        numero->setObjectName(QStringLiteral("numero"));
        numero->setGeometry(QRect(40, 100, 47, 13));
        valor = new QLineEdit(Tareas3Arreglos);
        valor->setObjectName(QStringLiteral("valor"));
        valor->setGeometry(QRect(100, 100, 113, 20));
        arreglo = new QLabel(Tareas3Arreglos);
        arreglo->setObjectName(QStringLiteral("arreglo"));
        arreglo->setGeometry(QRect(40, 165, 311, 31));
        agregar = new QPushButton(Tareas3Arreglos);
        agregar->setObjectName(QStringLiteral("agregar"));
        agregar->setGeometry(QRect(30, 220, 75, 23));
        insertar = new QPushButton(Tareas3Arreglos);
        insertar->setObjectName(QStringLiteral("insertar"));
        insertar->setGeometry(QRect(110, 220, 75, 23));
        limpiar = new QPushButton(Tareas3Arreglos);
        limpiar->setObjectName(QStringLiteral("limpiar"));
        limpiar->setGeometry(QRect(190, 220, 75, 23));
        eliminar = new QPushButton(Tareas3Arreglos);
        eliminar->setObjectName(QStringLiteral("eliminar"));
        eliminar->setGeometry(QRect(270, 220, 75, 23));
        label = new QLabel(Tareas3Arreglos);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(180, 10, 47, 13));

        retranslateUi(Tareas3Arreglos);

        QMetaObject::connectSlotsByName(Tareas3Arreglos);
    } // setupUi

    void retranslateUi(QDialog *Tareas3Arreglos)
    {
        Tareas3Arreglos->setWindowTitle(QApplication::translate("Tareas3Arreglos", "Dialog", 0));
        posicion->setText(QApplication::translate("Tareas3Arreglos", "Posicion:", 0));
        numero->setText(QApplication::translate("Tareas3Arreglos", "Numero:", 0));
        arreglo->setText(QString());
        agregar->setText(QApplication::translate("Tareas3Arreglos", "Agregar", 0));
        insertar->setText(QApplication::translate("Tareas3Arreglos", "Insertar", 0));
        limpiar->setText(QApplication::translate("Tareas3Arreglos", "Limpiar", 0));
        eliminar->setText(QApplication::translate("Tareas3Arreglos", "Eliminar", 0));
        label->setText(QApplication::translate("Tareas3Arreglos", "Arreglos", 0));
    } // retranslateUi

};

namespace Ui {
    class Tareas3Arreglos: public Ui_Tareas3Arreglos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAREAS3ARREGLOS_H
