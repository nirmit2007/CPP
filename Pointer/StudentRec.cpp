/*
Structure with Pointer (Student Record): Create structure (name, roll, marks). Take input of 3
students using pointer and display details using -> operator.
#include<iostream>
*/
#include<iostream>
using namespace std;

struct Student
{
    char name[20];
    int rollno;
    float marks;
}s1,s2,s3;

int main()
{
    Student *p1 = &s1;
    Student *p2 = &s2;
    Student *p3 = &s3;

    cout << "Enter name, roll number and marks of student 1: ";
    cin >> p1->name >> p1->rollno >> p1->marks;
    cout << "Enter name, roll number and marks of student 2: ";
    cin >> p2->name >> p2->rollno >> p2->marks;
    cout << "Enter name, roll number and marks of student 3: ";
    cin >> p3->name >> p3->rollno >> p3->marks;

    cout << "\nDetails of student 1: " << p1->name << "-" << p1->rollno << "-" << p1->marks;
    cout << "\nDetails of student 2: " << p2->name << "-" << p2->rollno << "-" << p2->marks;
    cout << "\nDetails of student 3: " << p3->name << "-" << p3->rollno << "-" << p3->marks;

    return 0;
}