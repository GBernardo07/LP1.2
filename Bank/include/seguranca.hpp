#ifndef SEGURANCA_HPP
#define SEGURANCA_HPP

#include <string>

#include "funcionario.hpp"

class Seguranca : public Funcionario {

    private:

    int hitPoints;
    std::string weapon;
    
    public:

    Seguranca();
    ~Seguranca();

    void setHP(int hp);
    int getHP();
    void setWeapon(std::string weapon);
    std::string getWeapon();

};


#endif