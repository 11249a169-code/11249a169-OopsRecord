program:
#include <iostream>
using namespace std;

class Student {
private:
    int roll;
    static int count;   

public:
    Student(int r) {
        roll = r;
        count++;        
    }

    void show() {
        cout << "Roll Number: " << roll << endl;
    }

    static void showCount() {   
        cout << "Total Students: " << count << endl;
    }
};

int Student::count = 0;  

int main() {
    Student s1(101);
    Student s2(102);
    Student s3(103);

    s1.show();
    s2.show();
    s3.show();

    Student::showCount();  

    return 0;
}
output:
Roll Number: 101
Roll Number: 102
Roll Number: 103
Total Students: 3
