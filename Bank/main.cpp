#include <iostream>

#include "conta.hpp"

int main(int argc, char* argv[]) {

    Conta a, b;
    
    a.numero = 1004;
    a.titular.nome = "Bernardo";
    a.saldo = 250;

    b.numero = 1003;
    b.titular.nome = "Gabriel";
    b.saldo = 350;

    std::cout << "saldo de " << a.titular.nome << " = " << a.saldo << std::endl;
    std::cout << "saldo de " << b.titular.nome << " = " << b.saldo << std::endl;
    
    a.saca(100);
    a.transfere(50, b);
    b.deposita(150);

    std::cout << "\nsaldo de " << a.titular.nome << " = " << a.saldo << std::endl;
    std::cout << "saldo de " << b.titular.nome << " = " << b.saldo << std::endl;

    return 0;
}