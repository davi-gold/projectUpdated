//
// Created by David Goldberg on 2018-12-17.
//

using namespace std;

#include <iostream>
#include <stdio.h>
#include <map>
#include <list>
#include <fstream>
#include "Command.h"
#include "Translator.h"

#define EQUALS '='
#define ENDOFSTRING '\0'
#define PLUS '+'
#define MINUS '-'
#define MULT '*'
#define DIV '/'
#define PATHSIGN '"'


/**
 * This is a constructor
 * @param symbolTable
 */
Translator::Translator(map<string, Command> symbolTable) {
    this->symbolTable = symbolTable;
}


/**
 * This function breaks the text into words (expressions) in a list of strings
 * @param file
 * @return list of expression
 */

list<string> Translator::lexer(string str) {
    string strTmp; // temporary string for holding the chars
    list<string> strLst; // the return value
    int i = 0; // index
    // as long as this is not the end of the string
    while (str[i] != ENDOFSTRING) {
        // as long as the current char is not whitespace or end of string
        while (isspace(str[i]) == 0 && str[i] != ENDOFSTRING) {
            strTmp.push_back(str[i]); // push the char to the word
            i++;
        }
        strLst.push_back(strTmp); // push the word to the list
        strTmp = "";
        if (isspace(str[i]) != 0)  // if the current char is a whitespace
            i++;
    }
    return strLst;
}


//
//void Translator::parser(list<string> strLst) {
//        map<string, Command> symbolTable;
//        // updating command map
//        symbolTable = {{"openDataServer", openServerCommand()},
//                       {"connect",        connectCommand()},
//                       {"var",            varCommand()}};
//
//        // for every string in list
//        iterator<string> iter;
//        for (int i = 0; i < strLst.size(); i++) {
//            // search for the command in the map
//            auto search = symbolTable.find(strLst.get(i));
//            // if the command is not found
//}