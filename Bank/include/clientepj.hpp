#ifndef CLIENTEPJ_HPP
#define CLIENTEPJ_HPP

#include <string>

class ClientePJ {

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