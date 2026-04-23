// method overriding using virtual function and constructor

#include <iostream>
using namespace std;

class Teacher
{
public:
    Teacher()
    {
        cout << "Teacher constructor called" << endl;
    }
    virtual void display()
    {
        cout << "Teacher is teaching" << endl;
    }
};

class Student : public Teacher
{
public:
    Student()
    {
        cout << "Student constructor called" << endl;
    }
    void display() override
    {
        cout << "Student is learning" << endl;
    }
};

class Principal : public Teacher
{
public:
    Principal()
    {
        cout << "Principal constructor called" << endl;
    }
    void display() override
    {
        cout << "principal is managing the school" << endl;
    }
};

int main()
{
    Teacher *t1 = new Teacher;
    Teacher *t2 = new Student;
    Teacher *t3 = new Principal;
    t1->display();
    t2->display();
    t3->display();
}
