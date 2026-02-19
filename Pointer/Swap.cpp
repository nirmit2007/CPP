/*
1. Swap Two Numbers Using Pointers: Write a program to swap two integers using pointer
variables 
*/
#include<iostream>
using namespace std;

int main()
{
int a,b,temp;
int *p;

cout << "\nEnter No1 : ";
cin >> a;
cout << "\nEnter No2 : ";
cin >> b;

p = &a;

temp = *p;
a = b;
b = temp;

  cout << "\nNo1 : " << a;
  cout << "\nNo2 : " << b;
}
