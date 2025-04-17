#include "magos.hpp"

int Magos::getHp() {
    return hp;
}

string Magos::getNombre() {
    return nombre;
}

string Magos::getArma() {
    if (armas.size() == 0) return "No hay armas";
    else if (armas.size() == 1) return armas[0]->getNombre();
    else if (armas.size() == 2) return (armas[0]->getNombre() + " y " + armas[1]->getNombre());
    return "Demasiadas armas";
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

int Magos::getRegeneracion() {
    if (armas.size() == 0) return 0;
    return armas[0]->regenerarVida();
}

void Magos::usarTruco() {
    cout << nombre << " de " << escuelaMagia << " usa su hechizo favorito: " << trucoFavorito << "!" << endl;
}