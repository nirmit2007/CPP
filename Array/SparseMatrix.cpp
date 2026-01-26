#include<iostream>
using  namespace std;
/*
     1 2 3 
     0 0 0 
     0 0 9 

     count of 0 = 5

     if(count of zero > row * col/2) ==> Sparse matrix
    
*/
int main()
{
    int  a[10][10] ,row,col,i,j; 
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
    int countZero=0;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(a[i][j]==0)
            {
                countZero++;
            }
        }
    }
    if(countZero > row*col/2)
    {
        cout<<"This is Sparse Matrix";
    }else
    {
        cout<<"This is Not Sparse Matrix";
    }


}