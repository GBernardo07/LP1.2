#include <iostream>

#include "../include/carros.hpp"
#include "../include/impressao.hpp"

int main(int argc, char *argv[]) {

    Carro meuCarro;
    std::string acao;

    printMenu();

    while(true) {

        std::cout << " -> ";

        getline(std::cin, acao);

        if (acao == "status")
            mostrarStatus(meuCarro);
        else if (acao == "virar chave")
            meuCarro.viraChave();
        else if (acao == "acelerar")
            meuCarro.acelera();
        else if (acao == "freiar")
            meuCarro.freia();
        else if (acao == "sair")
            return 0;
        else
            std::cout << "Insira uma opcao valida\n" << std::endl;

    }

    return 0;
}