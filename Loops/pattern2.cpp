#include<iostream>
using namespace std;
/*
     * * * * *
       * * * *
         * * *
           * *
             * 
*/

int main()
{
  int i,j,k,no;  
  cout<<"Enter No : ";
  cin>>no;

  for(i=1;i<=no;i++) //i=1
  {
      for(j=1;j<i;j++) //j=1
      {
          cout<<"  ";
      }
      for(k=i;k<=no;k++) //j=1
      {
          cout<<"* ";
      }
      cout<<endl;
  }
  return 0;
}  