#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    string isbn;
    bool available;

public:
    // Set book details
    void setBookDetails(string t, string a, string i, bool avail);

    // Borrow and return
    void borrowBook();
    void returnBook();

    // Getters
    string getISBN() const;
    string getTitle() const;
};

#endif