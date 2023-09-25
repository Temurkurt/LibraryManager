//
// Created by demir on 23/09/2023.
//

#include "User.h"

void User::printInfo() {
    cout << "Username: " << this->username << endl;
    cout << "Password: " << this->password << endl;
}

User::User(string username, const char *password) {
    this->username = username;
    strcpy(this->password, password);
}

User::User() {

}


