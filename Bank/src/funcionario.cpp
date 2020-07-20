#include "../include/funcionario.hpp"

Funcionario::Funcionario() {


}

Funcionario::~Funcionario() {


}

void Funcionario::setCargaHoraria(int horas) {

    this->cargaHoraria = horas;
}

int Funcionario::getCargaHoraria() {

    return this->cargaHoraria;
}

void Funcionario::setSalario(double salario) {

    this->salario = salario;
}
double Funcionario::getSalario() {

    return this->salario;
}
void Funcionario::setNome(double nome) {

    this->nome = nome;
}
std::string Funcionario::getNome() {

    return this->nome;
}