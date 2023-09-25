//
// Created by demir on 23/09/2023.
//
#ifndef LIBRARYMANAGER_BOOK_H
#define LIBRARYMANAGER_BOOK_H
#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

class Book {
private:
    Book(Book *pBook);

    int id;
    char name[50]{};
    char author[50]{};
    char publisher[50]{};
    int page;

    vector <Book> books;
    vector <string> bookNames;

public:
    Book();
    Book(int id, const char *name, const char *author, const char *publisher, int page);

    void setID(int id);
    int getID();
    void setName(const char *name);
    const char *getName();
    void setAuthor(const char *author);
    const char *getAuthor();
    void setPublisher(const char *publisher);
    const char *getPublisher();
    void setPage(int page);
    int getPage();

    void printInfo();
    void addBook(Book *addedBook);
    void addBook(string addedBook);
    void deleteBook(Book* deletedBook);
    void deleteBook(string deletedBook);

};


#endif //LIBRARYMANAGER_BOOK_H
