// #include <iostream>
// using namespace std;

// int main()
// {
//     int number;
//     cout << "Enter single digit number: ";
//     cin >> number;

//     for (int i = 100000; i <= 999999; i++)
//     {
//         int temp = i;
//         int product = 1;

//         for (int j = 0; j < 6; j++)
//         {
//             int digit = temp % 10;
//             product *= digit;
//             temp /= 10;
//         }

//         if (product == number)
//             cout << i << endl;
//     }

//     return 0;
// }