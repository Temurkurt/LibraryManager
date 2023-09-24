//
// Created by demir on 23/09/2023.
//

#include "Book.h"
#include <iostream>
#include <cstring>
using namespace std;

Book::Book(int id, const char *name, const char *author, const char *publisher, int page) {
    this->id = id;
    strcpy(this->name, name);
    strcpy(this->author, author);
    strcpy(this->publisher, publisher);
    this->page = page;
}

void Book::printInfo() {
    cout << "Book ID: " << this->id << endl;
    cout << "Book Name: " << this->name << endl;
    cout << "Book Author: " << this->author << endl;
    cout << "Book Publisher: " << this->publisher << endl;
    cout << "Book Page: " << this->page << endl;
}

Book::Book() {
}
