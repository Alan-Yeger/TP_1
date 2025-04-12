#include "EntidadOrganizativa.hpp"

void EntidadOrganizativa::agregarSubentidad(EntidadOrganizativa* newEnt) {
    for (EntidadOrganizativa& ent: subentidades) {
        if (ent.nombre == newEnt->nombre)
            return;
    }
    subentidades.push_back(*newEnt);
    return;
}


int EntidadOrganizativa::contarSubentidades() {
    return subentidades.size();
}