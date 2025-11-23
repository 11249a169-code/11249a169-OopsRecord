program:
#include <iostream>
using namespace std;

class Math {
public:
    int add(int a, int b) {
        return a + b;
    }

    float add(float a, float b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Math m;

    cout << "Sum of two integers: " << m.add(5, 10) << endl;
    cout << "Sum of two floats: " << m.add(3.5f, 2.5f) << endl;
    cout << "Sum of three integers: " << m.add(2, 4, 6) << endl;

    return 0;
}

output:
Sum of two integers: 15
Sum of two floats: 6
Sum of three integers: 12
