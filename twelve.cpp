#include <iostream>
using namespace std;

class Palindrome {
private:
    int num;

public:
    void getNumber() {
        cout << "Enter a number: ";
        cin >> num;
    }

    // Inline member function
    inline void checkPalindrome() {
        int temp = num, rev = 0, digit;

        while (temp > 0) {
            digit = temp % 10;
            rev = rev * 10 + digit;
            temp = temp / 10;
        }

        if (rev == num)
            cout << num << " is a Palindrome number." << endl;
        else
            cout << num << " is NOT a Palindrome number." << endl;
    }
};

int main() {
    Palindrome obj;

    obj.checkPalindrome();
    obj.getNumber();

    return 0;
}
