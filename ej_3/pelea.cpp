#include "../ej_1/personajes/personajes.hpp"
#include "../ej_2/personajeFactory.hpp"
#include <ctime>
#include <memory>
#include <vector>

using namespace std;

// Devuelve el nombre del personaje según el número de opción elegido
string strPersonaje(int opcion) {
    switch (opcion) {
        case 1:
            return "Barbaro";
        case 2:
            return "Paladin";
        case 3:
            return "Caballero";
        case 4:
            return "Mercenario";
        case 5:
            return "Gladiador";
        case 6:
            return "Hechicero";
        case 7:
            return "Conjurador";
        case 8:
            return "Brujo";
        case 9:
            return "Nigromante";
        default:
            throw invalid_argument("Opción no válida\n");            
    }
}

// Devuelve el nombre del arma según el número de opción elegido
string strArma(int opcion) {
    switch (opcion) {
        case 1:
            return "Hacha Simple";
        case 2:
            return "Hacha Doble";
        case 3:
            return "Espada";
        case 4:
            return "Lanza";
        case 5:
            return "Garrote";
        case 6:
            return "Baston";
        case 7:
            return "Libro de Hechizos";
        case 8:
            return "Pocion";
        case 9:
            return "Amuleto";
        default:
            throw invalid_argument("Opción no válida\n");            
    }
}

