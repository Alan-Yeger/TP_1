#pragma once
#include <iostream>
#include <memory>
#include <vector>
#include "personajes.hpp"
#include "../armas/armas.hpp"

using namespace std;

/*
Clase abstracta para todos los magos. Hereda de Personajes.
Define comportamiento común y estructura básica para los magos.
Hace override a los métodos de Personajes pero también tiene un método propio
*/

class Magos: public Personajes {
    public:
        int getHp() override;
        string getNombre() override;
        string getArma() override;
        bool setHp(int newHp) override;
        bool estaVivo() override;
        void agregarArma(unique_ptr<Armas>&) override; 
        void mejorarArma() override;
        void getArmaDesc() override;
        int getDanio() override;
        int getRegeneracion() override;

        // Método específico de los magos para usar un truco o hechizo
        void usarTruco();
        //Destructor virtual
        virtual ~Magos() = default;
        
    protected:
        int hp;  // Puntos de vida del mago
        string nombre;  // Nombre del mago
        string escuelaMagia;  // Escuela de magia a la que pertenece el mago
        string trucoFavorito;  // Truco o hechizo favorito del mago
        string mascota; // Mascota del mago
        vector<unique_ptr<Armas>> armas;  // Contenedor de armas equipadas al mago
    
};

// Subclases específicas de magos, cada una con su propio hechizo y escuela de magia

class Hechicero: public Magos {
    public:
        Hechicero() {
            nombre = "Hechicero";
            hp = 100;
            escuelaMagia = "Gryffindor"; //Un poquito de temática Harry Potter
            trucoFavorito = "Expelliarmus";
            mascota = "Búho";
        }
};

class Conjurador: public Magos {
    public:
        Conjurador() {
            nombre = "Conjurador";
            hp = 100;
            escuelaMagia = "Ravenclaw";
            trucoFavorito = "Accio";
            mascota = "Gato";
        }
};

class Brujo: public Magos {
    public:
        Brujo() {
            nombre = "Brujo";
            hp = 100;
            escuelaMagia = "Hufflepuff";
            trucoFavorito = "Lumos Maxima";
            mascota = "Rata";
        }
};

class Nigromante: public Magos {
    public:
        Nigromante() {
            nombre = "Nigromante";
            hp = 100;
            escuelaMagia = "Slytherin";
            trucoFavorito = "Avada Kedavra";
            mascota = "Serpiente";
        }
};