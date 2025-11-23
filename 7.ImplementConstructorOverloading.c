program:

#include <iostream>
using namespace std;

class Demo {
    int x, y;

public:
    
    Demo() {
        x = 0;
        y = 0;
        cout << "Default Constructor Called" << endl;
    }
    Demo(int a) {
        x = a;
        y = 0;
        cout << "One-parameter Constructor Called" << endl;
    }

    
    Demo(int a, int b) {
        x = a;
        y = b;
        cout << "Two-parameter Constructor Called" << endl;
    }

    void display() {
        cout << "x = " << x << ", y = " << y << endl;
    }
};

int main() {
    Demo d1;        
    Demo d2(10);    
    Demo d3(10, 20); 

    d1.display();
    d2.display();
    d3.display();

    return 0;
}

output:
Default Constructor Called
One-parameter Constructor Called
Two-parameter Constructor Called
x = 0, y = 0
x = 10, y = 0
x = 10, y = 20
