//
// Created by schwe on 31/12/2018.
//

#include "SleepCommand.h"

void SleepCommand:: doCommand (int index, vector <string> lex) {
    if (index>=lex.size()-1){
        throw invalid_argument("Not sleeping properly");
    }

    int time = (int)(ShuntingYard(data, lex,index+1))[0];
    this_thread::sleep_for(chrono::milliseconds(time));
}