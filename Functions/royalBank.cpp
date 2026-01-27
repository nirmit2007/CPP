#include<iostream>
#include<string.h>
using namespace std;
/*
ROYAL KID BANK : 

1. create  username and password . 
2. login   ==> it is  compuslory  . if login success then 25000 rs cr in user account.
               if log in fail then direct  exit. 
    if login successfull then display below function  like  : 
        1. deposit 
        2. withdraw
        3. balance
        4. exit

condition  : for withdraw : ==> you have maintain 10000 rs in your account . 
            means : if  your balance  is 35000 and  your withdraw amt is  30000 then  you can't withdraw  30000 rs. because  you have  only  10000 rs in your account.

        balance  25000 
        deposit  : 10000   total balance  : 35000
        withdraw : 30000

task   :1  user have max 3 attempt for  login. 
task   :2  if user  choose withdraw  then ask user to enter  pin and also verify the pin. 
*/
#include <iostream>
#include <string>
using namespace std;

float balance = 0;
int PIN = 1234;

void deposit();
void withdraw();
void checkBalance();

int main()
{
    char u1[50], u2[50];
    int p1, p2;
    int attempts = 3;
    int choice;

    cout << "------ ROYAL KID BANK ------\n";

    cout << "\n--- Create Account ---\n";
    cout << "Create Username: ";
    cin >> u1;
    cout << "Create Password: ";
    cin >> p1;

    cout << "\nAccount Created Successfully!\n";

    while (attempts > 0)
    {
        cout << "\n--- Login ---\n";
        cout << "Enter Username: ";
        cin >> u2;
        cout << "Enter Password: ";
        cin >> p2;

        if (strcmp(u1, u2) == 0 && p1 == p2)
        {
            cout << "\nLogin Successful!\n";
            balance = 25000;
            break;
        }
        else
        {
            attempts--;
            cout << "Login Failed! Attempts left: " << attempts << endl;
        }
    }

    if (attempts == 0)
    {
        cout << "\nNo attempts left. Exiting...\n";
        return 0;
    }

    do
    {
        cout << "\n--- MENU ---\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            deposit();
            break;
        case 2:
            withdraw();
            break;
        case 3:
            checkBalance();
            break;
        case 4:
            cout << "\nThank you for using Royal Kid Bank!\n";
            break;
        default:
            cout << "\nInvalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}

void deposit()
{
    float amount;
    cout << "Enter deposit amount: ";
    cin >> amount;

    balance += amount;
    cout << "Deposit Successful!\n";
}

void withdraw()
{
    int pin;
    float amount;

    cout << "Enter PIN: ";
    cin >> pin;

    if (pin != PIN)
    {
        cout << "Incorrect PIN!\n";
        return;
    }

    cout << "Enter withdrawal amount: ";
    cin >> amount;

    if (balance - amount >= 10000)
    {
        balance -= amount;
        cout << "Withdrawal Successful!\n";
    }
    else
    {
        cout << "Withdrawal denied! Minimum balance 10000 Rs required.\n";
    }
}

void checkBalance()
{
    cout << "Current Balance: Rs. " << balance << endl;
}
