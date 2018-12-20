//
// Created by schwe on 18/12/2018.
//

#ifndef AP1EX3_PLUS_H
#define AP1EX3_PLUS_H

#include "../BinaryExp.h"
class Addition : BinaryExp {
    double calculate() override {
        return (left->calculate()) + right->calculate();
    }
};
#endif //AP1EX3_PLUS_H
