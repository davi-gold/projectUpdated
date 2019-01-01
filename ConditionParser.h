//
// Created by schwe on 29/12/2018.
//

#ifndef PROJECTUPDATED_CONDITIONPARSER_H
#define PROJECTUPDATED_CONDITIONPARSER_H
#include "DataBase.h"
#include <vector>
#include "Condition.h"
#include "ShuntingYard.h"

Condition* conditionParser(DataBase* d, vector <string> lex, int index);


#endif //PROJECTUPDATED_CONDITIONPARSER_H
