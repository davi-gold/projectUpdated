//
// Created by schwe on 20/12/2018.
//

#ifndef PROJECTUPDATED_SHUNTYARD_H
#define PROJECTUPDATED_SHUNTYARD_H

#include <string>
#include <stack>
#include <map>
using namespace std;

class ShuntYard {
    //members
    stack<string> operatorList;
    stack<string> outputList;
public:
    //constructor
    ShuntYard(string mathEquation);

    //destructor
    virtual ~ShuntYard();

    const stack<string> &getOperatorList() const;

    const stack<string> &getOutputList() const;
};


#endif //PROJECTUPDATED_SHUNTYARD_H
