#include "guerreros.hpp"

int Guerreros::getHp() {
    return hp;
}

string Guerreros::getNombre() {
    return nombre;
}

string Guerreros::getArma() {
    if (armas.size() == 0) return "No hay armas";
    return armas[0]->getNombre();
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
    armas[0]->mostrarDesc();
}

int Guerreros::getDanio() {
    if (armas.size() == 0) return 0;
    return armas[0]->getDanio();
}