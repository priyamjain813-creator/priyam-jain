#include <iostream>
using namespace std;

class Book {
public:
    string title;
    string author;
    bool available;

    // Constructor
    Book(string t, string a, bool av) {
        title = t;
        author = a;
        available = av;
    }

    void displayDetails() {
        cout << "Book Title: " << title << endl;
        cout << "Author: " << author << endl;
        if (available)
            cout << "Status: Available" << endl;
        else
            cout << "Status: Not Available" << endl;
    }

    void issueBook() {
        if (available) {
            cout << "Book issued successfully." << endl;
            available = false;
        } else {
            cout << "Sorry, book is not available." << endl;
        }
    }
};

int main() {
    Book b1("C++ Basics", "Bjarne", true);

    b1.displayDetails();
    cout << endl;

    b1.issueBook();
    cout << endl;

    b1.issueBook();  // Trying to issue again

    return 0;
}
