#include <iostream>
using namespace std;

/*
    Function: power()

    Purpose:
    Calculate a^b using Recursion
    and Fast Exponentiation.

    Example:

    2^10 = 1024

    Instead of multiplying 2 ten times,
    we reduce the problem size by half
    in each recursive call.

    This makes the solution much faster
    than the normal recursive approach.
*/
int power(int a, int b)
{
    /*
        BASE CASE 1

        Any number raised to power 0
        is always 1.

        Example:

        5^0 = 1
    */
    if (b == 0)
        return 1;

    /*
        BASE CASE 2

        Any number raised to power 1
        is the number itself.

        Example:

        5^1 = 5
    */
    if (b == 1)
        return a;

    /*
        RECURSIVE CALL

        Solve smaller problem.

        Example:

        power(2,10)

        calls

        power(2,5)
    */
    int ans = power(a, b / 2);

    /*
        If exponent is even

        Example:

        2^10

        = (2^5) × (2^5)

        = ans × ans
    */
    if (b % 2 == 0)
    {
        return ans * ans;
    }
    else
    {
        /*
            If exponent is odd

            Example:

            2^5

            = 2 × (2^2) × (2^2)

            = a × ans × ans
        */
        return a * ans * ans;
    }
}

int main()
{
    int a, b;

    cout << "Enter Base and Power: " << endl;
    cin >> a >> b;

    int ans = power(a, b);

    cout << "Answer is " << ans << endl;

    return 0;
}