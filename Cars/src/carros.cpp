#include "../include/carros.hpp"

#include <iostream>

Carro::Carro() : estado("desligado"), tanque(60), velocidade(0), marcha(0) {

}

int Carro::estaLigado() {

    if (this->estado == "ligado")
        return 1;
    return 0;
}

void Carro::viraChave() {


    if (estaLigado() && this->velocidade == 0) {
        this->estado = "desligado";
        std::cout << "Carro desligado" << std::endl;
    }
    else if (!estaLigado()) {
        this->estado = "ligado";
        std::cout << "Carro ligado" << std::endl;
    }
    else {
        std::cout << "O carro esta a " << this->velocidade << "km/h!" << " ";
        std::cout << "Nao e possivel desliga-lo" << std::endl;
    }
}

void Carro::acelera() {

    if (!estaLigado()) {
        std::cout << "O carro nao esta ligado!" << std::endl;
        return;
    }

    this->velocidade += 10;

}

void Carro::freia() {

    if (this->velocidade == 0) {
        std::cout << "O carro esta parado" << std::endl;
        return;
    }

    this->velocidade -= 10;

}

void Carro::abastecer() {

    if (this->tanque == 60) {
        std::cout << "Tanque ja esta cheio" << std::endl;
        return;
    }
    std::cout << "Foram abastecidos: " << 60 - this->tanque << "L" << std::endl;
    this->tanque = 60;

}