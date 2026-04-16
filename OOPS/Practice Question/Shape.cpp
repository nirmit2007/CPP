/*
Que 2. Create a base class Shape with data members length and breadth initialized using a
constructor. Derive a class Rectangle that calculates and displays the area. Write a complete
program demonstrating constructor usage.
*/

#include<iostream>
using namespace std;

class Shape
{
    public :
    float length,breadth; 
        Shape(float l,float b)
        {
            length = l;
            breadth = b;
        }
};

class rectangle : public Shape
{
    public :
        rectangle(float l,float b) : Shape(l,b)
        {
            cout << "\nrectangle constructor called";
        }
    void area()
    {
        cout << "\nArea of Rectangle is : " << length * breadth;
    }
};

int main()
{
    float l,b;
    cout << "\nEnter length and breadth of rectangle : ";
    cin >> l >> b;
    rectangle r1(l,b);
    r1.area();
    return 0;
}