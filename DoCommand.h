//
// Created by schwe on 19/12/2018.
//

#ifndef PROJECTUPDATED_DOCOMMAND_H
#define PROJECTUPDATED_DOCOMMAND_H

#include "Command.h"
class DoCommand: public  Command{
public:
    virtual int execute()=0;
};

#endif //PROJECTUPDATED_DOCOMMAND_H
