#include "magos.hpp"

int Magos::getHp() {
    return hp;
}

string Magos::getNombre() {
    return nombre;
}

bool Magos::setHp(int newHp) {
    if (newHp < 0) return false;
    hp = newHp;
    return true;
}

bool Magos::estaVivo() {
    return (hp > 0);
}

void Magos::agregarArma(unique_ptr<Armas>& new_arma) {
    armas.push_back(new_arma);
}