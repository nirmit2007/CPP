/*
Que 11. Write a C++ program to demonstrate Hybrid Inheritance using Virtual Inheritance. Create a
base class Person with a constructor. Derive two classes Student and Employee using virtual
inheritance. Create a class Intern that inherits from both Student and Employee. Show how
constructors are called and avoid duplicate Person objects.
*/
#include<iostream>
using namespace std;

class Person
{
    public:
        Person()
        {
            cout << "\nPerson Constructor Called";
        }
};

class Student : virtual public Person
{
    public:
        Student()
        {
            cout << "\nStudent Constructor Called";
        } 
};

class Employee : virtual public Person
{
    public:
        Employee()
        {
            cout << "\nEmployee Constructor Called";
        }
};

class Intern : public Student , public Employee
{
    public:
        Intern()
        {
            cout << "\nIntern Constructor Called";
        }
};

int main()
{
    Intern I1;
    return 0;
}