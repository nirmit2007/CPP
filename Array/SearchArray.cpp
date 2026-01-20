#include<iostream>
using namespace std;

int main()
{
    int a[50],size,ele,key,i; 
    cout<<"enter the size of array  : "; 
    cin>>size; 
    for(i=0; i<size; i++)
    {
        cin>>a[i]; 
    }
    cout<<"before delete element array  is  : \n";
    for(i=0; i<size; i++)
    {                          
        cout<<"a["<<i<<"] = "<<a[i]<<"\n ";  
    }
    cout<<"enter the element you want to search  : ";
    cin>>ele;  
    
    for(i=0;i<size;i++)
    {
        if(a[i]==ele)
        {
            cout<<"Element "<<ele<<" found at index "<<i<<"\n";
            break;
        }else
        {
            cout<<"Element "<<ele<<" not found\n";
        }
    }
    return 0; 
}