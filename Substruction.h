//
// Created by schwe on 18/12/2018.
//

#ifndef AP1EX3_SUBTRACTION_H
#define AP1EX3_SUBTRACTION_H
#include "BinaryExp.h"
class Subtraction : BinaryExp {
    double calculate() {
        return (left->calculate) - right->calculate;
    }
};
#endif //AP1EX3_SUBTRACTION_H
