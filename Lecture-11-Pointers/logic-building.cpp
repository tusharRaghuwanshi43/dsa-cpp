#include <iostream>
using namespace std;

int main()
{
    // ---------------- NULL POINTER ----------------

    // Pointer initialized with 0 (NULL)
    // Currently it points to nothing
    int *p = 0;

    // Never do this:
    // cout << *p << endl;
    // Dereferencing a NULL pointer causes a Segmentation fault -> Segmentation Fault (Seg Fault) happens when your program tries to access memory that it is not allowed to access.

    // ---------------- BASIC POINTER ----------------

    int i = 5;

    // q stores the address of i
    int *q = &i;

    cout << "Address of i: " << q << endl;
    cout << "Value of i: " << *q << endl;

    // ---------------- ASSIGN ADDRESS LATER ----------------

    int *ptr = 0;

    // Now ptr points to i
    ptr = &i;

    cout << "\nAddress stored in ptr: " << ptr << endl;
    cout << "Value pointed by ptr: " << *ptr << endl;

    // ---------------- NORMAL VARIABLE COPY ----------------

    int num = 5;

    // a gets a copy of num
    int a = num;

    cout << "\nBefore incrementing a" << endl;
    cout << "num = " << num << endl;
    cout << "a = " << a << endl;

    a++;

    cout << "\nAfter incrementing a" << endl;
    cout << "num = " << num << endl;
    cout << "a = " << a << endl;

    // Notice:
    // num remains unchanged because a is a copy

    // ---------------- MODIFYING THROUGH POINTER ----------------

    int *pNum = &num;

    cout << "\nBefore pointer increment" << endl;
    cout << "num = " << num << endl;

    // Go to the address stored in pNum
    // and increment the value there
    (*pNum)++;

    cout << "After pointer increment" << endl;
    cout << "num = " << num << endl;

    // num becomes 6 because pNum points directly to num

    // ---------------- COPYING POINTERS ----------------

    int *copyPtr = pNum;

    cout << "\nPointer Copy Example" << endl;

    cout << "pNum address: " << pNum << endl;
    cout << "copyPtr address: " << copyPtr << endl;

    cout << "Value via pNum: " << *pNum << endl;
    cout << "Value via copyPtr: " << *copyPtr << endl;

    // Both pointers point to the same memory location

    // ---------------- IMPORTANT CONCEPT ----------------

    int x = 3;

    int *t = &x;

    cout << "\nInitial value of x: " << *t << endl;

    // Increase value stored at the address
    *t = *t + 1;

    cout << "After incrementing value: " << *t << endl;

    cout << "\nPointer address before t++: " << t << endl;

    // Move pointer to next integer location
    t = t + 1;

    cout << "Pointer address after t++: " << t << endl;

    // Notice:
    // x is unchanged here.
    // Only the pointer moved.

    return 0;
}