//
// Created by schwe on 18/12/2018.
//

#ifndef AP1EX3_CONDITIONCOMMAND_H
#define AP1EX3_CONDITIONCOMMAND_H

#include "doCommand.h"
#include "MathExpression.h"
#include <string>


class ConditionCommand : public doCommand {
protected:
    bool *condition;
    doCommand *orders;
public:
    ConditionCommand(MathExpression *cond, doCommand *toDo) : condition(cond), orders(toDo) {}

    virtual bool execute() = 0;
};

#endif //AP1EX3_CONDITIONCOMMAND_H
