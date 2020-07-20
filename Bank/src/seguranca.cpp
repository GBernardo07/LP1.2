#include "../include/seguranca.hpp"

Seguranca::Seguranca() : hitPoints(100) {


}

Seguranca::~Seguranca() {


}

void Seguranca::setHP(int hp) {

    this->hitPoints = hp;
}

int Seguranca::getHP() {

    return this->hitPoints;
}

void Seguranca::setWeapon(std::string weapon) {

    this->weapon = weapon;
}

std::string Seguranca::getWeapon() {

    return this->weapon;
}