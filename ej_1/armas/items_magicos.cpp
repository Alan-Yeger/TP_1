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
    nombre = "Grimorio de Hécate";
    tipo = "Hechicería Olímpica";
    ataqueEspecial = "Llamas de Delos";
    puntosDanio *= 1.1;
    esMagico = true;
}

void LibroDeHechizos::mostrarDesc() {
    if (esMagico) {
        cout << "Encadenado con símbolos de bronce e inscrito con letras que solo los iniciados en los Misterios de Eleusis pueden leer,\n";
        cout << "Ahora despierto, el Grimorio de Hécate emite un resplandor espectral. Sus páginas rezuman un poder ancestral\n";
        cout << "canalizado desde los templos de Delfos y los ritos órficos. Cada conjuro vibra con la bendición de los dioses.\n";
    }
    else {
        cout << "Ojo que en la edad media si te veían con este libro te mandaban directo a la hoguera\n";
    }
}

void Pocion::activarMagia() {
    if (esMagico) return;
    nombre = "Poción de ambrosía";
    regeneracion = 10;
    tipo = "Elixir Sagrado";
    ataqueEspecial = "Bendición de Asclepio";
    esMagico = true;

}

void Pocion::mostrarDesc() {
    if (esMagico) {
        cout << "Infundida con la esencia vital de Ambrosía, néctar sagrado de los dioses del Olimpo, "
             << "esta Pocion de Regeneración resplandece con un fulgor etéreo. Su magia, despertada por antiguos cánticos "
             << "de Asclepio, dios de la sanación, restaura las fuerzas perdidas como si los hilos del destino fueran tejidos de nuevo.\n"
             << "Una sola gota puede cerrar heridas que ni el tiempo podría curar, devolviendo al portador la vitalidad de un héroe inmortal.\n";
    }
    else {
        cout << "La del Minecraft \n";
    }
}

void Amuleto::activarMagia() {
    if (esMagico) return;
    nombre = "Amuleto de Hefesto";
    tipo = "Reliquia Forjada";
    ataqueEspecial = "Furia del Yunque Sagrado";
    puntosDanio *= 1.1;
    esMagico = true;
}

void Amuleto::mostrarDesc() {
    if (esMagico) {
        cout << "Al activar el *Amuleto de Hefesto*, un retumbar metálico sacude el aire, como si mil yunques golpearan al unísono.\n";
        cout << "Forjado en el corazón del Etna por manos inmortales, este talismán resplandece con las llamas eternas del dios herrero.\n";
        cout << "Desde el Olimpo desciende su bendición: cada golpe que des será imbuido con la fuerza de los titanes encadenados,\n";
        cout << "y el hierro en tus manos responderá con un eco divino.\n";
        cout << "La Furia del Yunque Sagrado ahora arde en tu interior. Que tiemble la tierra bajo tus pisadas.\n";
    }
    else {
        cout << "Un amuleto oxidado, parece salido de una herrería de pueblo. Tal vez sirva para trabar una puerta.\n";
    }
}