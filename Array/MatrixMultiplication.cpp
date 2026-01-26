#include<iostream>
using namespace std;

int main()
{
    int i,j,a[50][50],r1,c1,b[50][50],mul[50][50],r2,c2;
    cout<<"Enter rows of matrix no1 : ";
    cin>>r1;
    cout<<"Enter cols of matrix no1 : ";
    cin>>c1;    

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Matrix : \n";
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"Enter rows of matrix no2 : ";
    cin>>r2;
    cout<<"Enter cols of matrix no2 : ";
    cin>>c2;

    if(c1 != r2)
    {
        cout<<"Matrix multiplication not possible ";
        return 0;
    }
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            cin>>b[i][j];
        }
    }
    cout<<"Matrix : \n";
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<"\n";
    }
    // multiplication logic
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            mul[i][j]=0;
            for(int k=0;k<c1;k++)
            {
                mul[i][j]= mul[i][j] + a[i][k]*b[k][j];
            }
        }
    }
    cout<<"Matrix after multiplication : \n";
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            cout<<mul[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}