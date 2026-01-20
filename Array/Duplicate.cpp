#include<iostream>
using namespace std;

int main()
{
    int a[50],size,dup,i; 
    cout<<"enter the size of array  : "; //5
    cin>>size; 
    for(i=0; i<size; i++)
    {
        cin>>a[i]; 
    }
    cout<<"before remove duplicate element array  is  : \n";
    for(i=0; i<size; i++)
    {                          
        cout<<"a["<<i<<"] = "<<a[i]<<"\n ";  
    }
    for(i=0;i<size-1;i++)
    { 
        for(int j=i+1;j<size;j++)
        {
            if(a[i]==a[j])
            {
                dup=a[i];
                cout<<"Duplicate element in array is  : "<<dup<<"\n";
                for(int k=j;k<size-1;k++)
                {
                    a[k]=a[k+1];
                }
                size--;
                j--;
            }
        }
    }
    cout<<"after remove duplicate element array is  : \n";
    for(int i=0; i<size; i++)
    {
        cout<<a[i]<<"\n ";  
    }
}