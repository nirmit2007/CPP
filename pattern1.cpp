#include<iostream>
using namespace std;
/*
 1 2 3 4 5 
 2 3 4 5
 3 4 5  
 4 5
 5
*/
int main()
{
    int i,j,n;
    cout << "Enter n : ";
    cin >> n;

    for(i=1;i<=n;i++) //i=1
    {
        for(j=i;j<=n;j++) //j=1
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
