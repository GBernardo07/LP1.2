#include "../include/clientepf.hpp"

ClientePF::ClientePF() {


}

ClientePF::~ClientePF() {


}

void ClientePF::setCPF(std::string cpf) {

    this->CPF = cpf;
}

std::string ClientePF::getCPF() {

    return this->CPF;
}

void ClientePF::setIdade(int idade) {

    this->idade = idade;
}

int ClientePF::getIdade() {

    return this->idade;
}