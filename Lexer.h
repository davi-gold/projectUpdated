//
// Created by schwe on 29/12/2018.
//

#ifndef PROJECTUPDATED_LEXER_H
#define PROJECTUPDATED_LEXER_H


#include <string>
#include <regex>
#include <list>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>
#include "FileLexer.h"
using namespace std;
vector<string> lexer(string s);



map<string, int> FileLexer(string filename) {

    int index = 0;
    string s;
    smatch m;
    map <string, int> xml;
    ifstream myfile(filename);
    if (myfile.is_open()) {
        while (getline(myfile, s)) {
            if (std::regex_search(s, m, regex ("<node>.*</node>"))) {
                s = m[0];
                s.erase(s.begin(), s.begin() + 6);
                s.erase(s.end() - 7, s.end());
                xml[s] = index++;
            }
        }
    }
    return xml;
}

#endif //PROJECTUPDATED_LEXER_H
