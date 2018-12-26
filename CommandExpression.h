//
// Created by David Goldberg on 2018-12-23.
//

#ifndef PROJECTUPDATED_COMMANDEXPRESSION_H
#define PROJECTUPDATED_COMMANDEXPRESSION_H


#include "Expression.h"
#include "Command.h"

class CommandExpression : public Expression {
    Command *command;
public:
    double calculate(){
        return command->execute();
    }
};

#endif //PROJECTUPDATED_COMMANDEXPRESSION_H
