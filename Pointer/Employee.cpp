/*
Pointer to Structure Array (Employee Record): Store 5 employees (emp_id, name, salary).
Display employee having highest salary using pointer.
*/

#include<iostream>
using namespace std;

#include<iostream>
using namespace std;

struct Employee
{
    int e_id;
    char name[20];
    int salary;
};

int main()
{
    Employee e[5];
    Employee *p = e;  

    int i, maxIndex = 0;

    for(i = 0; i < 5; i++)
    {
        cout << "Enter employee id, name and salary of employee "
             << i+1 << ": ";
        cin >> (p+i)->e_id >> (p+i)->name >> (p+i)->salary;
    }

    for(i = 1; i < 5; i++)
    {
        if((p+i)->salary > (p+maxIndex)->salary)
        {
            maxIndex = i;
        }
    }

    cout << "\nEmployee with Highest Salary:";
    cout << "\nID: " << (p+maxIndex)->e_id;
    cout << "\nName: " << (p+maxIndex)->name;
    cout << "\nSalary: " << (p+maxIndex)->salary;

    return 0;
}
