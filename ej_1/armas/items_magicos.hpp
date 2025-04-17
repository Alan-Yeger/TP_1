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
        void mejorar() override;
        int regenerarVida() override; 

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
        void mejorar();
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
        void mejorar();
        void mostrarDesc();
};

class Pocion: public ItemsMagicos {
    public:
        Pocion() {
            nombre = "Poción de Regeneración";
            puntosDanio = 2; 
            tipo = "Alquimia";
            ataqueEspecial = "Curación";
        };
        void mejorar();
        void mostrarDesc();
        int regenerarVida();
    private:
        int regeneracion = 5;
};

class Amuleto: public ItemsMagicos {
    public:
        Amuleto() {
            nombre = "Amuleto del Herrero";
            puntosDanio = 10; 
            tipo = "Divino";
            ataqueEspecial = "Bendición de Hierro";
        };
        void mejorar();
        void mostrarDesc();
};  
