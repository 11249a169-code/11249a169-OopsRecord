program:
#include <iostream>
using namespace std;

class Box {
private:
    int length;
    int width;

public:
    Box(int l, int w) {
        length = l;
        width = w;
    }
    friend int calculateArea(Box b);
};
int calculateArea(Box b) {
    return b.length * b.width;
}

int main() {
    Box b1(5, 10);

    cout << "Area of the box: " << calculateArea(b1) << endl;

    return 0;
}
output:
Area of the box: 50
