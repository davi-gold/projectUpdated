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

    std::string execute() override {
        while ((condition->execute())) {

        }
    }

};

#endif //PROJECTUPDATED_WHILECOMMAND_H
