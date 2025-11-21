progarm:

#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    string name;
    int marks;
    void getDetails() {
        cout << "Enter Roll Number: ";
        cin >> roll;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void displayDetails() {
        cout << "\nRoll Number : " << roll;
        cout << "\nName        : " << name;
        cout << "\nMarks       : " << marks << endl;
    }
};

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    Student s[n];   // Array of objects

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of student " << i + 1 << ":\n";
        s[i].getDetails();
    }

    cout << "\n----- STUDENT INFORMATION -----\n";
    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << " Details:\n";
        s[i].displayDetails();
    }

    return 0;
}


output:

Enter number of students: 3

Enter details of student 1:
Enter Roll Number: 1
Enter Name: Arjun
Enter Marks: 89

Enter details of student 2:
Enter Roll Number: 2
Enter Name: Meera
Enter Marks: 76

Enter details of student 3:
Enter Roll Number: 3
Enter Name: Ravi
Enter Marks: 92


----- STUDENT INFORMATION -----

Student 1 Details:
Roll Number : 1
Name        : Arjun
Marks       : 89

Student 2 Details:
Roll Number : 2
Name        : Meera
Marks       : 76

Student 3 Details:
Roll Number : 3
Name        : Ravi
Marks       : 92
