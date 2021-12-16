//
// Created by gdrp7 on 15/12/2021.
//

#ifndef HEAD_CART_H
#define HEAD_CART_H

#include <stack>
#include <vector>

using namespace std;

class Cart {
    unsigned int c;
    unsigned int n;
    unsigned int m;
    vector<vector<stack<Luggage>>> cart;
public:
    Cart(unsigned int c, unsigned int n, unsigned int m);
    unsigned int getC() const;
    unsigned int getN() const;
    unsigned int getM() const;
    vector<vector<stack<Luggage>>> getCart() const;
    void setC(const unsigned int c);
    void setN(const unsigned int n);
    void setM(const unsigned int m);
    void addLuggage(Luggage l);
};

#endif //HEAD_CART_H
