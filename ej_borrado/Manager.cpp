#include "Manager.hpp"


bool Manager::updateBono(float newBono) {
    if (newBono < 0) return false;
    bono = newBono;
    return true;
}

float Manager::getBono() {
    return bono;
}

bool Manager::setLevel(string newLevel) {
    if (newLevel != "GerenteAlto" && newLevel != "GerenteMedio" && newLevel != "GerenteBajo" && newLevel != "LideEquipo") return false;
    level = newLevel;
    return true;
}