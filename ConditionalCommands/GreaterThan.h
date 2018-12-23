//
// Created by schwe on 23/12/2018.
//

#ifndef PROJECTUPDATED_GREATERTHAN_H
#define PROJECTUPDATED_GREATERTHAN_H
#include "../ConditionCommand.h"
class GreaterThan :ConditionCommand{

public:
    virtual int execute(){
        if(getLeft()->calculate()>getRight()->calculate())
        {
            setCondition(true);
        }else{
            setCondition(false);
        }
        return 3;
    };


};
#endif //PROJECTUPDATED_GREATERTHAN_H
