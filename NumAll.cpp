/*
Write a cpp program that prompts the user to enter numbers and stops only when the use enter “QUIT” . After this
print sum  and average of the numbers, minimum and maximum number from given numbers entered by user.

For Example:  Input:  4,1,5,”QUIT”
Output:
Sum=10
Average=3.333
Minimum number=1
Maximum number=5
*/

#include <iostream>
using namespace std;

int main()
{
    double num, sum = 0, count = 0;
    double min, max;
    double avg;
    string input;

    cout << "Enter numbers (type QUIT to stop): " << endl;

    while (true)
    {
        cin >> input;

        if (input == "QUIT")
        {
            break;
        }

        num = stoi(input);

        sum = sum + num;
        count++;

        if (count == 1)
        {
            min = num;
            max = num;
        }
        else
        {
            if(num > max)
            {
                max = num;
            }    
            else
            {
                min = num;
            }
        }    
    }

    if (count > 0)
    {
        avg = sum / count;

        cout << "Sum = " << sum << endl;
        cout << "Average = " << avg << endl;
        cout << "Minimum number = " << min << endl;
        cout << "Maximum number = " << max << endl;
    }
    else
    {
        cout << "No numbers entered.";
    }

    return 0;
}