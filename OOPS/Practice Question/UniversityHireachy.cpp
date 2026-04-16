/*
Que 10. Design a class hierarchy for a University System using constructors: Base class Person
(name, age); Derived class Student (rollNo, marks); Derived class Teacher (subject, salary);
Further derive ResearchScholar from Student (researchTopic). Demonstrate object creation and
constructor calls.
*/

#include <iostream>
using namespace std;

class Person
{
public:
    string name;
    int age;

    Person(string n, int a)
    {
        name = n;
        age = a;
        cout << "\nPerson Constructor Called";
    }
};

class Student : public Person
{
public:
    int rollno;
    float marks;

    Student(string n, int a, int r, float m) : Person(n, a)
    {
        rollno = r;
        marks = m;
        cout << "\nStudent Constructor Called";
    }
};

class Teacher : public Person
{
public:
    string subject;
    int salary;

    Teacher(string n, int a, string sub, int sal) : Person(n, a)
    {
        subject = sub;
        salary = sal;
        cout << "\nTeacher Constructor called";
    }
};

class ResearchScholar : public Student
{
public:
    string researchTopic;

    ResearchScholar(string n, int a, int r, float m, string topic) : Student(n, a, r, m)
    {
        researchTopic = topic;
        cout << "\nResearchScholar Constructor called";
    }
};

int main()
{
    cout << "\nCreating Student:";
    Student s("Nirmit", 18, 101, 85.5);

    cout << "\n\nCreating Teacher:";
    Teacher t("Raj", 35, "Maths", 50000);

    cout << "\n\nCreating Research Scholar:";
    ResearchScholar rs("Amit", 24, 201, 90.0, "AI Research");
    return 0;
}
