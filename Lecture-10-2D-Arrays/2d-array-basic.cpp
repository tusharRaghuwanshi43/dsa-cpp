#include <iostream>
using namespace std;

// Column size must be specified in a 2D array so the compiler can calculate memory addresses correctly.
bool ispresent(int arr[][4], int r, int c, int key)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] == key)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    // creating the a 2d-array
    int arr[3][4];

    // initialize it row wise
    // int arr1[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    // by creating inner brackets we can decide the elements to be stored in the row
    int arr1[3][4] = {{1, 2, 3, 4}, {11, 21, 31, 41}, {11, 22, 33, 444}};
    //  i -> row & j -> column
    //   taking the input-> row wise input
    //   for (int i = 0; i < 3; i++)
    //   {
    //       for (int j = 0; j < 4; j++)
    //       {
    //           cin >> arr[i][j];
    //       }
    //   }

    // taking the input-> column wise input
    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cin >> arr[j][i];
    //     }
    // }

    // displaying the 2d array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }

    int key;
    cout << "Enter the element: " << endl;
    cin >> key;
    if (ispresent(arr1, 3, 4, key))
    {
        cout << "Element is found " << endl;
    }
    else
    {
        cout << "Element is not found " << endl;
    }
    return 0;
}