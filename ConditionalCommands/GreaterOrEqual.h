//
// Created by schwe on 23/12/2018.
//

#ifndef PROJECTUPDATED_GREATEROREQUAL_H
#define PROJECTUPDATED_GREATEROREQUAL_H
#include "../ConditionCommand.h"
class GreaterOrEqual :ConditionCommand{

public:
    virtual int execute(){
        if(getLeft()->calculate()>=getRight()->calculate())
        {
            setCondition(true);
        }else{
            setCondition(false);
        }
        return 3;
    };


};
#endif //PROJECTUPDATED_GREATEROREQUAL_H
