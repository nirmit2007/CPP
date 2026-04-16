// inheritance  + encapsulation  + friend  function  :
/*
login
password ==> change  password  ==> set  method
balance  ==> get balance

deposit  withdraw check balance

1.password : 1 lower 1 upper 1 digit 1 special character  ==> length  min  8
*/

#include <iostream>
#include <string>
using namespace std;

bool validatePassword(string password)
{
    if (password.length() < 8)
    {
        cout << "Password must be at least 8 characters long!" << endl;
        return false;
    }

    bool hasLower = false, hasUpper = false, hasDigit = false, hasSpecial = false;

    for (char c : password)
    {
        if (c >= 'a' && c <= 'z')
            hasLower = true;
        else if (c >= 'A' && c <= 'Z')
            hasUpper = true;
        else if (c >= '0' && c <= '9')
            hasDigit = true;
        else
            hasSpecial = true;
    }

    if (!hasLower)
    {
        cout << "Password must contain at least 1 lowercase letter!" << endl;
        return false;
    }
    if (!hasUpper)
    {
        cout << "Password must contain at least 1 uppercase letter!" << endl;
        return false;
    }
    if (!hasDigit)
    {
        cout << "Password must contain at least 1 digit!" << endl;
        return false;
    }
    if (!hasSpecial)
    {
        cout << "Password must contain at least 1 special character!" << endl;
        return false;
    }

    return true;
}

class account
{
private:
    int accno;
    string password;
    float balance;

public:
    account(int accno, string password, float balance)
    {
        this->accno = accno;
        this->password = password;
        this->balance = balance;
    }
    bool login(int acc, string passw)
    {
        return (accno == acc && password == passw);
    }
    void set_password(string new_password)
    {
        if (validatePassword(new_password))
        {
            password = new_password;
            cout << "Password successfully changed to: " << password << endl;
        }
        else
        {
            cout << "Password change failed. Please try again." << endl;
        }
    }
    float get_balance()
    {
        return balance;
    }
    void deposit(float amt)
    {
        balance += amt;
        cout << "deposit amount is  : " << amt << endl;
    }
    void withdraw(float amt)
    {
        if (balance - amt >= 10000)
        {
            balance -= amt;
            cout << "withdraw amount is  : " << amt << endl;
        }
        else
        {
            cout << "min balance maintain 10000 rs." << endl;
        }
    }
    friend void show_details(account acc);
};
void show_details(account acc)
{
    cout << "account number is  : " << acc.accno << endl;
    cout << "balance is  : " << acc.balance << endl;
}

class bank : public account
{
public:
    bank(int accno, string password, float balance) : account(accno, password, balance)
    {
    }
};
int main()
{
    int acc;
    string passw;

    bank b1(4352, "Nirmit@1610", 25000);  

    cout << "BANK DETAILS" << endl;
    cout << "enter the account number : ";
    cin >> acc;
    cout << "enter the password : ";
    cin >> passw;

    if (b1.login(acc, passw))
    {
        int choice;
        float amt;
        string new_passowrd;
        do
        {
            cout << "1. change password " << endl;
            cout << "2. check balance " << endl;
            cout << "3. deposit " << endl;
            cout << "4. withdraw " << endl;
            cout << "5. show details " << endl;
            cout << "6. exit " << endl;

            cout << "enter your choice : ";
            cin >> choice;

            switch (choice)
            {
            case 1:
                cout << "enter new password : ";
                cin >> new_passowrd;
                b1.set_password(new_passowrd);
                break;
            case 2:
                cout << "balance is  : " << b1.get_balance() << endl;
                break;
            case 3:
                cout << "enter amount to deposit : ";
                cin >> amt;
                b1.deposit(amt);
                break;
            case 4:
                cout << "enter amount to withdraw : ";
                cin >> amt;
                b1.withdraw(amt);
                break;
            case 5:
                show_details(b1);
                break;
            case 6:
                cout << "thank you for banking with us." << endl;
                break;
            default:
                cout << "invalid choice" << endl;
            }
        } while (choice != 6);
    }
    else
    {
        cout << "wrong password" << endl;
    }
    return 0;
}
