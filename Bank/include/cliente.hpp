#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>

class Cliente {

    private:

    static int qntdClientes;

    std::string nome, dataContrato, endereco;

    public:

    Cliente();
    ~Cliente();

    void setNome(std::string nome);
    std::string getNome();
    void setDataContrato(std::string data);
    std::string getDataContrato();
    void setEndereco(std::string endereco);
    std::string getEndereco();

};

#endif