program:
#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number() {
        value = 0;
    }

    Number(int v) {
        value = v;
    }

    void display() {
        cout << "Value: " << value << endl;
    }
    Number operator+(Number n) {
        Number temp;
        temp.value = value + n.value;
        return temp;
    }
};

int main() {
    Number n1(10), n2(20);

    cout << "First number: ";
    n1.display();

    cout << "Second number: ";
    n2.display();

    Number n3 = n1 + n2;  
    cout << "After adding: ";
    n3.display();

    return 0;
}
output:
First number: 10
Second number: 20
After adding: 30
