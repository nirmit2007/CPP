/*
Que 7. Explain and demonstrate the Diamond Problem in C++ using classes A, B, C, and D (where
D inherits from B and C, both inherit from A). Use constructors in each class and show how virtual
inheritance resolves the ambiguity.
*/

#include<iostream>
using namespace std;

class A
{
    public:
        A()
        {
            cout<<"\nA called";
        }
};

class B : virtual public A
{
     public:
        B()
        {
            cout<<"\nB called";
        }
};

class C : virtual public A
{
     public:
        C()
        {
            cout<<"\nC called";
        }
};

class D : public B , public C
{
     public:
        D()
        {
            cout<<"\nD called";
        }
};

int main()
{
    D obj;
    return 0;
}