/*
Que 5. Write a C++ program to demonstrate multilevel inheritance. Create three classes: Vehicle
(base), Car (derived from Vehicle), and ElectricCar (derived from Car). Each class should have a
constructor that prints a message and a method that displays its type.
*/

#include<iostream>
using namespace std;

class Vehicle
{
    public:
        Vehicle()
        {
            cout << "\nConstructor of Vehicle called";
        }
        
    void show()
    {
        cout << "\nThis is a Vehicle";
    }
};

class Car : public Vehicle
{
    public:
        Car()
        {
            cout << "\nConstructor of Car called";
        }
    void show()
    {
        cout << "\nThis is a Car";
    }
};

class ElectricCar : public Car
{
    private:
        string brand;
    public:
        ElectricCar(string b) : brand(b)
        {
            cout << "\nConstructor of ElectricCar called";
        }
    void show()
    {
        cout << "\nThis is an ElectricCar";
    }

};

int main()
{
    ElectricCar myCar("Tesla");
    myCar.show();
    myCar.Car::show();
    myCar.Vehicle::show();
    return 0;
}