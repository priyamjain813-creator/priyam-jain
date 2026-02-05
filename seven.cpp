#include <iostream>
using namespace std;

class Prime {
private:
    int num;

public:
    void getNumber() {
        cout << "Enter a number: ";
        cin >> num;
    }

    void checkPrime() {
        if (num <= 1) {
            cout << num << " is NOT a Prime number." << endl;
            return;
        }

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                cout << num << " is NOT a Prime number." << endl;
                return;
            }
        }

        cout << num << " is a Prime number." << endl;
    }
};

int main() {
    Prime p;
    p.getNumber();
    p.checkPrime();

    return 0;
}
