program:
#include <iostream>
using namespace std;
class Person {
protected:
    string name;
    int age;
public:
    void setPersonDetails(string n, int a) {
        name = n;
        age = a;
    }
    void displayPerson() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
class Student : public Person {
protected:
    int rollNo;
public:
    void setStudentDetails(string n, int a, int r) {
        setPersonDetails(n, a);
        rollNo = r;
    }

    void displayStudent() {
        displayPerson();
        cout << "Roll Number: " << rollNo << endl;
    }
};
class Exam : public Student {
private:
    float marks;

public:
    void setExamDetails(string n, int a, int r, float m) {
        setStudentDetails(n, a, r);
        marks = m;
    }

    void displayExamDetails() {
        displayStudent();
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Exam e1;
    e1.setExamDetails("Bob", 21, 102, 88.5);
    e1.displayExamDetails();

    return 0;
}
output:
Name: Bob
Age: 21
Roll Number: 102
Marks: 88.5
