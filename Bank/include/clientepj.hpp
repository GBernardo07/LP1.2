#ifndef CLIENTEPJ_HPP
#define CLIENTEPJ_HPP

#include <string>

#include "cliente.hpp"

class ClientePJ: public Cliente {

    private:
    
    std::string RazaoSocial, CNPJ;

    public:

    ClientePJ();
    ~ClientePJ();

    void setRazaoSocial(std::string razao);
    std::string getRazaoSocial();
    void setCNPJ(std::string cnpj);
    std::string getCNPJ();

};



#endif