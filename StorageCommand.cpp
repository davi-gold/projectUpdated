//
// Created by schwe on 30/12/2018.
//


#include "StorageCommand.h"

void StorageCommand::doCommand(int index, vector <string> lex) {
    if (index > lex.size() - 3) {
        throw invalid_argument("Unable to open data server, invalid Inputs");
    }

    vector <double> syPort = ShuntingYard(data, lex, index + 1);

    if(!lex[syPort[1] + 1].compare(",")){
        syPort[1]++;
    }

    if (syPort[1] > lex.size() - 2) {
        throw invalid_argument("Invalid argument to open data server");
    }

    vector <double> sySec = ShuntingYard(data, lex, syPort[1] + 1);

    struct openDataServerParams *params;
    params = new openDataServerParams();
    params->port = (int)syPort[0];
    params->NumToSec = (int)sySec[0];
    params->data = data;
    pthread_t trid2;
    pthread_create(&trid2, nullptr, threadOpenDataserver, params);
    while (!params->data->isConect()){}
}


