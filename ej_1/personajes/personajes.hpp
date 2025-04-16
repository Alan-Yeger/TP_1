#pragma once
#include <iostream>
#include <memory>
#include "../armas/armas.hpp"

using namespace std;


class Personajes {
    public:
        virtual string getNombre() = 0;
        virtual string getArma() = 0;
        virtual int getHp() = 0;
        virtual bool setHp(int newHp) = 0;
        virtual bool estaVivo() = 0;
        virtual void agregarArma(unique_ptr<Armas>&) = 0;
        virtual void mejorarArma() = 0;
        virtual void getArmaDesc() = 0;
        virtual int getDanio() = 0;
};