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
        string getArma() override;
        bool setHp(int newHp) override;
        bool estaVivo() override;
        void mejorarArma() override;
        void getArmaDesc() override;
        int getDanio() override;
        void agregarArma(unique_ptr<Armas>&) override;
    
    protected:
        int hp;
        string nombre;
        vector<unique_ptr<Armas>> armas;
};

class Barbaro: public Guerreros {
    public:
        Barbaro() {
            nombre = "Barbaro";
            hp = 100;
            vector<unique_ptr<Armas>> armas;
        }
};

class Paladin: public Guerreros {
    public:
        Paladin() {
            nombre = "Paladin";
            hp = 100;
            vector<unique_ptr<Armas>> armas;
        }
};

class Caballero: public Guerreros {
    public:
        Caballero() {
            nombre = "Caballero";
            hp = 100;
            vector<unique_ptr<Armas>> armas;
        }
};

class Mercenario: public Guerreros {
    public:
        Mercenario() {
            nombre = "Mercenario";
            hp = 100;
            vector<unique_ptr<Armas>> armas;
        }
};

class Gladiador: public Guerreros {
    public:
        Gladiador() {
            nombre = "Gladiador";
            hp = 100;
            vector<unique_ptr<Armas>> armas;
        }
};