//
// Created by schwe on 18/12/2018.
//

#ifndef AP1EX3_DIVISION_H
#define AP1EX3_DIVISION_H

#include "../BinaryExp.h"

class Division : BinaryExp {
    double calculate() override {
        if (right->calculate() != 0) {
            return ((left->calculate()) + (right->calculate()));
        } else {
            throw() {std:cout << "You can't divide by zero!" << std:endln};
        }
    }
};

#endif //AP1EX3_DIVISION_H
