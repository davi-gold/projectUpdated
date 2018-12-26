//
// Created by davidgoldberg on 12/23/18.
//

#ifndef PROJECTUPDATED_DATA_H
#define PROJECTUPDATED_DATA_H
using namespace std;


#include <map>
#include "Command.h"
#include "CommandExpression.h"
// Singletone design pattern
class Data {
    // members declarations
    static Data *instance;
    string path[23];
    map<string,double> symbolTable;
    map<string,string> bindMap;
    map<string, CommandExpression> mapCommands;
    // private constructor
    Data();
public:
    // functions declarations
    static Data *getInstance;
    map<string,double> getSymbolTable();
    map<string,string> getBindMap();
    map<string, Command> getMapCommands();
    void addToSymbolTable(string first, double sec);
    void addToBindMap(string first, string sec);
    string[] getPath();
};

#endif //PROJECTUPDATED_DATA_H