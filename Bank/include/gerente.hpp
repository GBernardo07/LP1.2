#ifndef GERENTE_HPP
#define GERENTE_HPP

#include "funcionario.hpp"

class Gerente : public Funcionario {

    private:

    int corruptionLvl;

    public:

    Gerente();
    ~Gerente();

    void setCorruption(int lvl);
    int getCorruption();

};


#endif