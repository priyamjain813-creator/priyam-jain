#include <iostream>
using namespace std;

class Student {
public:
    int rollNo;
    char name[30];
    float marks;

    void getData() {
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void displayData() {
        cout << "\nRoll No: " << rollNo;
        cout << "\nName: " << name;
        cout << "\nMarks: " << marks;
        cout << "\n-----------------------";
    }
};

int main() {
    Student s[10];   

    for (int i = 0; i < 10; i++) {
        cout << "\nEnter details of Student " << i + 1 << endl;
        s[i].getData();
    }

    cout << "\n\n--- Student Records ---";

    for (int i = 0; i < 10; i++) {
        s[i].displayData();
    }

    return 0;
}
