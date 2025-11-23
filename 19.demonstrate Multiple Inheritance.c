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
class Exam {
protected:
    float marks;

public:
    void setMarks(float m) {
        marks = m;
    }

    void displayMarks() {
        cout << "Marks: " << marks << endl;
    }
};
class Student : public Person, public Exam {
private:
    int rollNo;

public:
    void setStudentDetails(string n, int a, int r, float m) {
        setPersonDetails(n, a); 
        rollNo = r;
        setMarks(m);            
    }

    void displayStudentDetails() {
        displayPerson();    
        cout << "Roll Number: " << rollNo << endl;
        displayMarks();     
    }
};

int main() {
    Student s1;
    s1.setStudentDetails("Alice", 20, 101, 92.5);
    s1.displayStudentDetails();

    return 0;
}
output:
Name: Alice
Age: 20
Roll Number: 101
Marks: 92.5
