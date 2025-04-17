#pragma once
#include <iostream>
#include "armas.hpp"

using namespace std;

/*
Clase abstracta para todos los items mágicos. Hereda de Armas.
Define comportamiento común y estructura básica para los items mágicos.
Hace override a los métodos de Armas.
*/

class ItemsMagicos: public Armas {
    public:
        void utilizar() override;
        int getDanio() override;
        string getNombre() override;
        void mostrarDesc() override;
        void mejorar() override;
        int getRegeneracionVida() override;
        //Destructor virtual
        virtual ~ItemsMagicos() = default;

    protected:
        string nombre; // Nombre del arma
        int puntosDanio; //Daño del arma
        string tipo; //Tipo del arma
        string ataqueEspecial; //Ataque especial del arma
        bool esMagico = false; //Indica si el arma es Mágica
};

//Clases derivadas de los items mágicos
//Cada uno tiene su propia implementacion de mejorar() y mostrarDesc()

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
        int getRegeneracionVida();
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
