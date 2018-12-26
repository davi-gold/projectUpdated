//
// Created by schwe on 19/12/2018.
//

#ifndef PROJECTUPDATED_WHILECOMMAND_H
#define PROJECTUPDATED_WHILECOMMAND_H

#include "../ConditionCommand.h"
#include "../MultiCommand.h"

class WhileCommand : ConditionCommand {
protected:
    ConditionCommand *cond;
    MultiCommand *toDo;
public:
    WhileCommand(ConditionCommand *cond, MultiCommand *toDo) : cond(cond), toDo(toDo) {};


    int execute() {
        while ((cond->execute())) {
            toDo->execute();
        }
    }

};

#endif //PROJECTUPDATED_WHILECOMMAND_H
