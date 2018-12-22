 //
// Created by schwe on 19/12/2018.
//

#ifndef PROJECTUPDATED_WHILECOMMAND_H
#define PROJECTUPDATED_WHILECOMMAND_H
#include "../ConditionCommand.h"

class WhileCommand : ConditionCommand {
    std::string execute() override {
        while ((condition->calculate) != 0) {
            return (orders->execute);
        }
    }

};

#endif //PROJECTUPDATED_WHILECOMMAND_H
