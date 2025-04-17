#include "../ej_1/personajes/personajes.hpp"
#include "../ej_2/personajeFactory.hpp"
#include <ctime>
#include <memory>
#include <vector>

using namespace std;

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
    srand(time(nullptr));

    int opcionPersonaje, opcionArma;
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

    int personajeRandom = rand() % 9 + 1;
    int armaRandom = rand() % 9 + 1;

    string personaje = strPersonaje(opcionPersonaje); 
    string arma = strArma(opcionArma);
    
    string personaje2 = strPersonaje(personajeRandom);
    string arma2 = strArma(armaRandom);

    vector<string> armas = {arma};
    vector<string> armas2 = {arma2};

    unique_ptr<Personajes> jugador_1 = PersonajeFactory::crearPersonajeArmado(personaje, armas);
    unique_ptr<Personajes> jugador_2 = PersonajeFactory::crearPersonajeArmado(personaje2, armas2);

    cout << "\nJugador 1 eligió: " << personaje << " con " << arma << endl;
    cout << "Jugador 2 fue asignado aleatoriamente: " << personaje2 << " con " << arma2 << endl;
    
    int mejoraArma;
    cout << "\n Desea mejorar las armas? \n"
         << "1. SI\n"
         << "2. NO\n";
    cin >> mejoraArma;
    
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

    //Combate
    while(jugador_1->getHp() && jugador_2->getHp()) {
        cout << "El jugador 1 tiene " << jugador_1->getHp() << "HP mientras que Jugador 2 tiene " << jugador_2->getHp() << "HP\n";

        int ataque1, ataque2;
        cout << "Elegí tu ataque:\n"
             << "1. Golpe Fuerte\n"
             << "2. Golpe Rápido\n"
             << "3. Defensa y Golpe\n";
        cin >> ataque1;
        ataque2 = rand() % 3 + 1;

        if (ataque1 == ataque2) {
            cout << "Ningún jugador recibe daño\n";
        }
        else if ((ataque1 % 3) + 1 == ataque2) {
            if (jugador_1->getArma() == "Poción de Regeneración" || jugador_1->getArma() == "Poción de ambrosía") {
                jugador_1->setHp(jugador_1->getHp() + jugador_1->getRegeneracion());
                jugador_2->setHp(jugador_2->getHp() - jugador_1->getDanio());
                cout << jugador_1->getNombre() << " utiliza: " << jugador_1->getArma() << " y regenera " << jugador_1->getRegeneracion() << " puntos de vida.\n";
                cout << "También le lanza el frasco a su rival y le hace " << jugador_1->getDanio() << " puntos de daño.\n";
            }
            else {
                jugador_2->setHp(jugador_2->getHp() - jugador_1->getDanio());
                cout << jugador_1->getNombre() << " ataca con: " << jugador_1->getArma() << " y hace " << jugador_1->getDanio() << " puntos de daño.\n";
            }
        }
        else if ((ataque2 % 3) + 1 == ataque1) {
            if (jugador_2->getArma() == "Poción de Regeneración" || jugador_2->getArma() == "Poción de ambrosía") {
                jugador_2->setHp(jugador_2->getHp() + jugador_2->getRegeneracion());
                jugador_1->setHp(jugador_1->getHp() - jugador_2->getDanio());
                cout << jugador_2->getNombre() << " utiliza: " << jugador_2->getArma() << " y regenera " << jugador_2->getRegeneracion() << " puntos de vida.\n";
                cout << "También le lanza el frasco a su rival y le hace " << jugador_2->getDanio() << " puntos de daño.\n";
            }
            else {
                jugador_1->setHp(jugador_1->getHp() - jugador_2->getDanio());
                cout << jugador_2->getNombre() << " ataca con: " << jugador_2->getArma() << " y hace " << jugador_2->getDanio() << " puntos de daño.\n";            }
            
        }

        if(!jugador_1->estaVivo()) cout << "Jugador 1 perdió.\n";
        else if (!jugador_2->estaVivo()) cout << "Jugador 2 perdió.\n";

    }

    return 0;
}