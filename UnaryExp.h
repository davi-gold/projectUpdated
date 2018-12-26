//
// Created by schwe on 18/12/2018.
//

#ifndef AP1EX3_UNARYEXP_H
#define AP1EX3_UNARYEXP_H
#include "Expression.h"
class UnaryExp : public Expression{

public:
    virtual double calculate() =0;
};
#endif //AP1EX3_UNARYEXP_H
