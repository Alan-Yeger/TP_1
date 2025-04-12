#pragma once
#include <iostream>

using namespace std;

class Armas {
    public:
        virtual bool pintar(string) = 0;
        virtual void usar() = 0;
        virtual void a() = 0;

    protected:
        string name;
        int puntosDanio;
        string color;
};