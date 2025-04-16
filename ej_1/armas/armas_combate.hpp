#pragma once
#include <iostream>
#include "armas.hpp"

using namespace std;

class ArmasCombate: public Armas {
    public:
        void utilizar() override;
        int getDanio() override;
        string getNombre() override;
        void mostrarDesc() override;
        void mejorar() override;

    protected:
        string nombre;
        int puntosDanio;
        string color;
        string tipo;
        string ataqueEspecial;
        bool estaMejorada = false;
};

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
