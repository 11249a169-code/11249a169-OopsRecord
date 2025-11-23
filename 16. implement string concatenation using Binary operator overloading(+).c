program:
#include <iostream>
using namespace std>
#include <cstring>

class MyString {
private:
    char str[100];

public:
    MyString(const char* s = "") {
        strcpy(str, s);
    }

    void display() {
        cout << str << endl;
    }
    MyString operator+(MyString s) {
        MyString temp;
        strcpy(temp.str, str);     
        strcat(temp.str, s.str);     
        return temp;
    }
};

int main() {
    MyString s1("Hello ");
    MyString s2("World!");

    cout << "First String: ";
    s1.display();

    cout << "Second String: ";
    s2.display();

    MyString s3 = s1 + s2;  
    cout << "Concatenated String: ";
    s3.display();

    return 0;
}
output:
First String: Hello 
Second String: World!
Concatenated String: Hello World!
