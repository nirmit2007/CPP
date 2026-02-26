// emp manage system  :
/*
1.add emp
2.update emp
3.delete emp
4.search emp
5.display emp
*/
#include <iostream>
#include <string.h>
#define max 100
using namespace std;

void add(struct emp *e, int *count);
void update(struct emp *e, int count);
void deletef(struct emp *e, int *count);
void search(struct emp *e, int count);

struct emp
{
    int id;
    string name;
    int salary;
};

void add(struct emp *e, int *count)
{
    if (*count >= max)
    {
        cout << "no space left" << endl;
        return;
    }
    cout << "enter the emp id : ";
    cin >> e[*count].id;
    cout << "enter the emp name : ";
    cin >> e[*count].name;
    cout << "enter the emp salary : ";
    cin >> e[*count].salary;

    (*count)++;
    cout << "emp added" << endl;
}

void update(struct emp *e, int count)
{
    int id;
    cout << "\nEnter Employee Id to update: ";
    cin >> id;

    for (int i = 0; i < count; i++)
    {
        if (e[i].id == id)
        {
            cout << "Enter new name: ";
            cin >> e[i].name;
            cout << "Enter new salary: ";
            cin >> e[i].salary;
            cout << "Employee updated successfully!" << endl;
            return;
        }
    }
    cout << "Employee not found!" << endl;
}

void deletef(struct emp *e, int *count)
{
    int id;
    cout << "\nEnter Employee Id to delete: ";
    cin >> id;

    for (int i = 0; i < *count; i++)
    {
        if (e[i].id == id)
        {
            for (int j = i; j < *count - 1; j++)
            {
                e[j] = e[j + 1];
            }
            (*count)--;
            cout << "Employee deleted successfully!" << endl;
            return;
        }
    }
    cout << "Employee not found!" << endl;
}

void search(struct emp *e, int count)
{
    int id, found = 0;
    cout << "enter the emp id to update : ";
    cin >> id;

    for (int i = 0; i < count; i++)
    {
        if (e[i].id == id)
        {
            cout << "enter the emp name : " << e[i].name << endl;
            cout << "enter the emp salary : " << e[i].salary << endl;
            found = 1;
            break;
        }
    }
    if (found == 0)
    {
        cout << "emp not found" << endl;
    }
}

void display(struct emp *e, int count)
{
    if (count == 0)
    {
        cout << "no emp to display" << endl;
        return;
    }
    cout << "\nID\tName\tSalary\n";
    for (int i = 0; i < count; i++)
    {
        cout << e[i].id << "\t" << e[i].name << "\t" << e[i].salary << endl;
    }
}

int main()
{
    emp e[max];
    int count = 0;
    int choice;

    do
    {
        cout << "\n1.add emp\n2.update emp\n3.delete emp\n4.search emp\n5.display emp\n6.exit\n";
        cout << "enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            add(e, &count);
            break;
        case 2:
            update(e, count);
            break;
        case 3:
            deletef(e, &count);
            break;
        case 4:
            search(e, count);
            break;
        case 5:
            display(e, count);
            break;
        case 6:
            cout << "exiting..." << endl;
            break;
        default:
            cout << "invalid choice" << endl;
        }
    } while (choice != 6);

    return 0;
}
