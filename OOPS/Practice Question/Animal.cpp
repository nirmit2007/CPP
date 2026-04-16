/*
Que 1. Define a base class Animal with a constructor and a method speak(). Derive a class Dog
from it and override speak() to print "Woof!". Create objects and show how the constructor of the
base and derived class is called.
*/

#include<iostream>
using namespace std;

class Animal
{
    public:
        Animal()
        {
            cout << "\nAnimal Constructor Created";
        }
    void speak()
    {
        cout << "\nSpeaking...";
    }
};

class Dog : public Animal
{
    public:
        Dog()
        {
            cout << "\nDog Constructor Created";
        }
    void speak()
    {
        cout << "\nWoof ! ";
    }

};

int main()
{
    Dog D1;
    D1.speak();
    return 0;
}