#include <iostream>

using namespace std;

class Empleado {
    public:
        string nombre;
        string puesto;
        int getAntiguedad();
        bool updateSalario(float);
        float getSalario();
    
    private:
        int antiguedad;
        float salario;
};