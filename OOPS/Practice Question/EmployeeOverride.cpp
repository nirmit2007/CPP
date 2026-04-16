/*
Que 9.Create a base class Employee with members: name, baseSalary, and a constructor to
initialize them. Derive two classes: Manager (adds bonus) and Programmer (adds project
allowance). Override calculateSalary() in each derived class.
*/
#include <iostream>
using namespace std;

class Employee
{
protected:
    string name;
    float baseSalary;

public:
    Employee(string n, float b)
    {
        name = n;
        baseSalary = b;
    }

    virtual void calculateSalary()
    {
        cout << "Base Salary of " << name << " = " << baseSalary << endl;
    }
};

class Manager : public Employee
{
    float bonus;

public:
    Manager(string n, float b, float bo) : Employee(n, b)
    {
        bonus = bo;
    }

    void calculateSalary()
    {
        float total = baseSalary + bonus;
        cout << "Manager Salary of " << name << " = " << total << endl;
    }
};

class Programmer : public Employee
{
    float allowance;

public:
    Programmer(string n, float b, float a) : Employee(n, b)
    {
        allowance = a;
    }

    void calculateSalary()
    {
        float total = baseSalary + allowance;
        cout << "Programmer Salary of " << name << " = " << total << endl;
    }
};

int main()
{
    Manager m("Nirmit", 50000, 10000);
    Programmer p("Raj", 40000, 8000);

    m.calculateSalary();
    p.calculateSalary();

    return 0;
}
