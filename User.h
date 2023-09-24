//
// Created by demir on 23/09/2023.
//

#ifndef LIBRARYMANAGER_USER_H
#define LIBRARYMANAGER_USER_H
#include <iostream>
#include <cstring>
using namespace std;

class User {
private:
    string username;
    char password[50]{};

public:
    User();
    User(string username, const char *password);

    void printInfo();
};


#endif //LIBRARYMANAGER_USER_H
