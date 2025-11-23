program:
#include <iostream>
using namespace std;
class Base {
public:
    virtual void display() {   // Virtual function
        cout << "Display from Base class" << endl;
    }
};
class Derived : public Base {
public:
    void display() override {  // Override base class function
        cout << "Display from Derived class" << endl;
    }
};
int main() {
    Base* basePtr;
    Derived d;
    basePtr = &d;
    basePtr->display();

    return 0;
}
output:
Display from Derived class
