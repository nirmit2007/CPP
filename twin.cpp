#include<iostream>
using namespace std;

//twin number program 123
// 1+2+3=6 
// 1*2*3=6
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    int sum = 0, product = 1;
    int temp = num;
    
    while(temp > 0) {
        int digit = temp % 10;
        sum += digit;
        product *= digit;
        temp /= 10;
    }
    
    if(sum == product) {
        cout << num << " is a twin number" << endl;
    } else {
        cout << num << " is not a twin number" << endl;
    }
    
    return 0;
}