#include <iostream>
using namespace std;

class Student
{
public:
    int roll;

    void getRoll()
    {
        cout << "Enter Roll Number: ";
        cin >> roll;
    }
};

class Exam : public Student
{
public:
    int marks;

    void getMarks()
    {
        cout << "Enter Marks: ";
        cin >> marks;
    }
};

class Result : public Exam
{
public:
    void display()
    {
        cout << "Roll Number: " << roll << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Result r;
    r.getRoll();
    r.getMarks();
    r.display();

    return 0;
}