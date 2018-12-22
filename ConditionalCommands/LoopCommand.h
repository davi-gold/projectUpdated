//
// Created by schwe on 23/12/2018.
//

#ifndef PROJECTUPDATED_LOOPCOMMAND_H
#define PROJECTUPDATED_LOOPCOMMAND_H

#include "../ConditionCommand.h"
#include "../ConditionalCommands/EqualsEquals.h"
class LoopCommand : ConditionCommand {
protected:
    int loopsLeft;
    MathExpression *a;
    MathExpression *b;
    ConditionCommand *between;
    doCommand *toDO;
public:
    int getLoopsLeft() const;

    void setLoopsLeft(int loopsLeft);

private:
    virtual string execute();
};


#endif //PROJECTUPDATED_LOOPCOMMAND_H
