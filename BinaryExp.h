//
// Created by schwe on 18/12/2018.
//

#ifndef AP1EX3_BINARYEXP_H
#define AP1EX3_BINARYEXP_H

#include "UnaryExp.h"
class BinaryExp :MyExpression{
protected:
    MyExpression *left;
    MyExpression *right;
public:
    virtual double calculate()=0;
    BinaryExp(MyExpression *a, MyExpression *b) : left(a), right(b){};
};
#endif //AP1EX3_BINARYEXP_H
