//
// Created by David Goldberg on 2018-12-23.
//

#include <thread>
#include "OpenServerCommand.h"
#include "DataReaderServer.h"
using namespace std;

OpenServerCommand::OpenServerCommand(int p, int hz){
    this->port = p;
    this->Hz = hz;
}

int OpenServerCommand::execute() {
    // open a new thread which in turn opens a new server.
    //(the server then listens to/for a specific (given) port).
    thread serverThread([] (int port, int Hz)){
        DataReaderServer server(port, Hz);
        // send the port and hz to the socket
        server.openSocket();
    } ,port, Hz);

    return 0;
}
