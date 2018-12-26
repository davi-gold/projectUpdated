//
// Created by schwe on 18/12/2018.
//

#ifndef AP1EX3_BINARYEXP_H
#define AP1EX3_BINARYEXP_H

#include "UnaryExp.h"
class BinaryExp :Expression{
protected:
    Expression *left;
    Expression *right;
public:
    virtual double calculate()=0;
    BinaryExp(Expression *a, Expression *b) : left(a), right(b){};
};
#endif //AP1EX3_BINARYEXP_H
