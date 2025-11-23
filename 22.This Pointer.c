program:
#include <iostream>
using namespace std;
class Demo {
private:
    int data;
public:
    void setData(int data) {
        this->data = data;
    }
    void display() {
        cout << "Data: " << data << endl;
    }
    Demo* getObject() {
        return this;
    }
};
int main() {
    Demo obj;
    obj.setData(50);
    obj.display();
    Demo* ptr = obj.getObject(); 
    cout << "Address of obj: " << &obj << endl;
    cout << "Address returned by getObject(): " << ptr << endl;

    return 0;
}
output:
Data: 50
Address of obj: 0x7ffee3b1b8a0
Address returned by getObject(): 0x7ffee3b1b8a0
