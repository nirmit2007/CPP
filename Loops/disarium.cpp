// Disarium Number : 
/*
A Disarium number is a number in which the sum of its digits raised to the power of their respective positions (starting from 1) is equal to the number itself. 

ex : 175 :
    1 pow 1 =1 
    7 pow 2 =49
    5 pow 3 =125
    sum = 1 +49+125 =175 then it is disarium number . 
*/
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int num,temp,fd,sd,td;
    cout<<"Enter Num : ";
    cin>>num; // 175
 
    fd = num/100; 
    sd = (num/10)%10;
    td = num % 10;
    int sum = pow(fd,1) + pow(sd,2) + pow(td,3);
    if(sum == num) 
    {
        cout << num << " is a Disarium number" << endl;
    }else
    {
        cout << num << " is not a Disarium number" << endl;
    }
    
}