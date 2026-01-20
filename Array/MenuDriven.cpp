// hw : 1. insert 2. update 3. delete  4 remove duplicate  make  menu driven program. 

#include <iostream>
using namespace std;

#define SIZE 50

int arr[SIZE];
int n;

// Display array
void display()
{
    if (n == 0)
    {
        cout << "Array is empty!\n";
        return;
    }

    cout << "Array elements: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

// Insert element at given position
void insertElement()
{
    int item, pos;

    cout << "Enter element to insert: ";
    cin >> item;
    cout << "Enter position (0 to " << n << "): ";
    cin >> pos;

    if (pos < 0 || pos > n)
    {
        cout << "Invalid position!\n";
        return;
    }

    for (int i = n; i > pos; i--)
        arr[i] = arr[i - 1];

    arr[pos] = item;
    n++;

    cout << "Element inserted at position!\n";
}

// Update element
void updateElement()
{
    int pos, value;

    cout << "Enter position (0 to " << n - 1 << "): ";
    cin >> pos;

    if (pos < 0 || pos >= n)
    {
        cout << "Invalid position!\n";
        return;
    }

    cout << "Enter new value: ";
    cin >> value;

    arr[pos] = value;
    cout << "Element updated!\n";
}

// Delete element
void deleteElement()
{
    int pos;

    cout << "Enter position to delete (0 to " << n - 1 << "): ";
    cin >> pos;

    if (pos < 0 || pos >= n)
    {
        cout << "Invalid position!\n";
        return;
    }

    for (int i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];

    n--;
    cout << "Element deleted!\n";
}

// Remove duplicate elements
void removeDuplicate()
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                for (int k = j; k < n - 1; k++)
                    arr[k] = arr[k + 1];
                n--;
                j--;
            }
        }
    }
    cout << "Duplicate elements removed!\n";
}

int main()
{
    int choice;

    // Input array first
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Initial ";
    display();

    // Menu
    do
    {
        cout << "\n--- MENU ---\n";
        cout << "1. Insert at Position\n";
        cout << "2. Update\n";
        cout << "3. Delete\n";
        cout << "4. Remove Duplicate\n";
        cout << "5. Display\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            insertElement();
            break;
        case 2:
            updateElement();
            break;
        case 3:
            deleteElement();
            break;
        case 4:
            removeDuplicate();
            break;
        case 5:
            display();
            break;
        case 6:
            cout << "Program exited.\n";
            break;
        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 6);

    return 0;
}
