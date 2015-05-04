/********************************************************************************
** Form generated from reading UI file 'estructuraparcial1.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ESTRUCTURAPARCIAL1_H
#define UI_ESTRUCTURAPARCIAL1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EstructuraParcial1
{
public:
    QWidget *centralWidget;
    QLineEdit *Titulo;
    QPushButton *Tarea4;
    QPushButton *Tarea3Arreglo;
    QPushButton *Tarea2;
    QPushButton *Tarea1Calle;
    QLineEdit *Semanas;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *EstructuraParcial1)
    {
        if (EstructuraParcial1->objectName().isEmpty())
            EstructuraParcial1->setObjectName(QStringLiteral("EstructuraParcial1"));
        EstructuraParcial1->resize(485, 279);
        centralWidget = new QWidget(EstructuraParcial1);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Titulo = new QLineEdit(centralWidget);
        Titulo->setObjectName(QStringLiteral("Titulo"));
        Titulo->setGeometry(QRect(110, 10, 181, 20));
        Tarea4 = new QPushButton(centralWidget);
        Tarea4->setObjectName(QStringLiteral("Tarea4"));
        Tarea4->setGeometry(QRect(20, 180, 75, 23));
        Tarea3Arreglo = new QPushButton(centralWidget);
        Tarea3Arreglo->setObjectName(QStringLiteral("Tarea3Arreglo"));
        Tarea3Arreglo->setGeometry(QRect(20, 150, 75, 23));
        Tarea2 = new QPushButton(centralWidget);
        Tarea2->setObjectName(QStringLiteral("Tarea2"));
        Tarea2->setGeometry(QRect(20, 120, 75, 23));
        Tarea1Calle = new QPushButton(centralWidget);
        Tarea1Calle->setObjectName(QStringLiteral("Tarea1Calle"));
        Tarea1Calle->setGeometry(QRect(20, 90, 75, 23));
        Semanas = new QLineEdit(centralWidget);
        Semanas->setObjectName(QStringLiteral("Semanas"));
        Semanas->setGeometry(QRect(20, 60, 75, 20));
        EstructuraParcial1->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(EstructuraParcial1);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 485, 21));
        EstructuraParcial1->setMenuBar(menuBar);
        mainToolBar = new QToolBar(EstructuraParcial1);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        EstructuraParcial1->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(EstructuraParcial1);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        EstructuraParcial1->setStatusBar(statusBar);

        retranslateUi(EstructuraParcial1);

        QMetaObject::connectSlotsByName(EstructuraParcial1);
    } // setupUi

    void retranslateUi(QMainWindow *EstructuraParcial1)
    {
        EstructuraParcial1->setWindowTitle(QApplication::translate("EstructuraParcial1", "EstructuraParcial1", 0));
        Titulo->setText(QApplication::translate("EstructuraParcial1", " Tareas Parcial 1 Estructura de Datos", 0));
        Tarea4->setText(QApplication::translate("EstructuraParcial1", "Tarea 4", 0));
        Tarea3Arreglo->setText(QApplication::translate("EstructuraParcial1", "Tarea 3", 0));
        Tarea2->setText(QApplication::translate("EstructuraParcial1", "Tarea 2", 0));
        Tarea1Calle->setText(QApplication::translate("EstructuraParcial1", "Tarea 1", 0));
        Semanas->setText(QApplication::translate("EstructuraParcial1", "Semana 1 y 2", 0));
    } // retranslateUi

};

namespace Ui {
    class EstructuraParcial1: public Ui_EstructuraParcial1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ESTRUCTURAPARCIAL1_H
