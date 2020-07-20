#include "../include/gerente.hpp"

Gerente::Gerente() {


}

Gerente::~Gerente() {


}

void Gerente::setCorruption(int lvl) {

    this->corruptionLvl = lvl;
}

int Gerente::getCorruption() {

    return this->corruptionLvl;
}