progarm:

#include <iostream>
using namespace std;

class ElectricityBill {
public:
    int consumerNo;
    string consumerName;
    int units;
    float amount;
    void getDetails() {
        cout << "Enter Consumer Number: ";
        cin >> consumerNo;

        cout << "Enter Consumer Name: ";
        cin >> consumerName;

        cout << "Enter Units Consumed: ";
        cin >> units;
        if (units <= 100)
            amount = units * 1.50;
        else if (units <= 200)
            amount = (100 * 1.50) + ((units - 100) * 2.00);
        else
            amount = (100 * 1.50) + (100 * 2.00) + ((units - 200) * 3.00);
    }

    void displayBill() {
        cout << "\n----- ELECTRICITY BILL -----\n";
        cout << "Consumer Number : " << consumerNo << endl;
        cout << "Consumer Name   : " << consumerName << endl;
        cout << "Units Consumed  : " << units << endl;
        cout << "Total Amount    : Rs. " << amount << endl;
    }
};

int main() {
    ElectricityBill e;

    e.getDetails();     // Input
    e.displayBill();    // Output

    return 0;
}
output:
Enter Consumer Number: 2025
Enter Consumer Name: Ravi
Enter Units Consumed: 250

----- ELECTRICITY BILL -----
Consumer Number : 2025
Consumer Name   : Ravi
Units Consumed  : 250
Total Amount    : Rs. 550
