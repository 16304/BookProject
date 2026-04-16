#include <iostream>
#include "book.h"
using namespace std;

int main()

//Book Project - C++ Library System
//Created for assignment submission by: sam

{
    Book library[5];

    library[0].setBookDetails("Salt, Fat, Acid, Heat", "Nosrat", "201", true);
    library[1].setBookDetails("Kitchen Confidential", "Bourdain", "202", true);
    library[2].setBookDetails("The Professional Chef", "CIA", "203", true);
    library[3].setBookDetails("On Food and Cooking", "McGee", "204", true);
    library[4].setBookDetails("The Flavor Bible", "Page", "205", true);

    while (true) {
        cout << "\n--- Library Menu ---\n";
        cout << "1. Borrow Book\n";
        cout << "2. Return Book\n";
        cout << "3. View All Books\n";
        cout << "0. Exit\n";
        cout << "Choose an option: ";

        int choice;
        cin >> choice;

        if (choice == 0) {
            cout << "Goodbye!" << endl;
            break;
        }

        string inputISBN;
        bool found = false;

        if (choice == 1) {
            cout << "Enter ISBN to borrow: ";
            cin >> inputISBN;

            for (int i = 0; i < 5; i++) {
                if (library[i].getISBN() == inputISBN) {
                    found = true;
                    cout << "Borrowing: " << library[i].getTitle() << endl;
                    library[i].borrowBook();
                    break;
                }
            }
        }

        else if (choice == 2) {
            cout << "Enter ISBN to return: ";
            cin >> inputISBN;

            for (int i = 0; i < 5; i++) {
                if (library[i].getISBN() == inputISBN) {
                    found = true;
                    cout << "Returning: " << library[i].getTitle() << endl;
                    library[i].returnBook();
                    break;
                }
            }
        }

        else if (choice == 3) {
            cout << "\nLibrary Books:\n";
            for (int i = 0; i < 5; i++) {
                cout << library[i].getTitle()
                     << " (ISBN: " << library[i].getISBN() << ")\n";
            }
        }

        else {
            cout << "Invalid option!" << endl;
            continue;
        }

        if (!found && (choice == 1 || choice == 2)) {
            cout << "Book not found!" << endl;
        }
        cout << "Invalid choice. Please try again.\n";
    }

    return 0;
}