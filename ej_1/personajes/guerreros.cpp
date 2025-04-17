#include "guerreros.hpp"

// Devuelve los puntos de vida actuales del guerrero
int Guerreros::getHp() {
    return hp;
}


// Devuelve el nombre del guerrero
string Guerreros::getNombre() {
    return nombre;
}

// Devuelve el nombre del arma o armas del guerrero
// Maneja hasta 2 armas, si hay más devuelve un mensaje genérico
string Guerreros::getArma() {
    if (armas.size() == 0) return "No hay armas";
    else if (armas.size() == 1) return armas[0]->getNombre();
    else if (armas.size() == 2) return (armas[0]->getNombre() + " y " + armas[1]->getNombre());
    return "Demasiadas armas";
}

// Establece un nuevo valor de hp, no puede ser menor a 0
bool Guerreros::setHp(int newHp) {
    hp = newHp < 0 ? 0 : newHp;
    return true;
}

// Indica si el guerrero sigue vivo (hp > 0)
bool Guerreros::estaVivo() {
    return (hp > 0);
}

// Mejora la primera arma del guerrero, si tiene alguna
void Guerreros::mejorarArma() {
    if (armas.size() == 0) return;
    armas[0]->mejorar();
}

// Agrega un arma al vector de armas del guerrero
void Guerreros::agregarArma(unique_ptr<Armas>& new_arma) {
    armas.push_back(move(new_arma));
}

// Muestra la descripción de la primera arma, si existe
void Guerreros::getArmaDesc() {
    if (armas.size() == 0) return;
    armas[0]->mostrarDesc();
}

// Devuelve el daño de la primera arma
int Guerreros::getDanio() {
    if (armas.size() == 0) return 0;
    return armas[0]->getDanio();
}


// Devuelve cuánta vida puede regenerar la primera arma
int Guerreros::getRegeneracion() {
    if (armas.size() == 0) return 0;
    return armas[0]->getRegeneracionVida();
}

// Presentación del guerrero por consola, incluye nombre y clan
void Guerreros::presentarse() {
    cout << "Soy " << nombre << " del clan " << clan << ". ¡arrrrrrgggghhhh!" << endl;
}

// Implementaciones de los gritos de guerra específicos para cada tipo de guerrero
void Barbaro::alaridoDeGuerra() {
    cout << "¡QUE RETUMBE LA TIERRA BAJO MIS PISADAS!\n" << endl;
}

void Paladin::alaridoDeGuerra() {
    cout << "¡EN NOMBRE DE LA LUZ ETERNA, LA OSCURIDAD CAERÁ!\n" << endl;
}

void Caballero::alaridoDeGuerra() {
    cout << "¡POR EL REY Y LA PATRIA!\n" << endl;
}

void Mercenario::alaridoDeGuerra() {
    cout << "PAGUEN BIEN Y HAGO LO QUE QUIERAN!\n" << endl;
}

void Gladiador::alaridoDeGuerra() {
    cout << "¡EL COLISEO ACLAMARÁ MI NOMBRE. SANGRE, GLORIA Y LIBERTAD!\n" << endl;
}