#pragma once
#include <string>

using namespace std;

/*
Interfaz que representa un arma del juego.
Todas las armas deben implementar esta interfaz.
Al ser una interfaz, todos los métodos son virtuales puros y 
es necesario implementarlos en las clases derivadas
*/

class Armas {
    public:
        //Devuelve el nombre del arma
        virtual string getNombre() = 0;

        //Devuelve el daño del arma
        virtual int getDanio() = 0;

        //Muestra que se utiliza el arma con su ataque especial
        virtual void utilizar() = 0;

        //Muestra descripción del arma
        virtual void mostrarDesc() = 0;

        //Mejora las stats del arma
        virtual void mejorar() = 0;

        //Devuelve la regeneración del arma (sirve solo para la poción)
        virtual int getRegeneracionVida() = 0;
};