//
// Created by schwe on 18/12/2018.
//

#ifndef AP1EX3_UNARYEXP_H
#define AP1EX3_UNARYEXP_H
#include "MyExpression.h"
class UnaryExp : public MyExpression{

public:
    virtual double calculate() =0;
};
#endif //AP1EX3_UNARYEXP_H
