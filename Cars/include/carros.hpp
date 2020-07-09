#ifndef CARROS_HPP
#define CARROS_HPP

#include <string>

class Carro {

    public:

    int velocidade, marcha, tanque;
    std::string estado; // ligado/desligado

    Carro();
    ~Carro();

    static int qntdCarros;

    int estaLigado();
    void viraChave();
    void acelera();
    void freia();
    void passarMarcha();
    void abastecer();
};

#endif