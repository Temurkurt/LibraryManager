#include <iostream>
#include <cstring>
using namespace std;
#include "Book.h"
#include "User.h"

int main() {
    Book book1(1, "The Lord of the Rings", "J. R. R. Tolkien", "George Allen & Unwin", 1178);
    book1.printInfo();

    User user1("demir", "123456");
    user1.printInfo();
    return 0;


}
