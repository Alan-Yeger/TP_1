#include <iostream>
#include <set>
#include <vector>
#include "EntidadOrganizativa.hpp"
#include "Manager.hpp"
#include "Empresa.hpp"

using namespace std;

class CentralRegional: public EntidadOrganizativa {
    public:
        set<string> paises;
        int getCantEmpleados;
        vector<string> getEmpNames();
        vector<GerenteAlto> getGerentesAlto(); //Max 5
        vector<GerenteMedio> getGerenteMedio(); //Max 20
    
    private:
        int cantEmpleados;
        vector<GerenteAlto> gerentesAlto; //Max 5
        vector<GerenteMedio> gerentesMedio; // Max 20
        set<Empresa> empresas;
};