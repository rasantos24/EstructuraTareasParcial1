/********************************************************************************
** Form generated from reading UI file 'tarea3arreglos.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAREA3ARREGLOS_H
#define UI_TAREA3ARREGLOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tarea3Arreglos
{
public:
    QPushButton *agregarBoton;
    QPushButton *insertarBoton;
    QPushButton *eliminarBoton;
    QPushButton *vaciarBoton;
    QLabel *Posicion;
    QLabel *Numero;
    QLabel *Arreglo;
    QLineEdit *posicion;
    QLineEdit *numero;
    QLabel *arreglo;

    void setupUi(QWidget *Tarea3Arreglos)
    {
        if (Tarea3Arreglos->objectName().isEmpty())
            Tarea3Arreglos->setObjectName(QStringLiteral("Tarea3Arreglos"));
        Tarea3Arreglos->resize(400, 300);
        agregarBoton = new QPushButton(Tarea3Arreglos);
        agregarBoton->setObjectName(QStringLiteral("agregarBoton"));
        agregarBoton->setGeometry(QRect(30, 220, 75, 23));
        insertarBoton = new QPushButton(Tarea3Arreglos);
        insertarBoton->setObjectName(QStringLiteral("insertarBoton"));
        insertarBoton->setGeometry(QRect(120, 220, 75, 23));
        eliminarBoton = new QPushButton(Tarea3Arreglos);
        eliminarBoton->setObjectName(QStringLiteral("eliminarBoton"));
        eliminarBoton->setGeometry(QRect(210, 220, 75, 23));
        vaciarBoton = new QPushButton(Tarea3Arreglos);
        vaciarBoton->setObjectName(QStringLiteral("vaciarBoton"));
        vaciarBoton->setGeometry(QRect(300, 220, 75, 23));
        Posicion = new QLabel(Tarea3Arreglos);
        Posicion->setObjectName(QStringLiteral("Posicion"));
        Posicion->setGeometry(QRect(30, 60, 47, 13));
        Numero = new QLabel(Tarea3Arreglos);
        Numero->setObjectName(QStringLiteral("Numero"));
        Numero->setGeometry(QRect(30, 120, 47, 13));
        Arreglo = new QLabel(Tarea3Arreglos);
        Arreglo->setObjectName(QStringLiteral("Arreglo"));
        Arreglo->setGeometry(QRect(30, 180, 47, 13));
        posicion = new QLineEdit(Tarea3Arreglos);
        posicion->setObjectName(QStringLiteral("posicion"));
        posicion->setGeometry(QRect(90, 60, 113, 20));
        numero = new QLineEdit(Tarea3Arreglos);
        numero->setObjectName(QStringLiteral("numero"));
        numero->setGeometry(QRect(90, 120, 113, 20));
        arreglo = new QLabel(Tarea3Arreglos);
        arreglo->setObjectName(QStringLiteral("arreglo"));
        arreglo->setGeometry(QRect(100, 180, 171, 16));

        retranslateUi(Tarea3Arreglos);

        QMetaObject::connectSlotsByName(Tarea3Arreglos);
    } // setupUi

    void retranslateUi(QWidget *Tarea3Arreglos)
    {
        Tarea3Arreglos->setWindowTitle(QApplication::translate("Tarea3Arreglos", "Form", 0));
        agregarBoton->setText(QApplication::translate("Tarea3Arreglos", "Agregar", 0));
        insertarBoton->setText(QApplication::translate("Tarea3Arreglos", "Insertar", 0));
        eliminarBoton->setText(QApplication::translate("Tarea3Arreglos", "Eliminar", 0));
        vaciarBoton->setText(QApplication::translate("Tarea3Arreglos", "Vaciar", 0));
        Posicion->setText(QApplication::translate("Tarea3Arreglos", "Posicion:", 0));
        Numero->setText(QApplication::translate("Tarea3Arreglos", "Numero:", 0));
        Arreglo->setText(QApplication::translate("Tarea3Arreglos", "Arreglo:", 0));
        arreglo->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Tarea3Arreglos: public Ui_Tarea3Arreglos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAREA3ARREGLOS_H
