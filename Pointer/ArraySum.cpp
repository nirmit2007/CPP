#include <iostream>
using namespace std;

int main()
{

    int a[5], i, j, sum=0;
    int *p = a;

    for (i = 0; i < 5; i++)
    {
        cin >> *(p + i);
    }
    for (i = 0; i < 5; i++)
    {
        // cout<<*(p + i);
        sum =sum + *(p+i);
    }
    cout << sum;

    return 0;
}