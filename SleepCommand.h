//
// Created by schwe on 31/12/2018.
//

#ifndef PROJECTUPDATED_SLEEPCOMMAND_H
#define PROJECTUPDATED_SLEEPCOMMAND_H

#include <chrono>
#include "DataBase.h"
#include "ShuntingYard.h"
class SleepCommand : public Command {
    DataBase *data;

public:
    SleepCommand(DataBase *d) {
        data = d;
    }

    virtual void doCommand(int index, vector <string> lex);
};

#endif //PROJECTUPDATED_SLEEPCOMMAND_H
