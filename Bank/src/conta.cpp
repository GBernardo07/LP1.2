#include "../include/conta.hpp"

#include <iostream>

Conta::Conta() {

    this->qntdContas += 1;
}

Conta::Conta(Cliente &titular) : titular(titular){

    this->qntdContas += 1;
}

Conta::~Conta() {


}

int Conta::qntdContas{0};

void Conta::setNumero(int numero) {

    this->numero = numero;
}

int Conta::getNumero() {

    return this->numero;
}

void Conta::setSaldo(double saldo) {

    this->saldo = saldo;
}

double Conta::getSaldo() {

    return this->saldo;
}

void Conta::setTitular(Cliente titular) {

    this->titular = titular;
}

Cliente Conta::getTitular() {

    return this->titular;
}

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