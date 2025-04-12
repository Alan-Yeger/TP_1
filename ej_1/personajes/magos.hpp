#pragma once
#include <iostream>
#include <memory>
#include "personajes.hpp"
#include "../armas/armas.hpp"

using namespace std;

class Magos: public Personajes {
    public:

    protected:
        int hp = 100;
        unique_ptr<Armas> arma;
    
};

class Hechicero: public Magos {
    Hechicero(int hp);
};

class Conjurador: public Magos {

};

class Brujo: public Magos {

};

class Nigromante: public Magos {

};