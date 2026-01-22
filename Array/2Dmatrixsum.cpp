#include<iostream>
using  namespace std;
/*
     1 2 3 = 6
     4 5 6 = 15
     7 8 9 = 24
     | | |
    12 15 18
*/
int main()
{
    int  a[50][50] ,row,col,i,j; 
    cout<<"enter the rows : ";
    cin>>row;
    cout<<"enter the cols : ";
    cin>>col;

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"matrix : \n"; 
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }

    for(i=0;i<row;i++)
    {
        int rowsum=0;
        int colsum=0;
        for(j=0;j<col;j++)
        {
            rowsum=rowsum + a[i][j];
            colsum=colsum + a[j][i];
        }
        cout<<"sum of row "<<i<<" is : "<<rowsum<<"\n";
        cout<<"sum of col "<<j<<" is : "<<colsum<<"\n";
    }
    return 0; 
}   