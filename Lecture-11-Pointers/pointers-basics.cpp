#include <iostream>
using namespace std;

int main()
{
    // Integer variable
    int num = 5;

    // Prints the value stored in num
    cout << "Value of num: " << num << endl;

    // '&' is the Address-of operator
    // It returns the memory address where num is stored
    cout << "Address of num: " << &num << endl;

    // ---------------- POINTERS ----------------

    // A pointer is a variable that stores the address of another variable

    // int* ptr means:
    // ptr is a pointer that can store the address of an integer variable
    int *ptr = &num;

    // ptr stores the address of num
    cout << "Address stored inside ptr: " << ptr << endl;

    // '*' is the Dereference operator -> Go to the memory address stored in a pointer and access the value present there
    cout << "Value present at that address: " << *ptr << endl;

    // ---------------- DOUBLE POINTER EXAMPLE ----------------

    double d = 4.3;

    // Pointer to a double variable
    double *p2 = &d;

    cout << "\nDouble Example" << endl;

    // Address of d
    cout << "Address stored in p2: " << p2 << endl;

    // Value at the address stored in p2
    cout << "Value stored in d: " << *p2 << endl;

    // ---------------- SIZEOF EXAMPLES ----------------

    cout << "\nSize Information" << endl;

    // Size of integer variable
    cout << "Size of int variable: " << sizeof(num) << " bytes" << endl;

    // Size of pointer variable
    cout << "Size of int pointer: " << sizeof(ptr) << " bytes" << endl;

    // Size of double variable
    cout << "Size of double variable: " << sizeof(d) << " bytes" << endl;

    // Size of double pointer
    cout << "Size of double pointer: " << sizeof(p2) << " bytes" << endl;

    return 0;
}