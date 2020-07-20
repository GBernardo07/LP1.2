#include "../include/cliente.hpp"

#include <iostream>

Cliente::Cliente() {

    this->qntdClientes += 1;
}

Cliente::~Cliente() {

    
}

int Cliente::qntdClientes{0};

void Cliente::setNome(std::string nome) {

    this->nome = nome;
}

std::string Cliente::getNome() {

    return this->nome;
}

void Cliente::setDataContrato(std::string data) {

    this->dataContrato = data;
}

std::string Cliente::getDataContrato() {

    return this->dataContrato;
}

void Cliente::setEndereco(std::string endereco) {

    this->endereco = endereco;
}

std::string Cliente::getEndereco() {

    return this->endereco;
}