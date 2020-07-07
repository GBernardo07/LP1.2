#include "../include/impressao.hpp"

void printMenu() {

    std::cout << "Bem vindo ao simulador!\n"<< std::endl;
    std::cout << "--------------\n" << std::endl;
    std::cout << "Opcoes: \n" << std::endl;
    std::cout << " - Status\n - Virar chave\n - Acelerar\n - Freiar\n" << std::endl;
    std::cout << " - Sair\n" << std::endl;

}

void mostrarStatus(Carro alvo) {

    std::cout << "\nEstado: " << alvo.estado << std::endl;
    std::cout << "Velocidade: " << alvo.velocidade << "km/h" << std::endl;
    std::cout << "Marcha: " << alvo.marcha << std::endl; 
    std::cout << "Tanque: " << alvo.tanque << "L\n" << std::endl;

}