#include "items_magicos.hpp"

void ItemsMagicos::utilizar() {
    cout << "Se utilizó: " << nombre << "con su ataque: " << ataqueEspecial << "\n";
}

int ItemsMagicos::getDanio() {
    return puntosDanio;
}

string ItemsMagicos::getNombre() {
    return nombre;
}

void Baston::activarMagia() {
    if (esMagico) return;
    nombre = "Bastón Rúnico";
    puntosDanio = 15; 
    tipo = "Chamánico";
    ataqueEspecial = "Raíz Ancestral";
    esMagico = true;
}

void Baston::mostrarDesc() {
    if (esMagico) {
        cout << "El Bastón Rúnico resplandece con símbolos antiguos que se entrelazan como las serpientes en el Bastón de Asclepio.\n";
        cout << "Forjado por druidas olvidados, canaliza la furia de la tierra y desata la 'Raíz Ancestral', atrapando enemigos en lianas vivientes.\n";
        cout << "Como el bastón de Gandalf en la batalla de Helm, este arma no es solo un canal de poder, sino un guardián del equilibrio natural.\n";
    }
    else {
        cout << "El Bastón Mozzarella parece inofensivo, casi un simple palo de caminante, pero guarda un secreto delicioso.\n";
        cout << "Empapado en los encantos de una cocina ancestral, dispara el temido 'Proyectil de Queso Fundido' a sus enemigos.\n";
    }
}

void LibroDeHechizos::activarMagia() {
    if (esMagico) return;
}

void LibroDeHechizos::mostrarDesc() {
    if (esMagico) return;
}

void Pocion::activarMagia() {
    if (esMagico) return;
    regeneracion = 10;
    esMagico = true;

}

void Pocion::mostrarDesc() {
    if (esMagico) return;
}

void Amuleto::activarMagia() {
    if (esMagico) return;
}

void Amuleto::mostrarDesc() {
    if (esMagico) return;
}