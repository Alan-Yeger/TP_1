#include "personajeFactory.hpp"
#include "../ej_1/personajes/guerreros.hpp"
#include "../ej_1/personajes/magos.hpp"
#include "../ej_1/armas/armas_combate.hpp"
#include "../ej_1/armas/items_magicos.hpp"

unique_ptr<Personajes> PersonajeFactory::crearPersonaje(string personaje) {
    if (personaje == "barbaro") {
        return make_unique<Barbaro>();
    } else if (personaje == "Paladin") {
        return make_unique<Paladin>();
    } else if (personaje == "Caballero") {
        return make_unique<Caballero>();
    } else if (personaje == "Mercenario") {
        return make_unique<Mercenario>();
    } else if (personaje == "Gladiador") {
        return make_unique<Gladiador>();
    } else if (personaje == "Hechicero") {
        return make_unique<Hechicero>();
    } else if (personaje == "Conjurador") {
        return make_unique<Conjurador>();
    } else if (personaje == "Brujo") {
        return make_unique<Brujo>();
    } else if (personaje == "Nigromante") {
        return make_unique<Nigromante>();
    } else throw invalid_argument("Tipo de personaje desconocido\n");
}
unique_ptr<Armas> PersonajeFactory::crearArma(string arma) {
    if (arma == "Hacha Simple") {
        return make_unique<HachaSimple>();
    } else if (arma == "Hacha Doble") {
        return make_unique<HachaDoble>();
    } else if (arma == "Espada") {
        return make_unique<Espada>();
    } else if (arma == "Lanza") {
        return make_unique<Lanza>();
    } else if (arma == "Garrote") {
        return make_unique<Garrote>();
    } else if (arma == "Baston") {
        return make_unique<Baston>();
    } else if (arma == "Libro de Hechizos") {
        return make_unique<LibroDeHechizos>();
    } else if (arma == "Pocion") {
        return make_unique<Pocion>();
    } else if (arma == "Amuleto") {
        return make_unique<Amuleto>();
    } else throw invalid_argument("Tipo de arma desconocido\n");
}

unique_ptr<Personajes> PersonajeFactory::crearPersonajeArmado(string personaje, vector<string>& armas) {
    unique_ptr<Personajes> personajeArmado = crearPersonaje(personaje);

    for (string arma: armas) {
        unique_ptr<Armas> new_arma = crearArma(arma);
        personajeArmado->agregarArma(new_arma);
    }
    
    return personajeArmado;
}