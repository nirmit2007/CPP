#include<iostream>
using namespace std;

int main()
{

int n1,n2,temp;

cout << "\nEnter No1 : ";
cin >> n1;
cout << "\nEnter No2 : ";
cin >> n2;

int *p1 = &n1;
int *p2 = &n2;

if(*p1 > *p2)
{
    cout << *p1," is max";
}else
{
    cout << *p2," is max";
}
return 0;
}
