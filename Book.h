//
// Created by demir on 23/09/2023.
//

#ifndef LIBRARYMANAGER_BOOK_H
#define LIBRARYMANAGER_BOOK_H


class Book {
private:
    int id;
    char name[50]{};
    char author[50]{};
    char publisher[50]{};
    int page;

public:
    Book();
    Book(int id, const char *name, const char *author, const char *publisher, int page);

    void printInfo();
};


#endif //LIBRARYMANAGER_BOOK_H
