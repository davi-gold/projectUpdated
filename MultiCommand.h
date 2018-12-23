//
// Created by schwe on 23/12/2018.
//

#ifndef PROJECTUPDATED_MULTICOMMANC_H
#define PROJECTUPDATED_MULTICOMMANC_H

#include "doCommand.h"
#include <list>

class MultiCommand {
protected:
std::list<doCommand> commandsToDo;
public:
    //constructor
    MultiCommand(const std::list<doCommand> &commandsToDo) : commandsToDo(commandsToDo) {}

    //getter
    const std::list<doCommand> &getCommandsToDo() const {
        return commandsToDo;
    }

    //setter
    void setCommandsToDo(const std::list<doCommand> &commandsToDo) {
        MultiCommand::commandsToDo = commandsToDo;
    }

    void addCommand(){};
    void removeCommand(){};

};


#endif //PROJECTUPDATED_MULTICOMMANC_H
