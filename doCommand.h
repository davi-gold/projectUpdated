//
// Created by schwe on 19/12/2018.
//

#ifndef PROJECTUPDATED_DOCOMMAND_H
#define PROJECTUPDATED_DOCOMMAND_H

#include "Command.h"
class doCommand: public  Command{
public:
    virtual std::string execute()=0;
};

#endif //PROJECTUPDATED_DOCOMMAND_H
