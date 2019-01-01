//
// Created by schwe on 31/12/2018.
//

#ifndef PROJECTUPDATED_SHUNTINGYARD_H
#define PROJECTUPDATED_SHUNTINGYARD_H


#include <string>
#include <vector>
#include "DataBase.h"
#include "Expression.h"
#include <bits/stdc++.h>

using namespace std;

vector<double> ShuntingYard(DataBase* d, vector <string> lexIn, int i);

double applyOp(double a, double b, char op);

double priority(char op);

double evaluate(const string &tokens);




#endif //PROJECTUPDATED_SHUNTINGYARD_H
