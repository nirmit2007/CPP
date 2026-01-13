#include<iostream>
using namespace std;

// harshard  number  : 

/*
ex : 18 
each digit sum = 1+8 = 9 
now  if (num % sum) == 0  then is  harshard  number 
        18 % 9 ==0  ==> 18 is  harshard  number
*/
int main()
{
    int num,sum=0,mul=1,temp;
    cout << "Enter a number: ";
    cin >> num;

    temp=num;
    while(num>0) {
        int digit = num % 10;
        sum += digit;
        mul *= digit;
        num /= 10;
    }
    if(temp % sum == 0) {
        cout << temp << " is a harshard number" << endl;
    } else {
        cout << temp << " is not a harshard number" << endl;
    }
}