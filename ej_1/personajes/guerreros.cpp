#include "guerreros.hpp"

int Guerreros::getHp() {
    return hp;
}

string Guerreros::getNombre() {
    return nombre;
}

string Guerreros::getArma() {
    if (armas.size() == 0) return "No hay armas";
    else if (armas.size() == 1) return armas[0]->getNombre();
    else if (armas.size() == 2) return (armas[0]->getNombre() + " y " + armas[1]->getNombre());
    return "Demasiadas armas";
}

bool Guerreros::setHp(int newHp) {
    hp = newHp < 0 ? 0 : newHp;
    return true;
}

bool Guerreros::estaVivo() {
    return (hp > 0);
}

void Guerreros::mejorarArma() {
    if (armas.size() == 0) return;
    armas[0]->mejorar();
}

void Guerreros::agregarArma(unique_ptr<Armas>& new_arma) {
    armas.push_back(move(new_arma));
}

void Guerreros::getArmaDesc() {
    if (armas.size() == 0) return;
    armas[0]->mostrarDesc();
}

int Guerreros::getDanio() {
    if (armas.size() == 0) return 0;
    return armas[0]->getDanio();
}

int Guerreros::getRegeneracion() {
    if (armas.size() == 0) return 0;
    return armas[0]->regenerarVida();
}

void Guerreros::presentarse() {
    cout << "Soy " << nombre << " del clan " << clan << ". ¡arrrrrrgggghhhh!" << endl;
}

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