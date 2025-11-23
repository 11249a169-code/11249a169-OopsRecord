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
private:
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

int main() {
    Student s1;
    s1.setStudentDetails("Alice", 20, 101);
    s1.displayStudent();

    return 0;
}
output:
Name: Alice
Age: 20
Roll Number: 101
