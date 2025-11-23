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
    Number operator-() {
        Number temp;
        temp.value = -value;
        return temp;
    }
};

int main() {
    Number n1(10);
    cout << "Original number: ";
    n1.display();

    Number n2 = -n1;
    cout << "After applying unary minus: ";
    n2.display();

    return 0;
}
output:
Original number: 10
After applying unary minus: -10
