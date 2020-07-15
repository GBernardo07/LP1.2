#ifndef FILA_HPP
#define FILA_HPP

#include <iostream>

template <typename tipo>
class Fila {

    private:
    
    int size, reference;
    tipo *elements, *aux;

    public:

    Fila(int s) {
        size = s;
        reference = -1;
        elements = new tipo[size];
    }

    bool isEmpty() {
        if (!size)
            return true;
        return false;
    }

    int returnSize() {
        return this->size;
    }

    tipo &front() {

        return elements[0];
    }

    tipo &back() {

        return elements[reference];
    }

    void push(tipo element) {
        
        if(reference == (size -1)) {
            std::cout << "Fila cheia" << std::endl;
        }
        else {
            this->elements[++reference] = element;
        }


    }

    void pop() {
        
        if(reference == -1) {
            std::cout << "Fila vazia" << std::endl;
        }
        else {
            this->elements[reference--];
        }


    }

};

#endif