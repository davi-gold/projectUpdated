//
// Created by schwe on 18/12/2018.
//

#ifndef AP1EX3_CONDITIONCOMMAND_H
#define AP1EX3_CONDITIONCOMMAND_H

#include "doCommand.h"
#include "MathExpression.h"
#include <string>

using namespace std;
class ConditionCommand : public doCommand {
protected:
    bool *condition;
    doCommand *orders;
public:
    //constructor
    ConditionCommand(MathExpression *cond, doCommand *toDo) : condition(cond), orders(toDo) {}

    //setter
    void setCondition(bool *condition) {
        ConditionCommand::condition = condition;
    }

    //getter
    bool *getCondition() const {
        return condition;
    }

    virtual string execute() = 0;
};

#endif //AP1EX3_CONDITIONCOMMAND_H
