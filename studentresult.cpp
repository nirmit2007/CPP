#include<iostream>
using namespace std;

int main()
{
    int phy,chem,maths,total;
    float avg;
    cout<<"\nEnter Physics Marks Out Of 100 : ";
    cin>>phy;
    cout<<"\nEnter Chemistry Marks Out of 100: ";
    cin>>chem;
    cout<<"\nEnter Maths Marks Out of 100: ";
    cin>>maths;

    total=phy+chem+maths;
    cout<<"\nTotal Marks Out of 300 : "<<total;

    avg = total/3;
    cout<<"\nPerc : "<<avg;

    if(avg>=90)
    {
        cout<<("\nGrade A");
    }else if(avg>=80)
    {
        cout<<("\nGrade B");
    }else if(avg>=70)
    {
        cout<<("\nGrade C");
    }else if(avg>=60)
    {
        cout<<("\nGrade D");
    }

}