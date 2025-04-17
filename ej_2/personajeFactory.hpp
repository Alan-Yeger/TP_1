#include "../ej_1/personajes/personajes.hpp"
#include "../ej_1/personajes/guerreros.hpp"
#include "../ej_1/personajes/magos.hpp"
#include "../ej_1/armas/armas.hpp"
#include "../ej_1/armas/armas_combate.hpp"
#include "../ej_1/armas/items_magicos.hpp"
#include <memory>
#include <vector>

using namespace std;

/* Fábrica de personajes y armas.
Esta clase provee métodos estáticos para crear instancias de personajes,
armas individuales y personajes equipados con un conjunto de armas. */

class PersonajeFactory {
    public:
        static unique_ptr<Personajes> crearPersonaje(string personaje);
        static unique_ptr<Armas> crearArma(string arma);
        static unique_ptr<Personajes> crearPersonajeArmado(string personaje, vector<string>& armas);
};