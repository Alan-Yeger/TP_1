#include "armas_combate.hpp"


void ArmasCombate::utilizar() {
    cout << "Se utilizó: " << nombre << "con su ataque: " << ataqueEspecial << "\n";
}

int ArmasCombate::getDanio() {
    return puntosDanio;
}

string ArmasCombate::getNombre() {
    return nombre;
}

void ArmasCombate::mostrarDesc() {
    // No hace nada, porque es abstracta pero lo necesito para que no tire error
}

void HachaSimple::mejorar() {
    if (estaMejorada) return;
    nombre = "Hacha de Tyr";
    puntosDanio *= 1.1;
    ataqueEspecial = "Fuerza de la justicia";
    estaMejorada = true;
}

void HachaSimple::mostrarDesc() {
    if (estaMejorada) {
        cout << "El Hacha de Tyr es un símbolo de la justicia y la guerra.\n";
        cout << "Forjada en el calor de las batallas, esta arma es una manifestación del sacrificio y la valentía del dios que dio su mano para atrapar a Fenrir.\n";
        cout << "Su ataque especial, 'Fuerza de la Justicia', permite a Tyr golpear con la determinación de la justicia, causando un daño devastador a los enemigos del orden.\n";
    }
    else {
        cout << "Hacha de leñador panzón.\n";
    }
}

void HachaDoble::mejorar() {
    if (estaMejorada) return;
    nombre = "Labrys de Artemisa";
    puntosDanio *= 1.1;
    ataqueEspecial = "Furia de los Dioses";
    estaMejorada = true;
}

void HachaDoble::mostrarDesc() {
    if (estaMejorada) {
        cout << "La Labrys, un hacha doble de los Minoicos, es un símbolo de poder y autoridad.\n";
        cout << "Forjada en los misteriosos talleres del Laberinto de Creta, tiene la capacidad de partir el aire y la tierra con su golpe.\n";
        cout << "Su ataque especial, Furia de los Dioses, desata una tormenta de golpes que puede atravesar cualquier defensa.\n";
    }
    else {
        cout << "Así que te querés hacer el importante usando un hacha de doble filo, ha.\n";
    }
}

void Espada::mejorar() {
    if (estaMejorada) return;
    nombre = "Anaklusmos";
    puntosDanio *= 1.1;
    ataqueEspecial = "Ola de Contracorriente";
    estaMejorada = true;
}

void Espada::mostrarDesc() {
    if (estaMejorada) {
        cout << "Anaklusmos, también conocida como Contracorriente, es una espada mágica forjada del metal celestial.\n";
        cout << "Brilla con un tono azul plateado y solo puede dañar a monstruos y criaturas mitológicas.\n";
        cout << "Al contacto con enemigos, puede liberar una ola de energía marina, símbolo del poder de Poseidón.\n";
        cout << "Ahora que Percy se jubiló de los combates es tu responsabilidad llevarla con honor y nobleza.\n";
    }
    else {
        cout << "Espada básica nivel 1 malísima no corta ni un jamón.\n";
    }
}

void Lanza::mejorar() {
    if (estaMejorada) return;
    nombre = "Lanza de Aquiles";
    puntosDanio *= 1.1;
    ataqueEspecial = "Caída de Hector";
    estaMejorada = true;
}

void Lanza::mostrarDesc() {
    if (estaMejorada) {
        cout << "La Lanza de Aquiles tiene la Estrella de Tetis, su madre, grabada en la parte superior del arma.\n";
        cout << "Toda la lanza está envuelta en un brillo anaranjado, como si llevara consigo la luz del amanecer.\n";
        cout << "Forjada en el monte Pelión por el dios Hefesto, su hoja puede atravesar cualquier escudo.\n";
        cout << "Solo aquellos con sangre de héroe pueden blandirla sin ser consumidos por su poder.\n";
    }
    else {
        cout << "Esta es una lanza normal, como la de los duendes del Clash\n";
    }
    
}

void Garrote::mejorar() {
    if (estaMejorada) return;
    nombre = "Garrote de Heracles";
    puntosDanio *= 1.1;
    ataqueEspecial = "Golpe del León de Nemea";
    tipo = "aclis";
    estaMejorada = true;
}

void Garrote::mostrarDesc() {
    if (estaMejorada) {
        cout << "Un pesado Garrote hecho del tronco de un olivo sagrado, endurecido al fuego.\n";
        cout << "Este arma legendaria acompañó a Heracles en sus doce trabajos.\n";
        cout << "Puede aplastar armaduras y monstruos con igual facilidad.\n";
        cout << "Simbólicamente representa la fuerza bruta y el coraje del héroe.\n";
    }
    else {
        cout << "Es solo una maderita pa, como usaban los cavernícolas";
    }
}