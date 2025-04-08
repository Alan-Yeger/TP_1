#include <iostream>
#include <vector>

using namespace std;

class EntidadOrganizativa {
    public:
        string nombre;
        void agregarSubentidad(EntidadOrganizativa*);
        int contarSubentidades();

    private:
        vector<EntidadOrganizativa> subentidades;
};