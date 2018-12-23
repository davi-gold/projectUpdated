//
// Created by schwe on 23/12/2018.
//

#ifndef PROJECTUPDATED_SMALLERTHAN_H
#define PROJECTUPDATED_SMALLERTHAN_H
#include "../ConditionCommand.h"
class SmallerThan :ConditionCommand{

public:
    virtual int execute(){
        if(getLeft()->calculate()<getRight()->calculate())
        {
            setCondition(true);
        }else{
            setCondition(false);
        }
        return 3;
    };


};
#endif //PROJECTUPDATED_SMALLERTHAN_H
