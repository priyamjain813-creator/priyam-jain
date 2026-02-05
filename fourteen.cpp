#include <iostream>
using namespace std;

class MedicalBill {
private:
    float consultationFee;
    float medicineCharges;
    float labCharges;
    float totalBill;

public:
    // Constructor
    MedicalBill() {
        cout << "Enter Consultation Fee: ";
        cin >> consultationFee;

        cout << "Enter Medicine Charges: ";
        cin >> medicineCharges;

        cout << "Enter Lab Test Charges: ";
        cin >> labCharges;

        totalBill = consultationFee + medicineCharges + labCharges;
    }

    void displayBill() {
        cout << "\n------ Medical Bill ------" << endl;
        cout << "Consultation Fee : Rs. " << consultationFee << endl;
        cout << "Medicine Charges : Rs. " << medicineCharges << endl;
        cout << "Lab Charges      : Rs. " << labCharges << endl;
        cout << "--------------------------" << endl;
        cout << "Total Medical Bill: Rs. " << totalBill << endl;
    }
};

int main() {
    // Object creation (constructor is called automatically)
    MedicalBill obj;

    obj.displayBill();

    return 0;
}
