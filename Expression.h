//
// Created by schwe on 18/12/2018.
//

#ifndef AP1EX3_EXPRESSION_H
#define AP1EX3_EXPRESSION_H
class Expression {
public:
    virtual double calculate() = 0;

    virtual ~Expression() {}
};

class Num : public Expression {
    double val;
public:
    Num(double x) {
        val = x;
    }

    double calculate() {
        return val;
    }
};

class Addition : public Expression {
    Expression *right;
    Expression *left;

public:
    Addition(Expression *left2, Expression *right2) {
        right = right2;
        left = left2;
    }

    double calculate() {
        return left->calculate() + right->calculate();
    }

};

class Multiply : public Expression {
    Expression *right;
    Expression *left;

public:
    Multiply(Expression *left2, Expression *right2) {
        right = right2;
        left = left2;
    }

    double calculate() {
        return left->calculate() * right->calculate();
    }

};

class Div : public Expression {
    Expression *right;
    Expression *left;

public:
    Div(Expression *left2, Expression *right2) {
        right = right2;
        left = left2;
    }

    double calculate() {
        return left->calculate() / right->calculate();
    }

};


class Subtract : public Expression {
    Expression *right;
    Expression *left;

public:
    Subtract(Expression *left2, Expression *right2) {
        right = right2;
        left = left2;
    }

    double calculate() {
        return left->calculate() - right->calculate();
    }

};

class Negative: public Expression {
    Expression *right;

public:
    Negative(Expression * right2) {
        right = right2;
    }
    double calculate() {
        return  - right->calculate();
    }

};

#endif //AP1EX3_EXPRESSION_H
