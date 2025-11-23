progarm:
#include <iostream>
using namespace std;

int main() {
    int numerator, denominator;
    cout << "Enter numerator: ";
    cin >> numerator;
    cout << "Enter denominator: ";
    cin >> denominator;

    try {
        if (denominator == 0) {
            throw denominator;  
        }
        cout << "Result: " << numerator / denominator << endl;
    }
    catch (int e) {
        cout << "Exception caught! Division by zero is not allowed." << endl;
    }

    cout << "Program continues..." << endl;

    return 0;
}
output:
Enter numerator: 10
Enter denominator: 2
Result: 5
Program continues...
