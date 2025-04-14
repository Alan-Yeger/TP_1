#pragma once
#include <iostream>
#include <memory>
#include <vector>
#include "personajes.hpp"
#include "../armas/armas.hpp"

using namespace std;

class Guerreros: public Personajes {
    public:
        int getHp() override;
        string getNombre() override;
        bool setHp(int newHp) override;
        bool estaVivo() override;
        void atacar() override;
        void defender() override;
    
    protected:
        int hp;
        string nombre;
        vector<unique_ptr<Armas>> armas;
};

class Barbaro: public Guerreros {
    public:
        Barbaro() {
            nombre = "";
            hp = 100;
        }
};

class Paladin: public Guerreros {
    public:
        Paladin() {
            nombre = "";
            hp = 100;
        }
};

class Caballero: public Guerreros {
    public:
        Caballero() {
            nombre = "";
            hp = 100;
        }
};

class Mercenario: public Guerreros {
    public:
        Mercenario() {
            nombre = "";
            hp = 100;
        }
};

class Gladiador: public Guerreros {
    public:
        Gladiador() {
            nombre = "";
            hp = 100;
        }
};