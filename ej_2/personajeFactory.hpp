#include "../ej_1/personajes/personajes.hpp"
#include <memory>
#include <vector>

using namespace std;

class PersonajeFactory {
    public:
        static unique_ptr<Personajes> crearPersonaje(string personaje);
        static unique_ptr<Armas> crearArma(string arma);
        static unique_ptr<Personajes> crearPersonajeArmado(string personaje, vector<string>& armas);

    private:

};