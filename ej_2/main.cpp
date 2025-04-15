#include "personajeFactory.hpp"
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    
    srand(time(nullptr));

    int num1 = 3 + rand() % 5; // 3 a 7
    int num2 = rand() % 3;     // 0 a 2

    cout << "Número aleatorio entre 3 y 7: " << num1 << endl;
    cout << "Número aleatorio entre 0 y 2: " << num2 << endl;

    int cantidadMagos = 3 + rand() % 5;     // 3 a 7
    int cantidadGuerreros = 3 + rand() % 5; // 3 a 7

    cout << "\nCantidad de Magos: " << cantidadMagos << endl;
    cout << "Cantidad de Guerreros: " << cantidadGuerreros << endl;

    // Armas para cada Mago
    for (int i = 0; i < cantidadMagos; ++i) {
        int armas = rand() % 3; // 0 a 2
        cout << "Mago " << i + 1 << " tiene " << armas << " armas." << endl;
    }

    // Armas para cada Guerrero
    for (int i = 0; i < cantidadGuerreros; ++i) {
        int armas = rand() % 3; // 0 a 2
        cout << "Guerrero " << i + 1 << " tiene " << armas << " armas." << endl;
    }

    return 0;
}