program:
#include <iostream>
using namespace std;

class Demo {
private:
    int x;

public:
  
    Demo(int a) {
        x = a;
    }

    void show() {
        cout << "Value of x = " << x << endl;
    }
};

void displayObject(Demo obj) {
    cout << "Inside function: ";
    obj.show();
}

int main() {
    Demo d1(50);   

    cout << "In main: ";
    d1.show();
    displayObject(d1);

    return 0;
}
ouput:
In main: Value of x = 50
Inside function: Value of x = 50
