#include "empresa.hpp"

Empresa::Empresa() : nome(""), cnpj("") {


}

Empresa::~Empresa() {


}

void Empresa::setCnpj(std::string cnpj) {

    this->cnpj = cnpj;
}

std::string Empresa::getCnpj() {

    return this->cnpj;
}

void Empresa::setNome(std::string nome) {

    this->nome = nome;
}

std::string Empresa::getNome() {

    return this->nome;
}