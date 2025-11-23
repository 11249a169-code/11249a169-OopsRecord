program:
#include <iostream>
using namespace std;
class Demo {
private:
    int data;
public:
    Demo(int d) {
        data = d;
        cout << "Constructor called. Data = " << data << endl;
    }
    void display() {
        cout << "Data: " << data << endl;
    }
    ~Demo() {
        cout << "Destructor called. Data = " << data << endl;
    }
};
int main() {
    Demo* ptr = new Demo(100);

    ptr->display();
    delete ptr;
    Demo* arr = new Demo[3] {Demo(1), Demo(2), Demo(3)};

    for (int i = 0; i < 3; i++) {
        arr[i].display();
    }
    delete[] arr;

    return 0;
}
output:
Constructor called. Data = 100
Data: 100
Destructor called. Data = 100
Constructor called. Data = 1
Constructor called. Data = 2
Constructor called. Data = 3
Data: 1
Data: 2
Data: 3
Destructor called. Data = 1
Destructor called. Data = 2
Destructor called. Data = 3
