#include <iostream>
using namespace std;

// ---------------- PRINT FUNCTION ----------------
// Receives a pointer to an integer
void print(int *p)
{
    // Dereference the pointer and print the value
    cout << *p << endl;
}

// ---------------- UPDATE FUNCTION ----------------
// Receives a copy of the pointer
void update(int *p)
{
    // This would only change the local copy
    // p = p + 1;

    // This changes the VALUE stored at the address
    *p = *p + 1;
}

// ---------------- SUM FUNCTION ----------------
// Array parameter becomes a pointer internally
int getSum(int *arr, int n)
{
    cout << endl;

    // arr is actually an int*
    // NOT the original array
    cout << "Size : " << sizeof(arr) << endl;

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    return sum;
}

int main()
{
    // ================= POINTER UPDATE =================

    int value = 5;
    int *p = &value;
    cout << "Before : " << *p << endl;
    update(p);
    cout << "After : " << *p << endl;

    // ================= ARRAY EXAMPLE =================

    int arr[6] = {1, 2, 3, 4, 5, 8};
    cout << "Sum is " << getSum(arr + 3, 3) << endl;
    return 0;
}