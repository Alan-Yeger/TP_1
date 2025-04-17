#include "magos.hpp"

// Devuelve los puntos de vida actuales del mago
int Magos::getHp() {
    return hp;
}

// Devuelve el nombre del mago
string Magos::getNombre() {
    return nombre;
}

// Devuelve el nombre del arma o armas del mago
// Maneja hasta 2 armas, si hay más devuelve un mensaje genérico
string Magos::getArma() {
    if (armas.size() == 0) return "No hay armas";
    else if (armas.size() == 1) return armas[0]->getNombre();
    else if (armas.size() == 2) return (armas[0]->getNombre() + " y " + armas[1]->getNombre());
    return "Demasiadas armas";
}

// Establece un nuevo valor de hp, no puede ser menor a 0
bool Magos::setHp(int newHp) {
    hp = newHp < 0 ? 0: newHp;
    return true;
}

// Indica si el mago sigue vivo (hp > 0)
bool Magos::estaVivo() {
    return (hp > 0);
}

// Agrega un arma al vector de armas del guerrero
void Magos::agregarArma(unique_ptr<Armas>& new_arma) {
    armas.push_back(move(new_arma));
}

// Mejora la primera arma del mago, si tiene alguna
void Magos::mejorarArma() {
    if (armas.size() == 0) return;
    armas[0]->mejorar();
}

// Muestra la descripción de la primera arma, si existe
void Magos::getArmaDesc() {
    if (armas.size() == 0) return;
    armas[0]->mostrarDesc();
}

// Devuelve el daño de la primera arma
int Magos::getDanio() {
    if (armas.size() == 0) return 0;
    return armas[0]->getDanio();
}

// Devuelve cuánta vida puede regenerar la primera arma
int Magos::getRegeneracion() {
    if (armas.size() == 0) return 0;
    return armas[0]->getRegeneracionVida();
}

// Presentación del truco favorito de cada mago
void Magos::usarTruco() {
    cout << nombre << " de " << escuelaMagia << " usa su hechizo favorito: " << trucoFavorito << "!" << endl;
}