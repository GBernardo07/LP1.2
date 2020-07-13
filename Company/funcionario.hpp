#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <string>

#include "empresa.hpp"

class Funcionario {

    private:

    double salario;
    std::string nome, departamento, admissao;
    Empresa sede;


    public:

    Funcionario();
    ~Funcionario();

    void setSalario(double salario);
    double getSalario();

    void setNome(std::string nome);
    std::string getNome();

    void setDepartamento(std::string departamento);
    std::string getDepartamento();

    void setAdmissao(std::string admissao);
    std::string getAdmissao();

    void setSede(Empresa sede);
    Empresa getSede();

};



#endif