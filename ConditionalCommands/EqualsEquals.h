//
// Created by schwe on 19/12/2018.
//

#ifndef PROJECTUPDATED_EQUALSEQUALS_H
#define PROJECTUPDATED_EQUALSEQUALS_H

#include "../ConditionCommand.h"
class EqualsEquals :ConditionCommand{

public:
virtual int execute(){
    if(getLeft()->calculate()==getRight()->calculate())
    {
        setCondition(true);
    }else{
        setCondition(false);
    }
    return 3;
};


};
#endif //PROJECTUPDATED_EQUALSEQUALS_H
