#ifndef CLIENTEPF_HPP
#define CLIENTEPF_HPP

#include "cliente.hpp"

class ClientePF : public Cliente {


    private:

    int idade;
    std::string CPF;

    public:

    ClientePF();
    ~ClientePF();

    void setCPF(std::string cpf);
    std::string getCPF();
    void setIdade(int idade);
    int getIdade();

};




#endif