#include <iostream>
using namespace std;

/*
    Function: power()

    Purpose:
    Calculate 2 raised to the power n
    using recursion.

    Formula:
    2^n = 2 × 2^(n-1)

    Example:
    2^4 = 2 × 2 × 2 × 2
         = 16
*/
int power(int n)
{
    /*
        Base Case
        We know:
        2^0 = 1

        When n becomes 0,
        stop recursion and return 1.
    */
    if (n == 0)
        return 1;

    /*
        Recursive Relation

        2^n = 2 × 2^(n-1)

        Example:
        power(4)
        = 2 × power(3)
    */
    return 2 * power(n - 1);
}

int main()
{
    // Input exponent value
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;

    // Calculate 2^n
    int ans = power(n);

    // Print answer
    cout << ans << endl;

    return 0;
}