#include <iostream>
using namespace std;

int main()
{
    // ================= ARRAY BASICS =================

    int arr[10] = {23, 122, 41, 67};

    // Array name stores the address of the first element
    cout << "Address of first element: " << arr << endl;

    // Value of first element
    cout << arr[0] << endl;

    // Address of first element
    cout << &arr[0] << endl;

    // ================= POINTER NOTATION WITH ARRAYS =================

    // arr points to first element
    // *arr means value at first element

    cout << "4th: " << *arr << endl;

    // (*arr) + 1
    // 23 + 1 = 24
    cout << "5th: " << *arr + 1 << endl;

    // Move to next element and fetch value
    // arr+1 points to 122
    cout << "6th: " << *(arr + 1) << endl;

    // Same as (*arr)+1
    cout << "7th: " << *(arr) + 1 << endl;

    // Normal array access
    cout << "8th: " << arr[2] << endl;

    // Pointer notation access
    // arr[2] == *(arr+2)
    cout << "9th: " << *(arr + 2) << endl;

    // ================= FUN FACT =================

    int i = 3;

    // arr[i] is internally:
    // *(arr + i)

    // Therefore:
    // i[arr] is:
    // *(i + arr)

    // Same thing!
    cout << i[arr] << endl;

    // ================= SIZEOF WITH ARRAYS =================

    int temp[10] = {1, 2};

    // 10 integers
    // 10 × 4 = 40 bytes
    cout << sizeof(temp) << endl;

    // Size of first element
    cout << "1st: " << sizeof(*temp) << endl;

    // Address of entire array
    cout << "2nd: " << sizeof(&temp) << endl;

    // ================= SIZEOF WITH POINTERS =================

    int *ptr = &temp[0];

    // Size of pointer variable
    cout << sizeof(ptr) << endl;

    // Size of value pointed to
    cout << sizeof(*ptr) << endl;

    // Size of pointer's address
    cout << sizeof(&ptr) << endl;

    // ================= ARRAY VS POINTER =================

    int a[20] = {1, 2, 3, 5};

    int *p = &a[0];

    // Address of pointer variable itself
    cout << "Address of p: " << &p << endl;

    // ================= IMPORTANT DIFFERENCE =================

    int arr2[10];

    // NOT ALLOWED
    // Array name is not modifiable
    // arr2 = arr2 + 1; -> gives the error

    int *ptr2 = &arr2[0];

    cout << ptr2 << endl;

    // Pointer can move
    ptr2 = ptr2 + 1;

    cout << ptr2 << endl;

    return 0;
}