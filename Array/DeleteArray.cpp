#include<iostream>
using namespace std;

int main()
{
    int a[50],size,ele,del,i; 
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
    cout<<"enter the element to be deleted  : "; 
    cin>>ele;  
    cout<<"enter the index for the delete  : ";
    cin>>del;
    
    for(i=del;i<size;i++)
    {
        a[i]=a[i+1];
    }
    size--;
    cout<<"after delete element new element in array is  : \n";
    for(int i=0; i<size; i++)
    {
        cout<<a[i]<<"\n ";  
    }
    return 0; 
}