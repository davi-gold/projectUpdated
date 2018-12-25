//
// Created by schwe on 25/12/2018.
//

#ifndef PROJECTUPDATED_IFCOMMAND_H
#define PROJECTUPDATED_IFCOMMAND_H
#include "../ConditionCommand.h"
#include "../MultiCommand.h"

class IfCommand : ConditionCommand {
protected:
    ConditionCommand *cond;
    MultiCommand *toDo;

public:
    IfCommand(MathExpression *left, MathExpression *right, MultiCommand *toDo)
            : ConditionCommand(left, right), toDo(toDo) {}

    int execute() override {
        if ((cond->execute())) {
            toDo->execute();
        }
    }

};
#endif //PROJECTUPDATED_IFCOMMAND_H
