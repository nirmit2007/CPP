#include <iostream>
using namespace std;

int main()
{
    int a[50][50], row, col, i, j;
    int flag = 1;

    cout << "Enter rows: ";
    cin >> row;
    cout << "Enter cols: ";
    cin >> col;

    if(row != col)
    {
        cout << "Not an identity matrix (not square)";
    }

    cout << "Enter matrix elements:\n";
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            cin >> a[i][j];
        }
    }

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            if((i == j && a[i][j] != 1) || (i != j && a[i][j] != 0))
            {
                flag = 0;
                break;
            }
        }
    }

    if(flag == 1)
        cout << "Matrix is an Identity Matrix";
    else
        cout << "Matrix is NOT an Identity Matrix";

    return 0;
}
