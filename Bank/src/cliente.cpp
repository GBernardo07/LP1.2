#include "../include/cliente.hpp"

#include <iostream>

Cliente::Cliente() {

    this->qntdClientes += 1;
}

Cliente::~Cliente() {

    
}

int Cliente::qntdClientes{0};