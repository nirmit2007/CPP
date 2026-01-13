/*
Write a C++ program to calculate the monthly gross pay, annual income, and income tax of an employee using the following rules:

ask user to enter the city and grade.

1. Salary Components

Gross Pay =
Basic Pay + House Rent Allowance (HRA) + Dearness Allowance (DRA) + Other Allowances + Transport Allowance (TA) – Professional Tax – Provident Fund (PF)

| Grade | Basic Pay (₹) | Other Allowances (₹) |
| ----- | ------------- | -------------------- |
| A     | 60000         | 8000                 |
| B     | 50000         | 7000                 |
| C     | 40000         | 6000                 |
| D     | 30000         | 5000                 |
| E     | 20000         | 4000                 |
| F     | 10000         | 3000                 |

2. Constants & Formulas

Professional Tax = ₹200
Transport Allowance TA = ₹900
Provident Fund PF = 0.11 × Basic Pay
Dearness Allowance DRA = 0.5 × Basic Pay
 
HRA depends on city type:
City 1 (Tier 1) → HRA = 0.30 × Basic Pay
City 2 (Tier 2) → HRA = 0.20 × Basic Pay
City 3 (Tier 3) → HRA = 0.10 × Basic Pay

3.Annual Income = Gross Pay × 12

4.
| Annual Income           | Tax                                    |
| ----------------------- | -------------------------------------- |
| Up to ₹2,50,000         | 0%                                     |
| ₹2,50,001 – ₹5,00,000   | 5% of (Income – 2,50,000)              |
| ₹5,00,001 – ₹7,50,000   | 10% of (Income – 5,00,000) + 12,500    |
| ₹7,50,001 – ₹10,00,000  | 15% of (Income – 7,50,000) + 37,500    |
| ₹10,00,001 – ₹12,50,000 | 20% of (Income – 10,00,000) + 75,000   |
| ₹12,50,001 – ₹15,00,000 | 25% of (Income – 12,50,000) + 1,25,000 |
| Above ₹15,00,001        | 30% of (Income – 15,00,000) + 1,87,500 |

*/

#include<iostream>
using namespace std;

int main()
{
    char grade;
    int city;

    double basicPay = 0, otherAllowance = 0;
    double hra=1, dra=1, pf=1, ta = 900;
    double professionalTax = 200;
    double grossPay, annualIncome, tax = 0;

    cout << "Enter Grade (A-F): ";
    cin >> grade;

    cout << "Enter City Type (1 = Tier 1, 2 = Tier 2, 3 = Tier 3): ";
    cin >> city;

    switch(grade)
    {
        case 'A' : basicPay=60000;
                   otherAllowance=8000; 
                   break;
        
        case 'B' : basicPay=50000;
                   otherAllowance=7000;
                   break;
        
        case 'C' : basicPay=40000;
                   otherAllowance=6000;
                   break;

        case 'D' : basicPay=30000;
                   otherAllowance=5000;
                     break;
        
        case 'E' : basicPay=20000;
                   otherAllowance=4000;
                     break;

        case 'F' : basicPay=10000;
                   otherAllowance=3000;
                     break;
                    
        default : cout<<"\nInvalid Choice.";
    }

    pf= 0.11 * basicPay;
    dra = 0.5 * basicPay;

    if (city == 1)
        hra = 0.30 * basicPay;
    else if (city == 2)
        hra = 0.20 * basicPay;
    else if (city == 3)
        hra = 0.10 * basicPay;
    else
    {
        cout << "Invalid City Type.";
    }

    grossPay = basicPay + hra + dra + otherAllowance + ta - professionalTax - pf;
    annualIncome = grossPay * 12;

    if (annualIncome <= 250000)
        tax = 0;
    else if (annualIncome <= 500000)
        tax = 0.05 * (annualIncome - 250000);
    else if (annualIncome <= 750000)
        tax = 0.10 * (annualIncome - 500000) + 12500;
    else if (annualIncome <= 1000000)
        tax = 0.15 * (annualIncome - 750000) + 37500;
    else if (annualIncome <= 1250000)
        tax = 0.20 * (annualIncome - 1000000) + 75000;
    else if (annualIncome <= 1500000)
        tax = 0.25 * (annualIncome - 1250000) + 125000;
    else
        tax = 0.30 * (annualIncome - 1500000) + 187500;

    cout << "\n----- Salary Details -----\n";
    cout << "Monthly Gross Pay : Rs. " << grossPay << endl;
    cout << "Annual Income     : Rs. " << annualIncome << endl;
    cout << "Annual Income Tax : Rs. " << tax << endl;

    return 0;
}