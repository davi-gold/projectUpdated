//
// Created by schwe on 20/12/2018.
//

#ifndef PROJECTUPDATED_SHUNTYARD_H
#define PROJECTUPDATED_SHUNTYARD_H

#include <string>
#include <list>
using namespace std;

class ShuntYard {
    //members
    list<string> operatorList;
    list<string> outputList;
public:
    //constructor
    ShuntYard(list<string> lexerOutput);

    //destructor
    virtual ~ShuntYard();
};


#endif //PROJECTUPDATED_SHUNTYARD_H
