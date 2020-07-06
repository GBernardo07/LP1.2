#ifndef MOTOR_H
#define MOTOR_H

class Motor {

    std::string nivelOleo; // alto/medio/baixo

    Motor();
    ~Motor();

    void trocaOleo();
}

#endif