int main() {
    srand(time(nullptr)); // Semilla para generación de números aleatorios

    int opcionPersonaje, opcionArma;
    // Menú para elegir el personaje
    cout << "Elegí el personaje que más te guste (poné el numerito de la opción).\n"
         << "1. Bárbaro\n"
         << "2. Paladín\n"
         << "3. Caballero\n"
         << "4. Mercenario\n"
         << "5. Gladiador\n"
         << "6. Hechicero\n"
         << "7. Conjurador\n"
         << "8. Brujo\n"
         << "9. Nigromante\n";
    cin >> opcionPersonaje;

    // Menú para elegir el arma
    cout << "Ahora elegí el arma\n"
         << "1. Hacha Simple\n"
         << "2. Hacha Doble\n"
         << "3. Espada\n"
         << "4. Lanza\n"
         << "5. Garrote\n"
         << "6. Bastón\n"
         << "7. Libro de Hechizos\n"
         << "8. Poción\n"
         << "9. Amuleto\n";
    cin.ignore();
    cin >> opcionArma;

    // Genera personaje y arma aleatorios para el oponente
    int personajeRandom = rand() % 9 + 1;
    int armaRandom = rand() % 9 + 1;

    // Convierte números a nombres
    string personaje = strPersonaje(opcionPersonaje); 
    string arma = strArma(opcionArma);
    string personaje2 = strPersonaje(personajeRandom);
    string arma2 = strArma(armaRandom);

    // Creamos vectores de armas
    vector<string> armas = {arma};
    vector<string> armas2 = {arma2};

    // Creamos personajes armados con PersonajeFactory
    unique_ptr<Personajes> jugador_1 = PersonajeFactory::crearPersonajeArmado(personaje, armas);
    unique_ptr<Personajes> jugador_2 = PersonajeFactory::crearPersonajeArmado(personaje2, armas2);

    // Muestra la selección
    cout << "\nJugador 1 eligió: " << personaje << " con " << arma << endl;
    cout << "Jugador 2 fue asignado aleatoriamente: " << personaje2 << " con " << arma2 << endl;
    
    // Pregunta si se desea mejorar las arma, esto hace que cada arma tenga un daño especial
    // El único problema podría ocurrir si ambos jugadores pelean con la Poción de Ambrosía
    // ya que podrían curarse interminable
    int mejoraArma;
    cout << "\n Desea mejorar las armas? \n"
         << "1. SI\n"
         << "2. NO\n";
    cin >> mejoraArma;
    // Pregunta si se desea mejorar las armas
    if (mejoraArma == 1) {
        jugador_1->mejorarArma();
        jugador_2->mejorarArma();

        cout << "\nArma mejorada del jugador 1:\n";
        jugador_1->getArmaDesc();
        cout << "\nArma mejorada del jugador 2:\n";
        jugador_2->getArmaDesc();
        cout << "\n";
    }
    else if (mejoraArma == 2) {
        cout << "\nArma NO mejorada del jugador 1:\n";
        jugador_1->getArmaDesc();
        cout << "\nArma NO mejorada del jugador 2:\n";
        jugador_2->getArmaDesc();
        cout << "\n";
    }    


    //Combate hasta la muerte
    while(jugador_1->getHp() && jugador_2->getHp()) {
        //Si ambos jugadores tienen pociones no vale la pena pelear
        if (jugador_1->getArma() == "Poción de ambrosía" && jugador_2->getArma() == "Poción de ambrosía") {
            cout << "Como ambos jugadores tienen la Poción de Ambrosía son conscientes de que la pelea no va a llegar a ningún lado y deciden hacer las paces sin pelear\n";
            break;
        }

        if (jugador_1->getArma() == "Poción de Regeneración" && jugador_2->getArma() == "Poción de Regeneración") {
            cout << "Como ambos jugadores tienen la Poción de regeneración llegan a la conclusión de que el combate es absurdo, se dan un abrazo y cada uno para su casa.\n";
            break;
        }

        cout << "El jugador 1 tiene " << jugador_1->getHp() << "HP mientras que Jugador 2 tiene " << jugador_2->getHp() << "HP\n";
        int ataque1, ataque2;
        // Menú de ataques para el jugador
        cout << "Elegí tu ataque:\n"
             << "1. Golpe Fuerte\n"
             << "2. Golpe Rápido\n"
             << "3. Defensa y Golpe\n";
        cin >> ataque1;
        // Ataque aleatorio del oponente
        ataque2 = rand() % 3 + 1;

        // Empate: ambos ataques son iguales
        if (ataque1 == ataque2) {
            cout << "Ningún jugador recibe daño\n";
        }
        // Jugador 1 gana esta ronda (piedra-papel-tijera)
        else if ((ataque1 % 3) + 1 == ataque2) {
            // Si tiene una poción, se cura y daña
            if (jugador_1->getArma() == "Poción de Regeneración" || jugador_1->getArma() == "Poción de ambrosía") {
                jugador_1->setHp(jugador_1->getHp() + jugador_1->getRegeneracion());
                jugador_2->setHp(jugador_2->getHp() - jugador_1->getDanio());
                cout << jugador_1->getNombre() << " utiliza: " << jugador_1->getArma() << " y regenera " << jugador_1->getRegeneracion() << " puntos de vida.\n";
                cout << "También le lanza el frasco a su rival y le hace " << jugador_1->getDanio() << " puntos de daño.\n";
            }
            else { //Ataque normal
                jugador_2->setHp(jugador_2->getHp() - jugador_1->getDanio());
                cout << jugador_1->getNombre() << " ataca con: " << jugador_1->getArma() << " y hace " << jugador_1->getDanio() << " puntos de daño.\n";
            }
        }
         // Jugador 2 gana esta ronda
        else if ((ataque2 % 3) + 1 == ataque1) {
            // Si tiene una poción, se cura y daña
            if (jugador_2->getArma() == "Poción de Regeneración" || jugador_2->getArma() == "Poción de ambrosía") {
                jugador_2->setHp(jugador_2->getHp() + jugador_2->getRegeneracion());
                jugador_1->setHp(jugador_1->getHp() - jugador_2->getDanio());
                cout << jugador_2->getNombre() << " utiliza: " << jugador_2->getArma() << " y regenera " << jugador_2->getRegeneracion() << " puntos de vida.\n";
                cout << "También le lanza el frasco a su rival y le hace " << jugador_2->getDanio() << " puntos de daño.\n";
            }
            else { //Ataque normal
                jugador_1->setHp(jugador_1->getHp() - jugador_2->getDanio());
                cout << jugador_2->getNombre() << " ataca con: " << jugador_2->getArma() << " y hace " << jugador_2->getDanio() << " puntos de daño.\n";            }
            
        }
        // Revisión de estado al final del turno
        if(!jugador_1->estaVivo()) cout << "Jugador 1 perdió.\n";
        else if (!jugador_2->estaVivo()) cout << "Jugador 2 perdió.\n";

    }

    return 0;
}