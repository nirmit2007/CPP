/*
Que :2 

Write a C++  code to Compute the product and sum  of the odd digits in a given number, 0 if there are not any odd digits in a given number. 
Example: 
(1) Input: 123456789 
    Output 1: 945  output 2 : 25
(2) Input: 2468 
    Output: 0 
(3) Input: 123547 
    Output: 105   output 2 :16 
*/

#include <iostream>
using namespace std;

int main()
{
    int num, digit,sum = 0,mul = 1,found=0;

    cout << "\nEnter a number: ";
    cin >> num;

    while(num > 0)
    {
        digit = num % 10;

        if(digit % 2 == 1)
        {
            sum = sum + digit;
            mul = mul * digit;
            found = 1;
        }
        num = num/10;
    }
    if(found == 0)
    {
        cout << "\n0";
    }
    else
    {
        cout << "\nProduct : " << mul;
        cout << "\nSum : " << sum;
    }
}