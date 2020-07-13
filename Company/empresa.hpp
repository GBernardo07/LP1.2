#ifndef EMPRESA_HPP
#define EMPRESA_HPP

#include <string>

class Empresa {

    private:

    std::string nome, cnpj;

    public:

    Empresa();
    ~Empresa();

    void setNome(std::string nome);
    std::string getNome();
    void setCnpj(std::string cnpj);
    std::string getCnpj();
    
};



#endif