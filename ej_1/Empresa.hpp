#include <iostream>
#include <vector>
#include "EntidadOrganizativa.hpp"
#include "Departamento.hpp"

using namespace std;

class Empresa: public EntidadOrganizativa {
    public: 
        string direccion;
        Departamento getDepByName(string);
        vector<Departamento> getDepNames();

    private:
        vector<Departamento> departamentos;
};