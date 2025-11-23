program:
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a = 10, b = 200, c = 3000;

    cout << "Using setw:" << endl;
    cout << setw(5) << a << endl;
    cout << setw(5) << b << endl;
    cout << setw(5) << c << endl;

    double x = 12.34567;

    cout << "\nUsing setprecision and fixed:" << endl;
    cout << fixed << setprecision(2) << x << endl;

    cout << "\nUsing setfill:" << endl;
    cout << setfill('*') << setw(10) << a << endl;

    return 0;
}

output:
Using setw:
   10
  200
 3000

Using setprecision and fixed:
12.35

Using setfill:
*******10
