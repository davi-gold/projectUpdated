//
// Created by schwe on 31/12/2018.
//

#ifndef PROJECTUPDATED_PRINT_H
#define PROJECTUPDATED_PRINT_H


#include <iostream>
#include <regex>
#include "DataBase.h"

class PrintCommand : public Command {
    DataBase *data;
public:
    PrintCommand(DataBase *d) {
        data = d;
    }

    void doCommand(int index, vector <string> lex);
};



#endif //PROJECTUPDATED_PRINT_H
