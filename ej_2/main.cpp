#include "personajeFactory.hpp"
#include <cstdlib>
#include <ctime>

using namespace std;

// Devuelve el nombre del Guerrero según la opción ingresada
string strGuerrero(int opcion) {
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
        default:
            throw invalid_argument("Opción no válida\n");            
    }
}

// Devuelve el nombre del Mago según la opción ingresada
string strMago(int opcion) {
    switch (opcion) {
        case 1:
            return "Hechicero";
        case 2:
            return "Conjurador";
        case 3:
            return "Brujo";
        case 4:
            return "Nigromante";
        default:
            throw invalid_argument("Opción no válida\n");            
    }
}

// Devuelve el nombre del arma según la opción ingresada
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
    
    srand(time(nullptr)); // Inicializa la semilla aleatoria con la hora actual

    // Genera dos números aleatorios de prueba y los muestra
    int num1 = 3 + rand() % 5; // 3 a 7
    int num2 = rand() % 3;     // 0 a 2

    cout << "Número aleatorio entre 3 y 7: " << num1 << endl;
    cout << "Número aleatorio entre 0 y 2: " << num2 << endl;

    cout << "Apretá enter para seguir ";
    cin.get();

    // Genera la cantidad de Magos y Guerreros (entre 3 y 7 cada uno)
    int cantidadMagos = 3 + rand() % 5;     // 3 a 7
    int cantidadGuerreros = 3 + rand() % 5; // 3 a 7

    cout << "\nCantidad de Magos: " << cantidadMagos << endl;
    cout << "Cantidad de Guerreros: " << cantidadGuerreros << endl;

    cout << "Apretá enter para seguir ";
    cin.get();
    cout << "\n";

    // Armas para cada Mago
    for (int i = 0; i < cantidadMagos; ++i) {
        int armas = rand() % 3; // 0 a 2
    
        //Crear Mago armado
        string mago = strMago(rand() % 4 + 1);
        vector<string> vector_armas;
        for (int i = 0; i < armas; ++i) {
            vector_armas.push_back(strArma(rand() % 9 + 1));
        }
        unique_ptr<Personajes> objMago = PersonajeFactory::crearPersonajeArmado(mago, vector_armas);
        cout << "Mago " << i + 1 << " es de tipo " << objMago->getNombre() << " tiene " << armas << " arma(s)." << endl;
        cout << "Armas: " << objMago->getArma() << endl;

    }
    cout << "\n";

    // Armas para cada Guerrero
    for (int i = 0; i < cantidadGuerreros; ++i) {
        int armas = rand() % 3; // 0 a 2
        
        //Crear Guerrero armado
        string guerrero = strGuerrero(rand() % 5 + 1);
        vector<string> vector_armas;
        for (int i = 0; i < armas; ++i) {
            vector_armas.push_back(strArma(rand() % 9 + 1));
        }
        unique_ptr<Personajes> objGuerrero = PersonajeFactory::crearPersonajeArmado(guerrero, vector_armas);
        cout << "Guerrero " << i + 1 << " es de tipo " << objGuerrero->getNombre() << " tiene " << armas << " arma(s)." << endl;
        cout << "Armas: " << objGuerrero->getArma() << endl;
    }    

    return 0;
}