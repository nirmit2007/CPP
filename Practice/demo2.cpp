// #include <iostream>
// using namespace std;

// int main() {
//     int year;
//     cout << "Enter Year (1900-2099): ";
//     cin >> year;

//     int a = year % 19;
//     int b = year % 4;
//     int c = year % 7;
//     int d = (19 * a + 24) % 30;
//     int e = (2 * b + 4 * c + 6 * d + 5) % 7;

//     int date = 22 + d + e;

//     if (year == 1954 || year == 1981 || year == 2049 || year == 2076)
//         date -= 7;

//     if (date > 31)
//         cout << year << "-04-" << date - 31;
//     else
//         cout << year << "-03-" << date;

//     return 0;
// }