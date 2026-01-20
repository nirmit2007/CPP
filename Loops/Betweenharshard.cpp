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
    int start,end,sum=0,mul=1,temp,i;
    cout << "Enter Starting number: ";
    cin >> start; //18
    cout << "Enter Ending number: ";
    cin >> end; //100

    for(i=start;i<=end;i++)
    {
        temp=i;
        sum=0;
        mul=1;
       while(temp>0)
       {
        int digit = temp%10; //8
        sum = sum + digit; //8
        mul = mul * digit; //8
        temp = temp/10; //18/10=1
       }
        if(i % sum == 0) 
        {
          cout << i << " is a harshard number" << endl;
        } 
    }
    return 0;
}   