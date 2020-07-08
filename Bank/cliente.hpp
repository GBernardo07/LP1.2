#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>

class Cliente {

    public:

    Cliente();
    ~Cliente();

    static int qntdClientes;
    std::string nome;
    std::string cpf;

};

#endif