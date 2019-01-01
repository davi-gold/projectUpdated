//
// Created by schwe on 31/12/2018.
//

#ifndef PROJECTUPDATED_WHILECOMMAND_H
#define PROJECTUPDATED_WHILECOMMAND_H

#include "ConditionParser.h"
#include "Parser.h"
#include "Command.h"
#include "DataBase.h"
#include "CommandBlock.h"

class WhileCommand : public CommandBlock{
    DataBase *data;

public:
    WhileCommand(DataBase *d) {
        data = d;
    }

    void doCommand(int index, vector<string> lex);
};

#endif //PROJECTUPDATED_WHILECOMMAND_H
