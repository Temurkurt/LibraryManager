//
// Created by demir on 23/09/2023.
//

#include "Book.h"
#include <iostream>
#include <cstring>
#include <vector>
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

void Book::addBook(Book *addedBook) {
    this->books.push_back(*addedBook);
}

void Book::deleteBook(Book *deletedBook) {
    for(unsigned int i = 0; i < books.size(); i++)
    {
        if(deletedBook == books[i])
            books.erase(books.begin()+i);
    }
}

void Book::addBook(string addedBook) {
    this->bookNames.push_back(addedBook);
}

void Book::deleteBook(string deletedBook) {
    for(unsigned int i = 0; i < bookNames.size(); i++)
    {
        if(deletedBook == bookNames[i])
            bookNames.erase(bookNames.begin()+i);
    }
}

void Book::setID(int id) {
    this->id = id;
}

int Book::getID() {
    return this->id;
}

void Book::setName(const char *name) {
    strcpy(this->name, name);
}

const char *Book::getName() {
    return this->name;
}

void Book::setAuthor(const char *author) {
    strcpy(this->author, author);
}

const char *Book::getAuthor() {
    return this->author;
}

void Book::setPublisher(const char *publisher) {
    strcpy(this->publisher, publisher);
}

const char *Book::getPublisher() {
    return this->publisher;
}

void Book::setPage(int page) {
    this->page = page;
}

int Book::getPage() {
    return this->page;
}

Book::Book(Book *pBook) {

}
