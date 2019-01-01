//
// Created by schwe on 20/12/2018.
//

#ifndef PROJECTUPDATED_VARCOMMAND_H
#define PROJECTUPDATED_VARCOMMAND_H
#include <iostream>
#include "Command.h"
#include "DataBase.h"



class VarCommand : public Command {
    DataBase *data;

public:
    VarCommand(DataBase *d) {
        data = d;
    }

    virtual void doCommand(int index, vector <string> lex);
};
#endif //PROJECTUPDATED_VARCOMMAND_H
