//
// Created by schwe on 31/12/2018.
//

#ifndef PROJECTUPDATED_CONDITION_H
#define PROJECTUPDATED_CONDITION_H
#include <vector>
#include <string>
#include "DataBase.h"
#include "ShuntingYard.h"

using namespace std;
/**
 * This Function contains and constructs all the different possible conditions
 * (<,>,=,>-,!=,etc)
 */
class Condition {
protected:
    DataBase *dataBase;
    vector<string> lexCondition;
    int start_right;
    int start_left;
    double op1;
    double op2;

    bool calculateExpression(){
        op1 = ShuntingYard(dataBase, lexCondition, start_left)[0];
        op2 = ShuntingYard(dataBase, lexCondition, start_right)[0];
    }

public:
    Condition(DataBase *data, vector<string> lexC, int start_L, int start_R) {
        dataBase = data;
        lexCondition = lexC;
        start_right = start_R;
        start_left = start_L;
    }


    virtual bool calculate() = 0;
};

class GreaterThan : public Condition {
public:
    GreaterThan(DataBase *data, vector<string> lexC,  int start_L, int start_R) : Condition(data, lexC, start_L,
                                                                                             start_R) {};
    bool calculate() {
        calculateExpression();
        return op1 > op2;

    }
};
class GreaterOrEqual : public Condition {
public:
    GreaterOrEqual(DataBase *data, vector<string> lexC,  int start_L, int start_R) : Condition(data, lexC, start_L,
                                                                                                  start_R) {};

    bool calculate() {
        calculateExpression();
        return op1 >= op2;

    }
};
class SmallerThan : public Condition {
public:
    SmallerThan(DataBase *data, vector<string> lexC, int start_L, int start_R) : Condition(data, lexC, start_L,
                                                                                              start_R) {};

    bool calculate() {
        calculateExpression();
        return op1 < op2;

    }
};
class SmallerOrEqual : public Condition {
public:
    SmallerOrEqual(DataBase *data, vector<string> lexC,  int start_L, int start_R) : Condition(data, lexC, start_L,
                                                                                                    start_R) {};

    bool calculate() {
        calculateExpression();
        return op1 <= op2;

    }
};

class NotEqual : public Condition {
public:
    NotEqual(DataBase *data, vector<string> lexC,  int start_L, int start_R) : Condition(data, lexC, start_L,
                                                                                                  start_R) {};

    bool calculate() {
        calculateExpression();
        return op1 != op2;

    }
};
class EqualsEquals : public Condition {
public:
    EqualsEquals(DataBase *data, vector<string> lexC, int start_L, int start_R) : Condition(data, lexC, start_L,
                                                                                                   start_R) {};

    bool calculate() {
        calculateExpression();
        return op1 == op2;
    }
};

#endif //PROJECTUPDATED_CONDITION_H
