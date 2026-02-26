// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     int num, sum = 0, count = 0;
//     int min, max;
//     float avg;
//     string input;

//     cout << "Enter numbers (type QUIT to stop): " << endl;

//     while (true)
//     {
//         cin >> input;

//         if (input == "QUIT")
//             break;

//         num = stoi(input);

//         if (count == 0)
//             min = max = num;

//         if (num < min)
//             min = num;

//         if (num > max)
//             max = num;

//         sum += num;
//         count++;
//     }

//     if (count > 0)
//     {
//         avg = (float)sum / count;
//         cout << "Sum = " << sum << endl;
//         cout << "Average = " << avg << endl;
//         cout << "Minimum = " << min << endl;
//         cout << "Maximum = " << max << endl;
//     }

//     return 0;
// }