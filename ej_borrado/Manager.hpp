#include <iostream>
#include "Empleado.hpp"

using namespace std;

class Manager: public Empleado{
    public:
        bool updateBono(float);
        float getBono();
        bool setLevel(string);

    private:
        float bono;
        string level;
};

class GerenteAlto: public Manager{};
class GerenteMedio: public Manager{};
class GerenteBajo: public Manager{};
class LideEquipo: public Manager{};