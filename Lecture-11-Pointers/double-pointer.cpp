#include <iostream>
using namespace std;

// p2 is a pointer to a pointer
void update(int **p2)
{
    // Case 1:
    // p2 = p2 + 1;
    // Only local copy changes
    // No effect outside function

    // Case 2:
    // *p2 = *p2 + 1;
    //
    // *p2 means pointer p
    // So this changes p itself
    // Effect visible outside function

    // Case 3:
    // **p2 means value of i
    // Increment actual value
    **p2 = **p2 + 1;
}

// Receives pointer to integer
void updateValue(int *p)
{
    *p = (*p) * 2;
}

// Receives pointer to pointer
void increment(int **p)
{
    ++(**p);
}

int main()
{
    int i = 5;

    // p stores address of i
    int *p = &i;
    // p2 stores address of p
    int **p2 = &p;

    // ================= DOUBLE POINTER =================

    cout << "Value of i      : " << i << endl;
    cout << "*p              : " << *p << endl;
    cout << "**p2            : " << **p2 << endl;
    cout << endl;

    // ================= ADDRESSES =================

    cout << "&i              : " << &i << endl;
    cout << "p               : " << p << endl;
    cout << "*p2             : " << *p2 << endl;
    cout << endl;
    cout << "&p              : " << &p << endl;
    cout << "p2              : " << p2 << endl;
    cout << endl;
    cout << "Before update" << endl;
    cout << "i  = " << i << endl;
    cout << "p  = " << p << endl;
    cout << "p2 = " << p2 << endl;
    update(p2);
    cout << endl;
    cout << "After update" << endl;
    cout << "i  = " << i << endl;
    cout << "p  = " << p << endl;
    cout << "p2 = " << p2 << endl;

    // ================= SECOND EXAMPLE =================

    int num = 110;
    int *ptr = &num;
    increment(&ptr);
    cout << endl;
    cout << "num = " << num << endl;
    return 0;
}