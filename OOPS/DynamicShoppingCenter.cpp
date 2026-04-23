/*
    shooping cart :  inheritance  + encapsulation   + polymorphism

    1. use pointer
    2. use set method  ==> price change & before after price print
*/

#include <iostream>
using namespace std;
class product
{
private:
    string name;
    int price;

public:
    product(string n, int p)
    {
        name = n;
        price = p;
    }
    int get_price()
    {
        return price;
    }
    string get_name()
    {
        return name;
    }
    void set_price(int pr)
    {
        cout << "Price change for " << name << ": Before price = " << price;
        price = pr;
        cout << " | After price = " << price << endl;
    }
    // method overloading
    void addtocart(int qty)
    {
        cout << name << " added to cart with quantity " << qty << endl;
    }
    void addtocart(int qty, int discount)
    {
        int f_price = (price - discount) * qty;
        cout << name << " added to cart with quantity " << qty << " and discount " << discount << " with final price " << f_price << endl;
    }
    virtual void calculation_total(int qty)
    {
        cout << "total  price is : " << (price * qty) << endl;
    }
};

class electronic : public product
{
public:
    electronic(string n, int p) : product(n, p)
    {
    }
    void calculation_total(int qty)
    {
        int tax = get_price() * 0.18;
        cout << "electronic total with tax : " << (get_price() + tax) * qty << endl;
    }
};

class clothing : public product
{
public:
    clothing(string n, int p) : product(n, p)
    {
    }
    void calculation_total(int qty)
    {
        int discount = get_price() * 0.10;
        cout << "clothing total with discount : " << (get_price() - discount) * qty << endl;
    }
};

int main()
{
    product *e1 = new electronic("mobile", 10000);
    product *c1 = new clothing("shirt", 800);

    cout << "=====electronic  ======\n";
    e1->addtocart(6); 
    e1->addtocart(6, 1000);
    e1->calculation_total(6);

    cout << "\n--- Changing electronic price ---\n";
    e1->set_price(9500);
    e1->calculation_total(6);

    cout << "\n=====clothing  ======\n";
    c1->addtocart(3);
    c1->calculation_total(3);

    cout << "\n--- Changing clothing price ---\n";
    c1->set_price(1000);
    c1->calculation_total(3);

    return 0;
}