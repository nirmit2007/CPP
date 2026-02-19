#include<iostream>
using namespace std;

int main()
{

int a[5],i,j;
int p = a;

for(i=0;i<5;i++)
{
    cin >> *(p+i);
}
for(i=0;i<5;i++)
{
    cout << *(p+i) << " ";
}
return 0;
}
