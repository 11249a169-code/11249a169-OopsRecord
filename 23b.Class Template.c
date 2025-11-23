progarm:
#include <iostream>
using namespace std;
template <typename T>
class Box {
private:
    T length;
    T width;
public:
    Box(T l, T w) {
        length = l;
        width = w;
    }
    T area() {
        return length * width;
    }
    void display() {
        cout << "Length: " << length << ", Width: " << width 
             << ", Area: " << area() << endl;
    }
};
int main() {
    Box<int> b1(5, 10);      
    Box<double> b2(3.5, 2.5); 
    b1.display();
    b2.display();
    return 0;
}
output:
Length: 5, Width: 10, Area: 50
Length: 3.5, Width: 2.5, Area: 8.75
