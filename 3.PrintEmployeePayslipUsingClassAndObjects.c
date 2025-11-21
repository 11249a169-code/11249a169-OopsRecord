


program:
#include <iostream>
using namespace std;
class Employee {
public:
    int empId;
    string name;
    float basic, hra, da, gross;
    void getDetails() {
        cout << "Enter Employee ID: ";
        cin >> empId;
        cout << "Enter Employee Name: ";
        cin >> name;

        cout << "Enter Basic Salary: ";
        cin >> basic;
        hra = basic * 0.20;   // 20% HRA
        da  = basic * 0.10;   // 10% DA
        gross = basic + hra + da;
    }
    void displayPayslip() {
        cout << "\n----- EMPLOYEE PAYSLIP -----\n";
        cout << "Employee ID     : " << empId << endl;
        cout << "Employee Name   : " << name << endl;
        cout << "Basic Salary    : " << basic << endl;
        cout << "HRA (20%)       : " << hra << endl;
        cout << "DA (10%)        : " << da << endl;
        cout << "Gross Salary    : " << gross << endl;
    }
};

int main() {
    Employee e;      // Creating object

    e.getDetails();       // Input
    e.displayPayslip();   // Output

    return 0;
}

output:
Enter Employee ID: 101
Enter Employee Name: Sam
Enter Basic Salary: 20000

----- EMPLOYEE PAYSLIP -----
Employee ID     : 101
Employee Name   : Sam
Basic Salary    : 20000
HRA (20%)       : 4000
DA (10%)        : 2000
Gross Salary    : 26000
