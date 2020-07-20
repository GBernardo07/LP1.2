#ifndef CONTA_HPP
#define CONTA_HPP

#include <string>
#include "agencia.hpp"
#include "cliente.hpp"

class Conta {

    private:
    
    int numero;
    double saldo;
    Cliente titular;

    static int qntdContas;

    public:
    
    Conta();
    Conta(Cliente &titular);
    ~Conta();

    void setNumero(int numero);
    int getNumero();
    void setSaldo(double saldo);
    double getSaldo();
    void setTitular(Cliente titular);
    Cliente getTitular();

    void saca(double valor);
    void deposita(double valor);
    void transfere(double valor, Conta &alvo);

};

#endif