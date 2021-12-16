//
// Created by gdrp7 on 16/12/2021.
//

#include "luggage.h"

Luggage::Luggage(unsigned int w) {
    this->weight = w;
}

unsigned int Luggage::getWeight() const {
    return this->weight;
}

void Luggage::setWeight(unsigned int w) {
    this->weight = w;
}

