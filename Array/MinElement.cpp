/*
task  :1 
    ask user to enter the  array  and  find minimum element of array . 

    input  : a[5] = {5,7,2,4,8}
    minimum element is  : 2
*/
#include <iostream>
using namespace std;
#define SIZE 50
int arr[SIZE];
int n;

int main()
{
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int minElement = arr[0];
    
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < minElement)
            minElement = arr[i];
    }

    cout << "Minimum element is: " << minElement << endl;

    return 0;
}