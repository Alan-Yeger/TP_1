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
        bool setHp(int newHp) override;
        bool estaVivo() override;
        void atacar() override;
        void defender() override;
        void agregarArma(unique_ptr<Armas>&) override; 

    protected:
        int hp;
        string nombre;
        vector<unique_ptr<Armas>> armas;
    
};

class Hechicero: public Magos {
    Hechicero() {
        nombre = "";
        hp = 100;
    }
};

class Conjurador: public Magos {
    Conjurador() {
        nombre = "";
        hp = 100;
    }
};

class Brujo: public Magos {
    Brujo() {
        nombre = "";
        hp = 100;
    }
};

class Nigromante: public Magos {
    Nigromante() {
        nombre = "";
        hp = 100;
    }
};