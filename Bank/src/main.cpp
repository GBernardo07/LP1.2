#include <iostream>

#include "../include/conta.hpp"
#include "../include/cliente.hpp"
#include "../include/clientepj.hpp"
#include "../include/clientepf.hpp"
#include "../include/fila.hpp"

int main(int argc, char* argv[]) {

    Conta a, b;
    Fila <Conta> fileira(5);

    a.getTitular().setNome("Gabriel");
    b.getTitular().setNome("Bernardo");

    a.setNumero(1004);
    a.setSaldo(250);
    b.setNumero(1003);
    b.setSaldo(350);

    fileira.push(a);
    fileira.push(b);

    std::cout << fileira.back().getNumero() << std::endl;
    

    return 0;
}