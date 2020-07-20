#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <string>

class Funcionario {

    private:

    int cargaHoraria;
    double salario;
    std::string nome;

    public:

    Funcionario();
    ~Funcionario();

    void setCargaHoraria(int horas);
    int getCargaHoraria();  
    void setSalario(double salario);
    double getSalario();
    void setNome(double nome);
    std::string getNome();

};

#endif