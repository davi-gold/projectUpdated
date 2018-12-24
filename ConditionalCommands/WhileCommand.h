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

    int execute() override {
        while ((cond->execute())) {
            toDo->execute();
        }
    }

};

#endif //PROJECTUPDATED_WHILECOMMAND_H
