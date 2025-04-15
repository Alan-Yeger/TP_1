#pragma once
#include <iostream>
#include "../armas/armas.hpp"

using namespace std;


class Personajes {
    public:
        virtual int getHp() = 0;
        virtual string getNombre() = 0;
        virtual bool setHp(int newHp) = 0;
        virtual bool estaVivo() = 0;
        virtual void atacar() = 0;
        virtual void defender() = 0;
        virtual void agregarArma(unique_ptr<Armas>&) = 0;
};