#include "Departamento.hpp"

int Departamento::contarEmpleados() {
    return cantEmpleadosDepts;
}


vector<Empleado> Departamento::getEmployees() {
    return empleados;
}


bool Departamento::contratarEmpleado(Empleado newEmp) {
    for (Empleado& emp: empleados) {
        if(emp.nombre == newEmp.nombre)
            return false;
    }
    empleados.push_back(newEmp);
    return true;
}


bool Departamento::despedirEmpleado(Empleado oldEmp) {
    for (auto it = empleados.begin(); it != empleados.end(); ++it) {
        if (it->nombre == oldEmp.nombre) {
            empleados.erase(it);
            return true;
        }
    }
    return false;
}