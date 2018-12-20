//
// Created by schwe on 20/12/2018.
//

#include "ShuntYard.h"

//our constructor receives a lexer and builds 2 lists
ShuntYard::ShuntYard(list<string> lexerOutput) {
    //generate new members
    list<string> operatorList;
    list<string> outputList;

    map <string, string> symbolTable;
         //cdefine the operators map
       symbolTable = {{"openDataServer", openServerCommand()},
                      {"connect",        connectCommand()},
                      {"var",            varCommand()}};
    //index
    int i = 0;
    for(std::list<std::string>::const_iterator i = my_list.begin(); i != my_list.end(); ++i)
    {
        printf("%s\n", i->c_str());
    }

};


//destructor
ShuntYard::~ShuntYard() {

}
