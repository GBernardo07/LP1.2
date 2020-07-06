#ifndef conta_HPP
#define conta_HPP

#include <string>

class Conta {

    public:

    int numero;
    double saldo;
    std::string titular;

    void saca(double valor);
    void deposita(double valor);
    void transfere(double valor, Conta &alvo);

};

#endif