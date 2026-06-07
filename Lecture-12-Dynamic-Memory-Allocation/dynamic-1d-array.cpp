#include <iostream>
using namespace std;

/*
    Function: getSum()
    Parameters:
    arr -> Pointer to the first element of the array
    n   -> Size of the array
*/
int getSum(int *arr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;

    /*
        Dynamic Memory Allocation
        Creates an integer array of size n
        in HEAP memory.
        Example:
        n = 5
        Memory:
        arr --> [ ][ ][ ][ ][ ]
    */
    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = getSum(arr, n);
    cout << "answer is " << ans << endl;

    // ==========================================
    // CASE 1 : No Memory Leak
    // ==========================================

    while (true)
    {
        /*
            Local variable created on STACK
            Every iteration:
            1. i is created
            2. i gets value 5
            3. iteration ends
            4. i is destroyed automatically
            Stack memory is automatically managed.
        */
        int i = 5;
    }

    // ==========================================
    // CASE 2 : Memory Leak
    // ==========================================

    while (true)
    {
        /*
            Creates integer in HEAP memory
            Every iteration:
            ptr ----> new int
            But delete is never called.
            Heap memory keeps increasing.
            This causes MEMORY LEAK / Program Crash.
        */
        int *ptr = new int;
    }

    /*
        Ideally we should free dynamically
        allocated memory using:
        delete[] arr;
        But program never reaches here because
        of the infinite loops above.
    */

    return 0;
}