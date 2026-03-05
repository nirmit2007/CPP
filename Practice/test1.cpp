/*
Create a menu-driven C++ program that performs the following operations:

1.  Add Employee
    -   Store employee details such as: • Name • Age • Salary
    -   Use an array of structures.
    -   Use a pointer to keep track of the total number of employees.
2.  Delete Employee
    -   Delete employee using Name only (NOT using ID).
    -   If the name matches, remove that employee.
    -   After deletion, shift remaining records properly.
3.  Display Employees
    -   Display all employee details.
    -   If no employee exists, show a proper message.

Constraints: - Use struct to define Employee. - Use array to store
multiple employees. - Use pointer (e.g., int *count) to manage number of
employees. - Implement exactly 3 functions only: addEmployee()
deleteEmployee() displayEmployee()
*/
#include<iostream>
using namespace std;

struct Employee
{
    string name;
    int age;
    double salary;
};

void addEmployee(Employee emp[],int*count)
{
    cout << "\nEnter Name : ";
    cin >> emp[*count].name;

     cout << "\nEnter Age : ";
    cin >> emp[*count].age;

     cout << "\nEnter Salary : ";
    cin >> emp[*count].salary;

    (*count)++;
}

void deleteEmployee(Employee emp[],int *count)
{
    string del;

    cout << "\nEnter Name for delete : ";
    cin >> del;

    int found = 0;
    for(int i=0;i<*count;i++)
    {
        if(emp[i].name==del)
        {
            for(int j=i;j<*count;j++)
            {
                emp[j] = emp[j+1];
            }
             (*count)--;
            found = 1;
            cout << "Employee Deleted";
            break;
        }
    }
}
void displayEmployee(Employee emp[],int *count)
{
    for(int i=0;i<*count;i++)
    {
        cout << "\nEmployee Name : " << emp[i].name;
        cout << "\nEmployee Age : " << emp[i].age;
        cout << "\nEmployee Salary : " << emp[i].salary;

    }
}

int main()
{
    Employee emp[5];
    int choice = 0;
    int count =0;

    do
    {
        cout << "\n\n1.Add Employee : ";
        cout << "\n2.Delete Employee : ";
        cout << "\n3.Display Employee : ";
        cout << "\n4.Exit : ";
        cout << "\nEnter Your Choice : ";
        cin >> choice;

        switch(choice)
        {
            case 1 : addEmployee(emp,&count);
                     break;

            case 2 : deleteEmployee(emp,&count);
                     break;

            case 3 : displayEmployee(emp,&count);
                     break;

            case 4 : cout << "\nExiting Program...";
                     break;
        }
    } while (choice!=4);    
}