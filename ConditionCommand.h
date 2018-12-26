//
// Created by schwe on 18/12/2018.
//

#ifndef AP1EX3_CONDITIONCOMMAND_H
#define AP1EX3_CONDITIONCOMMAND_H

#include "CommandExpression.h"
#include "Expression.h"
#include <string>
/**
 * ConditionCommand::
 * This function receives two Expressions, and a Condition between them, it checks
 * if the given condition 'exists' (i.e is true of false) between the 2 given Expressions
 * @param MathExpression left,right; Command ConditionOperator
 * @return
 */
class ConditionCommand : Command {
protected:
    Expression *left;
    Expression *right;
    bool condition;
public:
    ConditionCommand(bool condition) : condition(condition) {};

    ConditionCommand(Expression *left, Expression *right) : left(left), right(right) {};

     int execute();

    //getter
    bool isCondition() const {
        return condition;
    }

    //setter
    void setCondition(bool condition) {
        ConditionCommand::condition = condition;
    }

    //getter
    Expression *getLeft() const {
        return left;
    }
//setter
    void setLeft(Expression *left) {
        ConditionCommand::left = left;
    }
//getter
    Expression *getRight() const {
        return right;
    }
//setter
    void setRight(Expression *right) {
        ConditionCommand::right = right;
    }
};
#endif //AP1EX3_CONDITIONCOMMAND_H
