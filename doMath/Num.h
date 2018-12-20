//
// Created by schwe on 18/12/2018.
//

#ifndef AP1EX3_NUM_H
#define AP1EX3_NUM_H

#include "../UnaryExp.h"

class Num : UnaryExp {
protected:
    double variable;
public:
    Num(double variable) : variable(variable) {};

    double calculate() override {
        return variable;
    }

public:
};

#endif //AP1EX3_NUM_H
