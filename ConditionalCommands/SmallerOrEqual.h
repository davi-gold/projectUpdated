//
// Created by schwe on 23/12/2018.
//

#ifndef PROJECTUPDATED_SMALLEROREQUAL_H
#define PROJECTUPDATED_SMALLEROREQUAL_H
#include "../ConditionCommand.h"
class SmallerOrEqual :ConditionCommand{

public:
    virtual int execute(){
        if(getLeft()->calculate()<=getRight()->calculate())
        {
            setCondition(true);
        }else{
            setCondition(false);
        }
        return 3;
    };


};
#endif //PROJECTUPDATED_SMALLEROREQUAL_H
