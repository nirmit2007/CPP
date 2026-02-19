#include<iostream>
using namespace std;

int main()
{
    int a[5], i;
    int *p = a;  

    for(i = 0; i < 5; i++)
    {
        cin >> *(p + i);
    }

    for(i = 4; i >= 0; i--)
    {
        cout << *(p + i) << " ";
    }

    return 0;
}
