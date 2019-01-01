//
// Created by schwe on 25/12/2018.
//

#ifndef PROJECTUPDATED_BINDCOMMAND_H
#define PROJECTUPDATED_BINDCOMMAND_H
#include "DataBase.h"
#include "Command.h"


class BindCommand : public Command {
    DataBase *data;
public:
    BindCommand(DataBase *d) {
        data = d;
    }

    void doCommand(int index, vector <string> lex);
};
#endif //PROJECTUPDATED_BINDCOMMAND_H
