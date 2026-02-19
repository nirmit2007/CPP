#include<iostream>
using namespace std;

int main()
{
    int i,count1=0,count2=0;
    int a[10];
 
    int *p = a;

    for(i = 0; i < 10; i++)
    {
        cin >> *(p + i);
    }

    for(i = 0; i < 10; i++)
    {
        cout << *(p + i) << " ";

        if(*(p + i) % 2 == 0)
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
        cout << "\nOdd Count : " << count1;
        cout << "\nEven Count : " << count2;
    return 0;
}
