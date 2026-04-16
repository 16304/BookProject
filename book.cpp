#include <iostream>
#include "book.h"
using namespace std;

// Set book details
void Book::setBookDetails(string t, string a, string i, bool avail) {
    title = t;
    author = a;
    isbn = i;
    available = avail;
}

// Borrow a book
void Book::borrowBook() {
    if (available) {
        cout << "Book borrowed!" << endl;
        available = false;
    } else {
        cout << "Book is already borrowed!" << endl;
    }
}

// Return a book
void Book::returnBook() {
    if (!available) {
        cout << "Book returned!" << endl;
        available = true;
    } else {
        cout << "Book was not borrowed!" << endl;
    }
}

// Get ISBN
string Book::getISBN() const {
    return isbn;
}

// Get title
string Book::getTitle() const {
    return title;
}