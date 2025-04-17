#pragma once
#include <string>

using namespace std;

class Armas {
    public:
        virtual void utilizar() = 0;
        virtual int getDanio() = 0;
        virtual string getNombre() = 0;
        virtual void mostrarDesc() = 0;
        virtual void mejorar() = 0;
        virtual int regenerarVida() = 0;
};