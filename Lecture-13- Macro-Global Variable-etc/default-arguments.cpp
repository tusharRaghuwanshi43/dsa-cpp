#include <iostream>
using namespace std;

/*
    Function: print()
    Parameters:
    arr[]  -> Array to be printed
    n      -> Size of array
    start  -> Starting index for printing

    Default Argument:
    start = 0

    Condition - Default Arguments are allowed to start from the rightmost parameter not in the middle or left. If done, then error comes.
    If user does not provide start,
    printing begins from index 0.
*/
void print(int arr[], int n, int start = 0)
{
    /*
        Print array elements starting
        from index 'start' up to n-1
    */
    for (int i = start; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    /*
        Array Initialization
        Index : 0  1  2  3  4
        Value : 1  4  7  8  9
    */
    int arr[5] = {1, 4, 7, 8, 9};

    // Size of array
    int size = 5;

    /*
        Function Call 1

        Since start is not provided,
        default value start = 0 is used.

        Actual call becomes:

        print(arr, size, 0);
        Output:
        1
        4
        7
        8
        9
    */
    print(arr, size);
    cout << endl;

    /*
        Function Call 2
        start = 2 is explicitly passed.
        Printing begins from index 2.
        Actual call:
        print(arr, size, 2);
        Output:
        7
        8
        9
    */
    print(arr, size, 2);

    return 0;
}