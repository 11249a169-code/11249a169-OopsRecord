aim:
To write a C++ program to create a class ‘Book’ with data members for title, author and price, and to print the book details using class and object:":
ALGORITHM:
Step 1: Start the program.
Step 2: Create a class Book with the following data members:
title
author
price
Step 3: Inside the class, define two member functions:
getDetails() – to input the book details
displayDetails() – to display the book details
Step 4: In the main() function, create an object of the class Book.
Step 5: Call the function getDetails() using the object to read the book details.
Step 6: Call the function displayDetails() using the object to print the details.
Step 7: Stop the program.
  program:
  #include <iostream>
using namespace std;
class Book {
public:
    string title;
    string author;
    int price;
    void getDetails() {
        cout << "Enter Book Title: ";
        cin >> title;
        cout << "Enter Author Name: ";
        cin >> author;
        cout << "Enter Price: ";
        cin >> price;
    }
    void displayDetails() {
        cout << "\n--- Book Details ---\n";
        cout << "Title  : " << title << endl;
        cout << "Author : " << author << endl;
        cout << "Price  : " << price << endl;
    }
};
int main() {
    Book b; 
    b.getDetails();
    b.displayDetails();  
    return 0;
}
output
enter Book Title: CppBasics
Enter Author Name: Bjarne
Enter Price: 450

--- Book Details ---
Title  : CppBasics
Author : Bjarne
Price  : 450
