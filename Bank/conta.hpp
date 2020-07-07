#ifndef CONTA_HPP
#define CONTA_HPP

#include <string>
#include "agencia.hpp"
#include "cliente.hpp"

class Conta {

    public:

    int numero;
    double saldo;
    Cliente titular;

    void saca(double valor);
    void deposita(double valor);
    void transfere(double valor, Conta &alvo);

};

#endif