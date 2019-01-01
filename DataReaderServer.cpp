//
// Created by davidgoldberg on 12/24/18.
//
#include <unistd.h>
#include <stdio.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <string.h>
#include <c++/5/iostream>
#include "DataReaderServer.h"
#include "Data.h

using namespace std;

/**
 * This function opens a socket -> initializing -> binding -> listening -> accepting a client -> reading
 * @param port
 * @param hz
 */
void DataReaderServer::openSocket(int port, int hz) {
    cout << "<< opening socket for server >>" << endl;
    // creating a socket - AF_INET (IPv4 protocol), SOCK_STREAM: TCP, Internet Protocol(IP) which is 0
    int server = socket(AF_INET, SOCK_STREAM, 0); // main socket
    if (server < 0) {
        cout << "Error! Cannot open socket" << endl;
        exit(1);
    }
    struct sockaddr_in address;

    this->socketList.push_back(server);

    // initializing structure of socket
    bzero((char *) &address, sizeof(address));

    address.sin_family = AF_INET; // IPv4 protocol
    address.sin_port = htons(port); // inserts the port
    address.sin_addr.s_addr = INADDR_ANY; // wait for IP to come

    // binding the socket to the SOCKADDR_IN structure containing the IP and port
    int checkBinding = bind(server, (struct sockaddr *) &address, sizeof(address));

    // if binding failed
    if (checkBinding < 0) {
        cout << "Error! Cannot bind" << endl;
        exit(1);
    }
    // listening for incoming connection using main socket
    listen(server, 1); // server - the socket to listen on; 1 - max number of connection ==> one client

    // accepting a client
    int addressLen = sizeof(address);
    int sConnect = accept(server, (struct sockaddr *) &address, (socklen_t *) &addressLen); // the new socket

    this->socketList.push_back(sConnect);

    if (sConnect < 0) {
        cout << "Error! Cannot accept" << endl;
        exit(1);
    } else
        cout << "<< connected >>" << endl;

    while (true) {
        string data;
        char buffer[1024];
        int numOfBytesToRead = recv(sConnect, buffer, sizeof(buffer), 0);
        if (numOfBytesToRead > 0) {
            for (int i = 0; i < numOfBytesToRead; i++) { // start reading
                if (buffer[i] == '\n') {
                    if (data.length() > 0) {
                        cout << "receiving new data:" << endl;
                        // separate values by ','
                        list<string> val = split(data, ',');
                        for (int i = 0; i < val.length(); ++i) {



//                            if (val[i].empty()) continue;
//                            string nameSymbol = [i];
//                            Data *symbolTBL = symbolTBL->getInstance();
//                            symbolTBL->addToSymbolTable(nameSymbol,)
//                            std::stod(valuesVec[i]), symbolName);



                        } data = "";
                    }
                } else data += buffer[i];
            }
        } else {
            std::cout << "Socket closed" << std::endl;
            break;
        }
    }
}

void DataReaderServer::closeSockets() {
    for (int n : this->socketList)
        close(n);
}

/**
 * This function splits a string by char and return list of string
 * @param s string
 * @param c char
 * @return list of string
 */
list<string> DataReaderServer::split(string &s, const char &c) {
    string buff = "";
    list<string> lst;
    for (auto n : s) {
        if (n != c)
            buff += n;
        else if (n == c && buff != "") {
            lst.push_back(buff);
            buff = "";
        }
    }
    if (buff != "")
        lst.push_back(buff);
    return lst;
}