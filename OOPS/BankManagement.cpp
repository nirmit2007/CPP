#include <iostream>
using namespace std;
class bank 
{
    public : 
        string ac_holder_name ="nirmit"; 
        string bank_name ="HDFC"; 
        double ac_number =721200089456; 
        string branch= "Mehsana"; 
        int balance = 30000; 
        int pin;

    void deposit(int amt)
    {
        cout << "\nEnter Pin : ";
        cin >> pin; 
        
        if(pin==2007)
        {
            cout << "Login Succesfully.You Can Deposit Money";
            balance+=amt;
            cout<<"deposit amt is  : "<<amt<<endl;
        }else
        {
            cout << "Incorrect Pin";
        }
    }
    void withdraw(int amt) // 40000 -3600 >=10000  
    {
        cout << "\nEnter Pin : ";
        cin >> pin; 
    
        if(pin=2007)
        {
            cout << "Login Succesfully.You Can Withdraw Money";
            if(balance -amt >=10000)
            {
                balance-=amt;
                cout<<"withdraw amt is  : "<<amt<<endl;
            }
            else 
            {
                cout<<"min balance is  required 10000 rs. "<<endl;
            }
        }else
        {
            cout << "Incorrect Pin";
        }
    }
    void check_balance()
    {
        cout<<"balance is : "<<balance<<endl;
    }
    void  info()
    {
        cout<<"bank name is : "<<bank_name<<endl;
        cout<<"branch is : "<<branch<<endl;
        cout<<"ac holder name is : "<<ac_holder_name<<endl;
        cout<<"ac number is : "<<ac_number<<endl;
        cout<<"intial balance is : "<<balance<<endl;
    }
};
int main()
{
    bank b1; 
    b1.info(); 
    b1.deposit(10000); 
    b1.withdraw(18000);
    b1.check_balance(); 
    return 0; 
}