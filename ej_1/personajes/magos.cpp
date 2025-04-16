#include "magos.hpp"

int Magos::getHp() {
    return hp;
}

string Magos::getNombre() {
    return nombre;
}

string Magos::getArma() {
    if (armas.size() == 0) return "No hay armas";
    return armas[0]->getNombre();
}

bool Magos::setHp(int newHp) {
    hp = newHp < 0 ? 0: newHp;
    return true;
}

bool Magos::estaVivo() {
    return (hp > 0);
}

void Magos::agregarArma(unique_ptr<Armas>& new_arma) {
    armas.push_back(move(new_arma));
}

void Magos::mejorarArma() {
    if (armas.size() == 0) return;
    armas[0]->mejorar();
}

void Magos::getArmaDesc() {
    if (armas.size() == 0) return;
    armas[0]->mostrarDesc();
}

int Magos::getDanio() {
    if (armas.size() == 0) return 0;
    return armas[0]->getDanio();
}