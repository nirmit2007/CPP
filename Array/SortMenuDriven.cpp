#include <iostream>
using namespace std;

void bubbleSort(int a[], int n);
void selectionSort(int a[], int n);
void insertionSort(int a[], int n);
void removeDuplicate(int a[], int n);
void display(int a[], int n);

int main()
{
    int n;
    cout << "Enter number of elements : ";
    cin >> n;

    int arr[n];
    cout << "Enter elements : ";
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    while(1)
    {
        int choice;
        cout << "\n1.Bubble Sort";
        cout << "\n2.Selection Sort";
        cout << "\n3.Insertion Sort";
        cout << "\n4.Remove Duplicates";
        cout << "\n5.Exit";
        cout << "\nEnter Your Choice : ";
        cin >> choice;

        switch(choice)
        {
            case 1: bubbleSort(arr, n);
                    display(arr, n);
                    break;

            case 2: selectionSort(arr, n);
                    display(arr, n);
                    break;

            case 3: insertionSort(arr, n);
                    display(arr, n);
                    break;

            case 4: removeDuplicate(arr, n);
                    break;

            case 5: return 0;   

            default: cout << "\nInvalid Choice";
        }
    }
}

/* Bubble Sort */
void bubbleSort(int a[], int n)
{
    int temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        { 
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }        
}

/* Selection Sort */
void selectionSort(int a[], int n)
{
    int temp;
    for(int i=0;i<n-1;i++)
    {
        int min = i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j] < a[min])
            {
                min = j;
                temp = a[i];
                a[i] = a[min];
                a[min] = temp;
            }
        }        
    }
}

/* Insertion Sort */
void insertionSort(int a[], int n)
{
    for(int i=1;i<n;i++)
    {
        int key = a[i];
        int j = i-1;
        while(j >= 0 && a[j] > key)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
}

/* Remove Duplicate Elements */
void removeDuplicate(int a[], int n)
{
    int temp;

    /* sort first */
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }  
    cout << "Array After remove duplicates";
    for(int i=1;i<n;i++)
    {
        if(a[i] != a[i-1])
            cout << a[i] << " ";
    }
    cout << endl;
}

/* Display */
void display(int a[], int n)
{
    cout << "Array : ";
    for(int i=0;i<n;i++)
        cout << a[i] << " ";
    cout << endl;
}
