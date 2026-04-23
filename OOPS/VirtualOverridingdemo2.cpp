// method overriding without using virtual function also use constructer

#include <iostream>
using namespace std;

class Car
{
public:
    Car()
    {
        cout << "Car constructor called" << endl;
    }
    void display()
    {
        cout << "Car is running" << endl;
    }
};

class Bike : public Car
{
public:
    Bike()
    {
        cout << "Bike constructor called" << endl;
    }
    void display()
    {
        cout << "Bike is running" << endl;
    }
};

class Bus : public Car
{
public:
    Bus()
    {
        cout << "Bus constructor called" << endl;
    }
    void display()
    {
        cout << "Bus is running" << endl;
    }
};

int main()
{
    Car *c1 = new Car;
    Car *c2 = new Bike;
    Car *c3 = new Bus;
    c1->display();
    c2->display();
    c3->display();

    return 0;
}