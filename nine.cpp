#include <iostream>
using namespace std;

class SwapNumbers {
private:
    int a, b;

public:
    void getData() {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    void swapData() {
        int temp;
        temp = a;
        a = b;
        b = temp;
    }

    void display() {
        cout << "After swapping:" << endl;
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};

int main() {
    SwapNumbers obj;

    obj.getData();
    obj.swapData();
    obj.display();

    return 0;
}

