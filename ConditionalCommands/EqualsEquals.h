//
// Created by schwe on 19/12/2018.
//

#ifndef PROJECTUPDATED_EQUALSEQUALS_H
#define PROJECTUPDATED_EQUALSEQUALS_H

#include "../ConditionCommand.h"
class: EqualsEquals :ConditionCommand{

    std::string execute() override {
            return (orders->execute);
        }
    }

};
#endif //PROJECTUPDATED_EQUALSEQUALS_H
