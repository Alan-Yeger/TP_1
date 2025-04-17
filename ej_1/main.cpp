#include <iostream>
#include <memory>
#include "personajes/personajes.hpp"
#include "personajes/guerreros.hpp"
#include "personajes/magos.hpp"
#include "armas/armas.hpp"
#include "armas/armas_combate.hpp"
#include "armas/items_magicos.hpp"

using namespace std;

int main() {
    // Clase guerreros
    // Crear un personaje de tipo Barbaro
    unique_ptr<Barbaro> barbaro = make_unique<Barbaro>();
    
    // Verificar los métodos del personaje
    cout << "Nombre del personaje: " << barbaro->getNombre() << endl;
    cout << "HP: " << barbaro->getHp() << endl;
    cout << "¿Está vivo? " << (barbaro->estaVivo() ? "Sí" : "No") << endl;
    barbaro->presentarse();

    // Crear un arma (puedes sustituir esto por una clase de armas concreta)
    unique_ptr<Armas> espada = make_unique<Espada>(); // Usar un arma genérica o una clase derivada si la tienes
    barbaro->agregarArma(espada);  // Agregar el arma al personaje

    // Verificar si el personaje tiene arma
    cout << "Arma equipada: " << barbaro->getArma() << endl;

    // Mejorar el arma
    barbaro->mejorarArma();
    cout << "Después de mejorar: " << barbaro->getArma() << endl;

    cout << "Descripción del arma: "; barbaro->getArmaDesc();

    // Verificar el daño y la regeneración
    cout << "Daño: " << barbaro->getDanio() << endl;
    cout << "Regeneración: " << barbaro->getRegeneracion() << endl;

    // Llamar al alarido de guerra
    barbaro->alaridoDeGuerra();

    // Cambiar el HP
    barbaro->setHp(50);
    cout << "Nuevo HP: " << barbaro->getHp() << endl;

    // Verificar si el personaje sigue vivo
    cout << "¿Está vivo? " << (barbaro->estaVivo() ? "Sí" : "No") << endl;

    // Cambiar el HP
    barbaro->setHp(0);
    cout << "Nuevo HP: " << barbaro->getHp() << endl;

    // Verificar si el personaje sigue vivo
    cout << "¿Está vivo? " << (barbaro->estaVivo() ? "Sí" : "No") << endl;

    cout << "Apretá enter para pasar a la clase Magos: ";
    cin.get();
    cout << "\n";
    
    // Clase Magos
    // Crear un personaje de tipo Hechicero
    unique_ptr<Hechicero> hechicero = make_unique<Hechicero>();
    
    // Verificar los métodos del personaje
    cout << "Nombre del personaje: " << hechicero->getNombre() << endl;
    cout << "HP: " << hechicero->getHp() << endl;
    cout << "¿Está vivo? " << (hechicero->estaVivo() ? "Sí" : "No") << endl;

    // Crear un arma (puedes sustituir esto por una clase de armas concreta)
    unique_ptr<Armas> pocion = make_unique<Pocion>(); // Usar un arma genérica o una clase derivada si la tienes
    hechicero->agregarArma(pocion);  // Agregar el arma al personaje

    // Verificar si el personaje tiene arma
    cout << "Arma equipada: " << hechicero->getArma() << endl;

    // Mejorar el arma
    hechicero->mejorarArma();
    cout << "Después de mejorar: " << hechicero->getArma() << endl;

    cout << "Descripción del arma: "; hechicero->getArmaDesc();

    // Verificar el daño y la regeneración
    cout << "Daño: " << hechicero->getDanio() << endl;
    cout << "Regeneración: " << hechicero->getRegeneracion() << endl;

    // Usar el truco
    hechicero->usarTruco();

    // Cambiar el HP
    hechicero->setHp(50);
    cout << "Nuevo HP: " << hechicero->getHp() << endl;

    // Verificar si el personaje sigue vivo
    cout << "¿Está vivo? " << (hechicero->estaVivo() ? "Sí" : "No") << endl;

    // Cambiar el HP
    hechicero->setHp(0);
    cout << "Nuevo HP: " << hechicero->getHp() << endl;

    // Verificar si el personaje sigue vivo
    cout << "¿Está vivo? " << (hechicero->estaVivo() ? "Sí" : "No") << endl;


    cout << "Apretá enter para ver las armas: ";
    cin.get();
    cout << "\n";
    
    // Clase Armas
    // Crear un arma de tipo HachaDoble

        // Clase Armas
    // Crear un arma de tipo HachaDoble
    unique_ptr<Armas> hachaDoble = make_unique<HachaDoble>();

    //Mostrar datos iniciales
    cout << "Nombre del arma: " << hachaDoble->getNombre() << endl;
    cout << "Daño base: " << hachaDoble->getDanio() << endl;

    cout << "Descripción antes de mejorar:\n";
    hachaDoble->mostrarDesc();

    hachaDoble->mejorar();

    //Datos después de mejorar
    cout << "Descripción después de mejorar:\n";
    hachaDoble->mostrarDesc();


    hachaDoble->utilizar();

    cout << "Regeneración de vida: " << hachaDoble->getRegeneracionVida() << " ¿Por qué un hache te regeneraría vida? Eso dejáselo a la poción" << endl;


    return 0;
}
