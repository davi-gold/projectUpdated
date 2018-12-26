//
// Created by davidgoldberg on 12/23/18.
//

#include "CommandExpression.h"
#include <stdio.h>
#include <map>
#include <iostream>
#include "Data.h"

using namespace std;

// private constructor
Data::Data() {
// initialize all maps

    // initializes commands map
    this->mapCommands.insert(pair<string, CommandExpression>("OpenDataServer", OpenDataServerCommand * openServer);
    this->mapCommands.insert(pair<string, CommandExpression>("connect", ConnectCommand * connectCommand);
    this->mapCommands.insert(pair<string, CommandExpression>("==", EqualsEquals * equalsEquals);
    this->mapCommands.insert(pair<string, CommandExpression>("print", Print * print);
    this->mapCommands.insert(pair<string, CommandExpression>("var", Var * var);

    string path[23] = {
            "/instrumentation/airspeed-indicator/indicated-speed-kt",
            "/instrumentation/altimeter/indicated-altitude-ft",
            "/instrumentation/altimeter/pressure-alt-ft",
            "/instrumentation/attitude-indicator/indicated-pitch-deg",
            "/instrumentation/attitude-indicator/indicated-roll-deg",
            "/instrumentation/attitude-indicator/internal-pitch-deg",
            "/instrumentation/attitude-indicator/internal-roll-deg",
            "/instrumentation/encoder/indicated-altitude-ft",
            "/instrumentation/encoder/pressure-alt-ft",
            "/instrumentation/gps/indicated-altitude-ft",
            "/instrumentation/gps/indicated-ground-speed-kt",
            "/instrumentation/gps/indicated-vertical-speed",
            "/instrumentation/heading-indicator/indicated-heading-deg",
            "/instrumentation/magnetic-compass/indicated-heading-deg",
            "/instrumentation/slip-skid-ball/indicated-slip-skid",
            "/instrumentation/turn-indicator/indicated-turn-rate",
            "/instrumentation/vertical-speed-indicator/indicated-speed-fpm",
            "/controls/flight/aileron",
            "/controls/flight/elevator",
            "/controls/flight/rudder",
            "/controls/flight/flaps",
            "/controls/engines/engine/throttle",
            "/engines/engine/rpm"
    };

    // initializes symbol table
    for (int i = 0; i < 23; i++)
        this->symbolTable.insert(pair<string, string>(path[i], 0));


    static Data::Data *getInstance() {
        if (!instance)
            instance = new Data();
        return instance;
    }

    map<string, double> Data::getSymbolTable() {
        return this->symbolTable;
    }

    map<string, string> Data::getBindMap() {
        return this->bindMap;
    }

    map<string, string> Data::getMapCommands() {
        return this->mapCommands;
    }

    void Data::addToSymbolTable(string first, double sec) {
        map<string, double>::iterator iter;
        // find the element
        iter = this.symbolTable.find(first);
        // check if element exists in map or not
        if (iter != this.symbolTable.end()) {
            // element with key is found
            cout << "The element is already exist --> updating value..." << endl;
            this.symbolTable.at(first) = sec;
        }
        else
            // insert the value to the map
            this.symbolTable.insert(pair<string, double>(first, sec));
    }


    void Data::addToBindMap(string first, string sec) {
        map<string, string>::iterator iter;
        // find the element
        iter = this.bindMap.find(first);
        // check if element exists in map or not
        if (iter != this.bindMap.end()) {
            // element with key is found
            cout << "The element is already exist --> updating value..." << endl;
            this.bindMap.at(first) = sec;
        }
        else
            // insert the value to the map
            this.bindMap.insert(pair<string, string>(first, sec));
    }

    string[] Data::getPath(){
        return this->pathpath;
    }
};