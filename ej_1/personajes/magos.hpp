#pragma once
#include <iostream>
#include <memory>
#include <vector>
#include "personajes.hpp"
#include "../armas/armas.hpp"

using namespace std;

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
        void usarTruco();
        
    protected:
        int hp;
        string nombre;
        string escuelaMagia;
        string trucoFavorito;
        vector<unique_ptr<Armas>> armas;
    
};

class Hechicero: public Magos {
    public:
        Hechicero() {
            nombre = "Hechicero";
            hp = 100;
            escuelaMagia = "Gryffindor"; //Un poquito de temática Harry Potter
            trucoFavorito = "Expelliarmus";
        }
};

class Conjurador: public Magos {
    public:
        Conjurador() {
            nombre = "Conjurador";
            hp = 100;
            escuelaMagia = "Ravenclaw";
            trucoFavorito = "Accio";
        }
};

class Brujo: public Magos {
    public:
        Brujo() {
            nombre = "Brujo";
            hp = 100;
            escuelaMagia = "Hufflepuff";
            trucoFavorito = "Lumos Maxima";
        }
};

class Nigromante: public Magos {
    public:
        Nigromante() {
            nombre = "Nigromante";
            hp = 100;
            escuelaMagia = "Slytherin";
            trucoFavorito = "Avada Kedavra";
        }
};