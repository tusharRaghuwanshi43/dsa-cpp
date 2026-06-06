#include <iostream>
using namespace std;

// ================= DANGEROUS FUNCTION =================

// Returns reference to a local variable
int &func(int a)
{
    // a is local variable destroyed outside the function
    int num = a;
    int &ans = num;
    // num will be destroyed when function ends
    return ans; // BAD PRACTICE
}

// Returns pointer to local variable
int *fun(int n)
{
    int *ptr = &n;
    // n will be destroyed when function ends
    return ptr; // BAD PRACTICE
}

// ================= PASS BY REFERENCE =================

void update2(int &j)
{
    j++;
}

// ================= PASS BY VALUE =================

void update1(int n)
{
    n++;
}

int main()
{
    // ================= REFERENCE VARIABLE =================

    int i = 5;
    // j is another name for i
    int &j = i;
    cout << i << endl;
    i++;
    cout << i << endl;
    j++;
    cout << i << endl;
    cout << j << endl;
    int n = 5;

    // ================= PASS BY VALUE =================

    cout << "Before pass by value " << n << endl;
    update1(n);
    cout << "After pass by value " << n << endl;

    // ================= PASS BY REFERENCE =================

    cout << "Before pass by reference " << n << endl;
    update2(n);
    cout << "After pass by reference " << n << endl;

    // ================= DANGEROUS FUNCTION =================

    func(n);
    return 0;
}