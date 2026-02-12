/*
task :2   array  with  structure 
    srno   name   accno   balance 
    1      nirmit 345      200 
    2      ketan  457      400
    3      jaimin 890      2000
    4      henil  123      1500 

    condition : 
    1. display  only those cutomer name  which have balance less then 500rs. 
    2. if customer balance if more than  500 then  add 1000 rs in their  balance  and  print update balance  with name. 
*/
#include <iostream>
using namespace std;

struct account
{
    int accno, balance;
    string name;
};

account a[4];
int n = 0;

void add()
{
    if (n == 4) return;
    cin >> a[n].name >> a[n].accno >> a[n].balance;
    n++;
}

void low()
{
    for (int i = 0; i < n; i++)
        if (a[i].balance < 500)
            cout << a[i].name << endl;
}

void bonus()
{
    for (int i = 0; i < n; i++)
        if (a[i].balance > 1000)
            cout << a[i].name << " " << (a[i].balance += 1000) << endl;
}

int main()
{
    int ch;
    do
    {
        cout << "\n1.Add  2.Balance<500  3.Bonus  0.Exit\n";
        cin >> ch;

        switch (ch)
        {
        case 1: add(); break;
        case 2: low(); break;
        case 3: bonus(); break;
        case 0: break;
        default: cout << "Invalid Choice\n";
        }
    } while (ch != 0);

    return 0;
}
