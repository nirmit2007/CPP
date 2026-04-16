/* Que 8. Demonstrate the effect of public, protected, and private inheritance using suitable base and
derived classes. Include constructors in each class and show which members are accessible.
*/

#include<iostream>
using namespace std;

class Base
{
public:
    int a = 10;

protected:
    int b = 20;

private:
    int c = 30;

public:
    Base()
    {
        cout << "\nBase Constructor";
    }
};

class D1 : public Base
{
public:
    D1()
    {
        cout << "\nD1 Constructor";
    }

    void show()
    {
        cout << "\nPublic Inheritance:";
        cout << "\na = " << a; 
        cout << "\nb = " << b; 
    }
};

class D2 : protected Base
{
public:
    void show()
    {
        cout << "\nProtected Inheritance:";
        cout << "\na = " << a; 
        cout << "\nb = " << b; 
    }
};

class D3 : private Base
{
public:
    void show()
    {
        cout << "\nPrivate Inheritance:";
        cout << "\na = " << a; 
        cout << "\nb = " << b; 
    }
};

int main()
{
    D1 obj1;
    obj1.show();

    D2 obj2;
    obj2.show();

    D3 obj3;
    obj3.show();

    return 0;
}