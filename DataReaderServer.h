//
// Created by davidgoldberg on 12/24/18.
//
#
#ifndef PROJECTUPDATED_DATAREADERSERVER_H
#define PROJECTUPDATED_DATAREADERSERVER_H

#include <stdio.h>
#include <list>
using namespace std;

class DataReaderServer {
    list<int> socketList;
public:
    void openSocket(int port, int hz);
    void read(int sConnect);
    void closeSockets();
    list<string> split(string &s, const char &c);
};


#endif //PROJECTUPDATED_DATAREADERSERVER_H
