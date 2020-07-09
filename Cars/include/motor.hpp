#ifndef MOTOR_H
#define MOTOR_H

#include <string>

class Motor {

    std::string nivelOleo; // alto/medio/baixo

    Motor();
    ~Motor();

    void trocaOleo();
    void partida();
};

#endif