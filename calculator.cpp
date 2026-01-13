#include<iostream>
using namespace std;

int main()
{
    int no1, no2, ans, choice;

        cout << "\n\nSimple Calculator\n";

        cout << "Enter No1 : ";
        cin >> no1;
        cout << "Enter No2 : ";
        cin >> no2;
   while (true)  
    {
        cout << "\n1. Addition";
        cout << "\n2. Subtraction";
        cout << "\n3. Multiplication";
        cout << "\n4. Division";
        cout << "\n5. Exit";
        cout << "\nEnter Your Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            ans = no1 + no2;
            cout << "Answer = " << ans;
            break;

        case 2:
            ans = no1 - no2;
            cout << "Answer = " << ans;
            break;

        case 3:
            ans = no1 * no2;
            cout << "Answer = " << ans;
            break;

        case 4:
            if (no2 == 0)
                cout << "Error! Cannot divide by zero.";
            else
            {
                ans = no1 / no2;
                cout << "Answer = " << ans;
            }
            break;

        case 5:
            cout << "Exiting... Thank you!";
            return 0; 

        default:
            cout << "Invalid Choice! Please try again.";
        }
    }
}
