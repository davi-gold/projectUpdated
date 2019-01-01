//
// Created by David Goldberg on 2018-12-23.
//

#ifndef PROJECTUPDATED_OPENSERVERCOMMAND_H
#define PROJECTUPDATED_OPENSERVERCOMMAND_H
using namespace std;

#include "Command.h"

class OpenServerCommand : public Command {
    // members declarations
    int port;
    int Hz;
public:
    // constructor
    OpenServerCommand(int port, int Hz);
    // execute function
    int execute();
};


#endif //PROJECTUPDATED_OPENSERVERCOMMAND_H
