#include "../include/clientepj.hpp"

ClientePJ::ClientePJ() : RazaoSocial(""), CNPJ("") {


}

ClientePJ::~ClientePJ() {


}

void ClientePJ::setRazaoSocial(std::string razao) {

    this->RazaoSocial = razao;
}

std::string ClientePJ::getRazaoSocial() {

    return this->RazaoSocial;
}

void ClientePJ::setCNPJ(std::string cnpj) {

    this->CNPJ = cnpj;
}

std::string ClientePJ::getCNPJ() {

    return this->CNPJ;
}