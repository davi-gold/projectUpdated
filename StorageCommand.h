//
// Created by schwe on 30/12/2018.
//

#ifndef PROJECTUPDATED_STORAGECOMMAND_H
#define PROJECTUPDATED_STORAGECOMMAND_H
#include "Thread.h"
#include <pthread.h>
#include "Command.h"
#include "DataBase.h"
#include "ShuntingYard.h"





class StorageCommand : public Command {
    DataBase *data;

public:
    StorageCommand(DataBase *d) {
        data = d;
    }

    virtual void doCommand(int index, vector <string> lex);
};



#endif //PROJECTUPDATED_STORAGECOMMAND_H
