#include "Empleado.hpp"


int Empleado::getAntiguedad() {
    return antiguedad;
}

bool Empleado::updateSalario(float newSalario) {
    if (newSalario < 0) return false;
    salario = newSalario;
    return true;
}

float Empleado::getSalario() {
    return salario;
}