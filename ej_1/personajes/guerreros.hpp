#pragma once
#include <iostream>
#include <memory>
#include <vector>
#include "personajes.hpp"
#include "../armas/armas.hpp"

using namespace std;

/*
Clase abstracta para todos los guerreros. Hereda de Personajes.
Define comportamiento común y estructura básica para los guerreros.
Hace override a los métodos de Personajes pero también tiene su propio
método virtual que deben implementar las clases derivadas.
*/

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

        // Cada guerrero debe tener su propio grito de guerra
        virtual void alaridoDeGuerra() = 0;
        // Implementación por defecto para presentarse
        virtual void presentarse();
    
    protected:
        int hp; // Puntos de vida
        string nombre; // Nombre del personaje
        string clan;   // Nombre del clan al que pertenece
        string grito;  // Frase de guerra
        vector<unique_ptr<Armas>> armas; // Armas equipadas
};

// Clases concretas de guerreros, cada una con su clan y grito únicos

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