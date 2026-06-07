#include <iostream>
using namespace std;

int main()
{
    // Number of rows
    int row;
    cout << "Enter number of rows: " << endl;
    cin >> row;
    // Number of columns
    int col;
    cout << "Enter number of columns: " << endl;
    cin >> col;

    /*
        DYNAMIC 2D ARRAY CREATION
        Step 1:
        Create an array of pointers.
        Example:
        row = 3

        arr
         |
         v
        [ * ][ * ][ * ]

        Each element stores the address of a row.
    */
    int **arr = new int *[row];

    /*
        Step 2:
        Create individual rows.
        Example:
        col = 4

        arr
         |
         v
        [ * ] ---> [ ][ ][ ][ ]
        [ * ] ---> [ ][ ][ ][ ]
        [ * ] ---> [ ][ ][ ][ ]

        Total matrix = 3 x 4
    */
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }

    // ==========================
    // TAKING INPUT
    // ==========================

    /*
        Input matrix values.
        Example:
        1 2 3 4
        5 6 7 8
        9 10 11 12
    */
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    // ==========================
    // PRINTING MATRIX
    // ==========================

    cout << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        // Move to next line after each row
        cout << endl;
    }

    // ==========================
    // MEMORY DEALLOCATION
    // ==========================

    /*
        IMPORTANT:
        Memory was allocated in two steps:
        1. Rows were allocated
        2. Array of pointers was allocated
        Therefore memory must also be released
        in reverse order.
    */

    // Delete each row first
    for (int i = 0; i < row; i++)
    {
        delete[] arr[i];
    }
    // Delete array of pointers
    delete[] arr;

    return 0;
}