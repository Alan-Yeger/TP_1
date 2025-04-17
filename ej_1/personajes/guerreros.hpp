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
        int getRegeneracion() override;
        void agregarArma(unique_ptr<Armas>&) override;
        virtual void alaridoDeGuerra() = 0;
        virtual void presentarse();
    
    protected:
        int hp;
        string nombre;
        string clan;
        string grito;
        vector<unique_ptr<Armas>> armas;
};

class Barbaro: public Guerreros {
    public:
        Barbaro() {
            nombre = "Barbaro";
            hp = 100;
            clan = "Montaraces del Norte";
        }
        void alaridoDeGuerra();
};

class Paladin: public Guerreros {
    public:
        Paladin() {
            nombre = "Paladin";
            hp = 100;
            clan = "Orden de la Luz Dorada";
        }
        void alaridoDeGuerra();
};

class Caballero: public Guerreros {
    public:
        Caballero() {
            nombre = "Caballero";
            hp = 100;
            clan = "Templarios del Reino";
        }
        void alaridoDeGuerra();
};

class Mercenario: public Guerreros {
    public:
        Mercenario() {
            nombre = "Mercenario";
            hp = 100;
            clan = "Lobos de Acero";
        }
        void alaridoDeGuerra();
};

class Gladiador: public Guerreros {
    public:
        Gladiador() {
            nombre = "Gladiador";
            hp = 100;
            clan = "Arena de Sangre";
        }
        void alaridoDeGuerra();
};