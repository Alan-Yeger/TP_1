#pragma once
#include <iostream>
#include "../armas/armas.hpp"

using namespace std;


class Personajes {
    public:
        virtual int getHp() = 0;
        virtual bool setHp() = 0;
        virtual void ataque1() = 0;
        virtual void ataque2() = 0;
        virtual void ataque3() = 0;
};