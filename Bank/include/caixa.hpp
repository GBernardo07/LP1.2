#ifndef CAIXA_HPP
#define CAIXA_HPP

#include "funcionario.hpp"

class Caixa : public Funcionario {

    private:

    int charismaLvl;

    public:

    Caixa();
    ~Caixa();

    void setCharisma(int lvl);
    int getCharisma();

};


#endif