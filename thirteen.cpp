#include <iostream>
using namespace std;

class PrintNumbers {
private:
    int n;

public:
    void getData() {
        cout << "Enter the value of n: ";
        cin >> n;
    }

    void print() {
        cout << "Numbers from 1 to " << n << " are:\n";
        for (int i = 1; i <= n; i++) {
            cout << i << " ";
        }
        cout << endl;
    }
};

int main() {
    PrintNumbers obj;

    obj.getData();
    obj.print();

    return 0;
}
