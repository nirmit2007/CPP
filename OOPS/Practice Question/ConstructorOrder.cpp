/*
Que 3. Write a program to demonstrate constructor calling order in single inheritance. Create a
base class Base with a constructor and a derived class Derived with its own constructor. Print
messages to show the order of constructor execution.
*/

#include<iostream>
using namespace std;

class C1
{
    public:
    C1()
    {
        cout << "\nBase Class Constructor called";
    }
    void demo()
    {
        cout << "\nBase Class Function Called";
    }
};

class C2 : public C1
{
    public:
        C2()
        {
            cout << "\nDerived Class Constructor Called";
        }
    void demo()
    {
        cout << "\nDerived Class Function Called";
    }
};

int main()
{
    C2 d1;
    d1.demo();
    return 0;
}