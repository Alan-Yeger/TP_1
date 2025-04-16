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

void Guerreros::agregarArma(unique_ptr<Armas>& new_arma) {
    armas.push_back(move(new_arma));
}