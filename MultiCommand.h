//
// Created by schwe on 23/12/2018.
//

#ifndef PROJECTUPDATED_MULTICOMMANC_H
#define PROJECTUPDATED_MULTICOMMANC_H

#include "Command.h"
#include <list>

/**
 * MultiCommand:
 * This function receives (or adds to/removes from) a list of several Commands
 * upon 'execute' it will execute the entire list of given commands
 * @param list<Command> *commandsToDo
 * @return
 */
using namespace std;

class MultiCommand : Command {
protected:
    std::list<CommandExpression> commandsToDo;
public:
    //constructor
    MultiCommand(std::list<CommandExpression> commandsToDo) : commandsToDo(commandsToDo) {}

    //constructor
    MultiCommand() {
        list <CommandExpression> commandsList;
        commandsToDo = commandsList;
    }

    //getter
    std::list<CommandExpression> getCommandsToDo() {
        return commandsToDo;
    }

    //setter
    void setCommandsToDo(std::list<CommandExpression> commandsToDo) {
        MultiCommand::commandsToDo = commandsToDo;
    }

    /**
 * execute:
 * Function iterates over entire list and 'executes' each Command
 * @param
 * @return
 */
    int execute() {
        for (list<Command, std::allocator<Command>>::iterator index = commandsToDo.begin();
             index != commandsToDo.end(); ++index) {
            index->execute();
        }
        //as always we return the AMOUNT of arguements we have just executed
        return (int) commandsToDo.size();
    }

/**
 * addCommand:
 * This function adds a new command to the commandsToDo list
 * @param doCommand;
 * @return
 */
    void addCommand(Command *newCommand) {
        commandsToDo.push_back(*newCommand);
    };

/**
 * removeCommand:
 * This function removes a command from the 'commandsToDo' list
 * @param toRemove
 * @return
 */
    void removeCommand(Command *toRemove) {
        commandsToDo.remove(*toRemove);
    };


};


#endif //PROJECTUPDATED_MULTICOMMANC_H
