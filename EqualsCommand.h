//
// Created by schwe on 29/12/2018.
//

#ifndef PROJECTUPDATED_EQUALSCOMMAND_H
#define PROJECTUPDATED_EQUALSCOMMAND_H


#include "DataBase.h"
#include "Command.h"


class EqualsCommand : public Command {
    DataBase *data;
public:
    EqualsCommand(DataBase *d) {
        data = d;
    }

    void doCommand(int index, vector <string> lex);
};


#endif //PROJECTUPDATED_EQUALSCOMMAND_H
