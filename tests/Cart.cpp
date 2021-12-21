//
// Created by gdrp7 on 15/12/2021.
//

#include "Cart.h"

Cart::Cart(unsigned int c, unsigned int n, unsigned int m) {
    this->c = c; this->n = n; this->m = m;

    cart.resize(c);
    for (auto c : cart) c.resize(n);
}

unsigned int Cart::getC() const {
    return this->c;
}

unsigned int Cart::getN() const {
    return this->n;
}

unsigned int Cart::getM() const {
    return this->m;
}

vector<vector<stack<Luggage>>> Cart::getCart() const {
    return this->cart;
}

void Cart::setC(const unsigned int c) {
    this->c = c;
}

void Cart::setN(const unsigned int n) {
    this->n = n;
}

void Cart::setM(const unsigned int m) {
    this->m = m;
}

bool Cart::addLuggage(Luggage l) {
    for (const auto& v : cart)
        for (auto s : v)
            if (s.size() < m) {
                s.push(l);
                return true;
            }
    return false;
}

unsigned int Cart::getMaxCapacity() const {
    return getC()*getM()*getN();
}

bool Cart::isEmpty() {
    for (const auto& v : cart) for (const auto& s : v) if (!s.empty()) return false;
    return true;
}

