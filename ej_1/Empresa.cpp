#include "Empresa.hpp"

Departamento Empresa::getDepByName(string depName) {
    for (Departamento& dep: departamentos) {
        if (dep.nombre == depName) 
            return dep;
    }
    throw runtime_error("Departamento no encontrado\n");
}

vector<Departamento> Empresa::getDepNames() {
    return departamentos;
}