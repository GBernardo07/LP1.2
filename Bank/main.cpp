#include <iostream>

#include "conta.hpp"
#include "cliente.hpp"

int main(int argc, char* argv[]) {

    Conta a, b;

    a.titular.nome = "Gabriel";
    b.titular.nome = "Bernardo";

    a.numero = 1004;
    a.saldo = 250;

    b.numero = 1003;
    b.saldo = 350;

    std::cout << a.qntdContas << std::endl;
    

    return 0;
}