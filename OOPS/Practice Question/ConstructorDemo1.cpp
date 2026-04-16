/*
Que 4. What will be the output of the following code? Explain why. Also modify the program so that
class A and class B both have constructors that print messages when objects are created. #include
using namespace std; class A { public: void show() { cout << "A::show()" << endl; } }; class B : public
A { public: void show() { cout << "B::show()" << endl; } }; int main() { B obj; obj.show(); obj.A::show();
}
*/

#include<iostream>
using namespace std;

class A
{
    public:
        A()
        {
            cout << "\nConstructor of Class A called";
        }
    void show()
    {
        cout << "\nA::show()";
    }
};

class B : public A
{
    public:
        B()
        {
            cout << "\nConstructor of Class B called";
        }
    void show()
    {
        cout << "\nB::show()";
    }
};

int main()
{
    B obj;
    obj.show();
    obj.A::show();
    return 0;
}