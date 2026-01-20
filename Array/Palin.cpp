/*
task  : 2 
    ask user  to enter the array  and separate the pelindrome number from the array .

    input  a[5] = {121,123,141,156,161}
    output  : pelindrome number is  {121,141,161}
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
    {
        cin >> arr[i];
    }
    cout << "Palindrome numbers in the array are: ";
    for (int i = 0; i < n; i++)
    {
        int num = arr[i];
        int rev = 0;
        int temp = num;

        while (temp != 0)
        {
            int digit = temp % 10;
            rev = rev * 10 + digit;
            temp /= 10;
        }

        if (rev == num)
        {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}