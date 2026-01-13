#include<iostream>
using namespace std;

int main()
{
     int no;

     cout<<"\nEnter No : ";
     cin>>no;

     if(no>0)
     {
        cout<<"\nnum is positive";
     }else if(no<0){
        cout<<"\nnum is negative";  
     }else if(no==0){
        cout<<"\nnum is zero";
     }
}

