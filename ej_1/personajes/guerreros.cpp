#include "guerreros.hpp"

int Guerreros::getHp() {
    return hp;
}

string Guerreros::getNombre() {
    return nombre;
}

bool Guerreros::setHp(int newHp) {
    if (newHp < 0) return false;
    hp = newHp;
    return true;
}

bool Guerreros::estaVivo() {
    return (hp > 0);
}

void Guerreros::agregarArma(unique_ptr<Armas>& new_arma) {
    armas.push_back(new_arma);
}