#ifndef CONTA_HPP
#define CONTA_HPP

#include <string>
#include "agencia.hpp"
#include "cliente.hpp"

class Conta {

    public:
    
    Conta();
    Conta(Cliente &titular);
    ~Conta();

    int numero;
    double saldo;
    Cliente titular;
    static int qntdContas;

    void saca(double valor);
    void deposita(double valor);
    void transfere(double valor, Conta &alvo);

};

#endif