progarm:
#include <iostream>
using namespace std;
template <typename T>
T getMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    int x = 10, y = 20;
    double p = 12.5, q = 9.8;
    char c1 = 'A', c2 = 'Z';

    cout << "Max of " << x << " and " << y << " is: " << getMax(x, y) << endl;
    cout << "Max of " << p << " and " << q << " is: " << getMax(p, q) << endl;
    cout << "Max of " << c1 << " and " << c2 << " is: " << getMax(c1, c2) << endl;

    return 0;
}
output:
Max of 10 and 20 is: 20
Max of 12.5 and 9.8 is: 12.5
Max of A and Z is: Z
