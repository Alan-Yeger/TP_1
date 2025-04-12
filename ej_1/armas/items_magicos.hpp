#pragma once
#include <iostream>
#include "armas.hpp"

using namespace std;

class ItemsMagicos: public Armas {
    public:
        void utilizar() override;
        int getDanio() override;
        string getNombre() override;
        void mostrarDesc() override;
        virtual void activarMagia() = 0;

    protected:
        string nombre;
        int puntosDanio;
        string tipo;
        string ataqueEspecial;
        bool esMagico = false;
};

class Baston: public ItemsMagicos {
    public:
        Baston() {
            nombre = "Bastón Mozzarella";
            puntosDanio = 6; 
            tipo = "Comestible";
            ataqueEspecial = "Proyectil de Queso Fundido";
        };
        void activarMagia();
        void mostrarDesc();
};

class LibroDeHechizos: public ItemsMagicos {
    public:
        LibroDeHechizos() {
            nombre = "Libro de Hechizos";
            puntosDanio = 10; 
            tipo = "Arcano";
            ataqueEspecial = "Encantamiento Fugaz";
        };
        void activarMagia();
        void mostrarDesc();
};

class Pocion: public ItemsMagicos {
    public:
        Pocion() {
            nombre = "Pocion de Regeneración";
            puntosDanio = 0; 
            tipo = "Alquimia";
            ataqueEspecial = "Curación";
        };
        void activarMagia();
        void mostrarDesc();
    private:
        int regeneracion = 5;
};

class Amuleto: public ItemsMagicos {
    public:
        Amuleto() {
            nombre = "Amuleto del Herrero";
            puntosDanio = 3; 
            tipo = "Divino";
            ataqueEspecial = "Bendición de Hierro";
        };
        void activarMagia();
        void mostrarDesc();
};  
