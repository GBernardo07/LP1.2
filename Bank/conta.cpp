#include "conta.hpp"

#include <iostream>

void Conta::saca(double valor) {

    this->saldo -= valor;

}

void Conta::deposita(double valor) {

    this->saldo += valor;

}

void Conta::transfere(double valor, Conta &alvo) {

    if (valor > this->saldo) {
        std::cout << "There's no sufficient funds" << std::endl;
        return;
    }

    this->saldo -= valor;
    alvo.saldo += valor;

}