#include <iostream>
#include "funcionario.hpp"

Funcionario::Funcionario() : salario(0), nome(""), departamento(""), admissao("09/08/2020") {


}

Funcionario::~Funcionario() {


}

void Funcionario::setSalario(double salario) {

    this->salario = salario;
}

double Funcionario:: getSalario() {

    return this->salario;
}

void Funcionario::setNome(std::string nome) {

    this->nome = nome;
}

std::string Funcionario::getNome() {

    return this->nome;
}

void Funcionario::setDepartamento(std::string departamento) {

    this->departamento = departamento;
}

std::string Funcionario::getDepartamento() {

    return this->departamento;
}

void Funcionario::setAdmissao(std::string admissao) {

    this->admissao = admissao;
}

std::string Funcionario::getAdmissao() {

    return admissao;
}

void Funcionario::setSede(Empresa sede) {

    this->sede = sede;
}

Empresa Funcionario::getSede() {

    return this->sede;
}