#pragma once
#include <iostream>
#include "armas.hpp"

using namespace std;

/*
Clase abstracta para todas las armas de combate. Hereda de Armas.
Define comportamiento común y estructura básica para las armas de combate.
Hace override a los métodos de Armas.
*/

class ArmasCombate: public Armas {
    public:
        void utilizar() override;
        int getDanio() override;
        string getNombre() override;
        void mostrarDesc() override;
        void mejorar() override;
        int getRegeneracionVida() override;
        //Destructor virtual
        virtual ~ArmasCombate() = default;

    protected:
        string nombre; // Nombre del arma
        int puntosDanio; // Daño del arma
        string color; // Color del arma
        string tipo; // Tipo de arma
        string ataqueEspecial; // Ataque especial del arma
        bool estaMejorada = false; // Indica si el arma está mejorada
};

//Clases derivadas de las armas de combate
//Cada una tiene su propia implementacion de mejorar() y mostrarDesc()

class HachaSimple: public ArmasCombate {
    public:
        HachaSimple() {
            nombre = "Hacha Simple";
            puntosDanio = 10; 
            color = "Acero"; 
            tipo = "Nórdica";
            ataqueEspecial = "Corte Brutal";
        };
        void mejorar();
        void mostrarDesc();

};

class HachaDoble: public ArmasCombate {
    public:
        HachaDoble() {
            nombre = "Hacha Doble";
            puntosDanio = 20;
            color = "Hierro oscuro";
            tipo = "Herrería";
            ataqueEspecial = "Impacto Gemelo";
        };
        void mejorar();
        void mostrarDesc();
};

class Espada: public ArmasCombate {
    public:
        Espada() {
            nombre = "Espada";
            puntosDanio = 20;
            color = "Bronce celestial";
            tipo = "Divina";
            ataqueEspecial = "Estocada Rápida";
        };
        void mejorar();
        void mostrarDesc();
};

class Lanza: public ArmasCombate {
    public:
        Lanza() {
            nombre = "Lanza"; 
            puntosDanio = 15;
            color = "Plateado azulado";
            tipo = "Heroica";
            ataqueEspecial = "Embate Preciso";
        };
        void mejorar();
        void mostrarDesc();
};

class Garrote: public ArmasCombate {
    public:
        Garrote() {
            nombre = "Garrote";
            puntosDanio = 10;
            color = "Madera rústica";
            tipo = "Antiguo";
            ataqueEspecial = "Golpe Aplastante";
        };
        void mejorar();
        void mostrarDesc();
};
