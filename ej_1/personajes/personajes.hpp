#pragma once
#include <iostream>
#include <memory>
#include "../armas/armas.hpp"

using namespace std;

/*
Interfaz que representa un personaje del juego.
Todos los personajes deben implementar esta interfaz.
Al ser una interfaz, todos los métodos son virtuales puros y 
es necesario implementarlos en las clases derivadas
*/

class Personajes {
    public:
        // Devuelve el nombre del personaje
        virtual string getNombre() = 0;

        // Devuelve el nombre del primer arma equipada (si tiene)
        virtual string getArma() = 0;

        // Devuelve los puntos de vida actuales
        virtual int getHp() = 0;

        // Muestra la descripción del primer arma equipada (si tiene)
        virtual void getArmaDesc() = 0;

        // Devuelve el daño que inflige el personaje
        virtual int getDanio() = 0;

        // Devuelve la cantidad de puntos de vida que puede regenerar
        virtual int getRegeneracion() = 0;

        // Establece un nuevo valor de HP, retorna true si sigue vivo
        virtual bool setHp(int newHp) = 0;

        // Indica si el personaje está vivo (HP > 0)
        virtual bool estaVivo() = 0;

        // Agrega un arma al personaje
        virtual void agregarArma(unique_ptr<Armas>&) = 0;

        // Mejora el arma equipada, si es posible
        virtual void mejorarArma() = 0;
};