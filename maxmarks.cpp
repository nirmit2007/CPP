#include<iostream>
using namespace std;

int main()
{
    int phy,chem,maths,max;
    cout<<"\nEnter Physics Marks: ";
    cin>>phy;
    cout<<"\nEnter Chemistry Marks: ";
    cin>>chem;
    cout<<"\nEnter Maths Marks: ";
    cin>>maths;

    max = phy;

    if(chem>max)
    {
        max = chem;
    }else if(maths>max)
    {  
        max = maths;
    }else
    {
        max = phy;
    }

    cout<<"\nMaximum Marks is  "<<max;
    

}