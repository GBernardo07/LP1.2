#include <iostream>

#include "../include/conta.hpp"
#include "../include/cliente.hpp"
#include "../include/clientepj.hpp"
#include "../include/fila.hpp"

int main(int argc, char* argv[]) {

    Conta a, b;
    Fila <Conta> fileira(5);

    a.titular.nome = "Gabriel";
    b.titular.nome = "Bernardo";

    a.numero = 1004;
    a.saldo = 250;

    b.numero = 1003;
    b.saldo = 350;

    fileira.push(a);
    fileira.push(b);

    std::cout << fileira.back().numero << std::endl;
    

    return 0;
}