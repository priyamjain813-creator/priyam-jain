#include <iostream>
using namespace std;

class ElectricityBill {
private:
    int units;
    float bill, discount, finalBill;

public:
    void getData() {
        cout << "Enter number of units consumed: ";
        cin >> units;
    }

    void calculateBill() {
        
        if (units <= 100)
            bill = units * 1.50;
        else if (units <= 200)
            bill = (100 * 1.50) + (units - 100) * 2.50;
        else
            bill = (100 * 1.50) + (100 * 2.50) + (units - 200) * 4.00;
    }

    void applyDiscount() {
        discount = bill * 0.02;   
        finalBill = bill - discount;
    }

    void display() {
        cout << "\nElectricity Bill Details" << endl;
        cout << "------------------------" << endl;
        cout << "Units Consumed   : " << units << endl;
        cout << "Total Bill       : Rs. " << bill << endl;
        cout << "Discount (2%)    : Rs. " << discount << endl;
        cout << "Final Bill Amount: Rs. " << finalBill << endl;
    }
};

int main() {
    ElectricityBill obj;

    obj.getData();
    obj.calculateBill();
    obj.applyDiscount();
    obj.display();

    return 0;
}

