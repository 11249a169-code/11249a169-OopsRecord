program:
#include <iostream>
using namespace std;

class Employee {
private:
    int id;
    static int count;

public:
    Employee(int empId) {
        id = empId;
        count++;    
    }

    void display() {
        cout << "Employee ID: " << id << endl;
    }

    static void showCount() {  
        cout << "Total number of employees: " << count << endl;
    }
};
int Employee::count = 0;

int main() {
    Employee e1(101);
    Employee e2(102);
    Employee e3(103);

    e1.display();
    e2.display();
    e3.display();

    Employee::showCount();  

    return 0;
}
output:
Employee ID: 101
Employee ID: 102
Employee ID: 103
Total number of employees: 3
