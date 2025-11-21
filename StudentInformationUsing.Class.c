Aim:
To write a program that displays student information using the concepts of classes and objects

ALGORITHM:

Start the program.
Create a structure named Student with data members:
name
roll
grade
Create a function display() that takes a structure variable as argument and prints student details.
In the main() function:
Declare a structure variable of type Student.
Assign values to the structure members.
Call the display() function and pass the structure variable.
End the program.

 C PROGRAM (Using struct as an object)
#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    char grade;
};
void display(struct Student s) {
    printf("Student Information:\n");
    printf("Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll);
    printf("Grade: %c\n", s.grade);
}
int main() {
    struct Student s1;
    printf("Enter student name: ");
    scanf("%s", s1.name);
    printf("Enter roll number: ");
    scanf("%d", &s1.roll);
    printf("Enter grade: ");
    scanf(" %c", &s1.grade);
    display(s1);
    return 0;
}
SAMPLE OUTPUT:
Enter student name: Alice
Enter roll number: 101
Enter grade: A

Student Information:
Name: Alice
Roll Number: 101
Grade: A

RESULT:

The program successfully displays the student information by using a structure and a function that behaves like an object method. This demonstrates how object-oriented concepts such as data encapsulation can be simulated in C using structures.
