//
// Created by schwe on 31/12/2018.
//

#include "WhileCommand.h"


void WhileCommand::doCommand(int index, vector <string> lex) {;
    Condition *condition = conditionParser(data, lex, index + 1);
    vector<string> WhileLex=splitBlock(index,lex);

    while (condition->calculate()) {
        parser(data, WhileLex);
    }

    delete (condition);
}