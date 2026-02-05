#include <iostream>
#include <string>
using namespace std;

class Library {
private:
    int bookId;
    string bookName;
    string authorName;
    int available;   // 1 = Available, 0 = Not Available

public:
    void getBookDetails() {
        cout << "Enter Book ID: ";
        cin >> bookId;
        cin.ignore();

        cout << "Enter Book Name: ";
        getline(cin, bookName);

        cout << "Enter Author Name: ";
        getline(cin, authorName);

        cout << "Enter Availability (1 = Available, 0 = Not Available): ";
        cin >> available;
    }

    void displayBookDetails() {
        cout << "\n----- Book Details -----" << endl;
        cout << "Book ID     : " << bookId << endl;
        cout << "Book Name   : " << bookName << endl;
        cout << "Author Name : " << authorName << endl;

        if (available == 1)
            cout << "Status      : Available" << endl;
        else
            cout << "Status      : Not Available" << endl;
    }

    void issueBook() {
        if (available == 1) {
            cout << "\nBook has been issued successfully!" << endl;
            available = 0;   // After issuing, mark as not available
        } else {
            cout << "\nSorry! Book is not available for issue." << endl;
        }
    }
};

int main() {
    Library obj;

    obj.getBookDetails();
    obj.displayBookDetails();

    char choice;
    cout << "\nDo you want to issue this book? (y/n): ";
    cin >> choice;

    if (choice == 'y' || choice == 'Y') {
        obj.issueBook();
    }

    return 0;
}
