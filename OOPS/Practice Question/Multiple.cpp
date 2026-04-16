/*
Implement a program for multiple inheritance. Create two base classes: Father (with a
constructor and method property()) and Mother (with a constructor and method talent()). Derive a
class Child that inherits from both and demonstrates constructor calling.
*/

#include<iostream>
using namespace std;

class Father 
{
    protected:
        string property;
    public:
        Father(string p) : property(p)
        {
            cout << "\nConstructor of Father called";
        }
    void showProperty()
    {
        cout << "\nFather's property: " << property;
    }
};

class Mother
{
    protected:
        string talent;
    public:
        Mother(string t) : talent(t)
        {
            cout << "\nConstructor of Mother called";
        }
    void showTalent()
    {
        cout << "\nMother's talent: " << talent;
    }
};

class Child : public Father, public Mother
{
    public:
        Child(string p, string t) : Father(p), Mother(t)
        {
            cout << "\nConstructor of Child called";
        }
    void showDetails()
    {
        showProperty();
        showTalent();
    }
};

int main()
{
    Child myChild("House", "Singing");
    myChild.showDetails();
    return 0;
}