#include <iostream>
#include <vector>
#include "Empleado.hpp"

using namespace std;

class Departamento {
    public:
        string nombre;
        string ubicacion;
        static int contarEmpleados();
        vector<Empleado> getEmployees();
        bool contratarEmpleado(Empleado);
        bool despedirEmpleado(Empleado);

    private:
        vector<Empleado> empleados;
        static int cantEmpleadosDepts;
};