//
// Created by schwe on 26/12/2018.
//

#ifndef PROJECTUPDATED_DEFINEVAR_H
#define PROJECTUPDATED_DEFINEVAR_H

#include "CommandExpression.h"
#include "Data.h"
#include <string>
#include <map>


class DefineVar :CommandExpression{
protected:
string name;
string bound;
Data *data=data->getInstance;
public:
    DefineVar(string name, string bound) : name(name), bound(bound) {}

public:
    //we add (or update) the BoundMap
int execute(){
data->addToBindMap(name,bound);
    }
};
#endif //PROJECTUPDATED_DEFINEVAR_H
