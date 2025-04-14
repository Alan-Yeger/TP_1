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

