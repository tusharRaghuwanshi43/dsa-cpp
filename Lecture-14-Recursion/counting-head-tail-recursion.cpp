#include <iostream>
using namespace std;

/*
    TAIL RECURSION

    Work is done BEFORE the recursive call.

    Example for n = 5:

    5
    4
    3
    2
    1
*/
void tailPrint(int n)
{
    // Base Case
    if (n == 0)
    {
        return;
    }
    // Processing
    cout << n << endl;
    // Recursive Call
    tailPrint(n - 1);
}

/*
    HEAD RECURSION

    Work is done AFTER the recursive call.

    Example for n = 5:

    1
    2
    3
    4
    5
*/
void headPrint(int n)
{
    // Base Case
    if (n == 0)
    {
        return;
    }
    // Recursive Call
    headPrint(n - 1);
    // Processing
    cout << n << endl;
}

int main()
{
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    cout << "\nTail Recursion Output:\n";
    tailPrint(n);
    cout << "\nHead Recursion Output:\n";
    headPrint(n);

    return 0;
}