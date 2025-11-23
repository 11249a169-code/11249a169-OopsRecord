program:
#include <iostream>
using namespace std;

inline int square(int n) {
    return n * n;
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Square of " << num << " is: " << square(num) << endl;

    return 0;
}

output:
Enter a number: 5
Square of 5 is: 25
