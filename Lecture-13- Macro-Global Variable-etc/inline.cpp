#include <iostream>
using namespace std;

/*
    Inline Function -
    The 'inline' keyword suggests to the compiler
    that the function body should be substituted
    directly at the place where the function is called.

    Normal Function Call:
        ans = getMax(a,b);
    becomes:
        ans = (a > b) ? a : b;

    This avoids function call overhead for
    small functions.

    Note:
    Modern compilers decide whether to inline
    a function or not.
*/
inline int getMax(int &a, int &b)
{
    /*
        Ternary Operator
        Condition ? True_Value : False_Value

        If a > b
            return a
        else
            return b
    */
    return (a > b) ? a : b;
}

int main()
{
    // Initialize two variables
    int a = 1;
    int b = 2;
    // Variable to store answer
    int ans = 0;

    /*
        First Function Call
        a = 1
        b = 2
        1 > 2 ? No
        Returns 2
    */
    ans = getMax(a, b);

    cout << ans << endl;

    /*
        Updating values
        a = 1 + 3 = 4
        b = 2 + 1 = 3
    */
    a = a + 3;
    b = b + 1;

    /*
        Second Function Call

        a = 4
        b = 3
        4 > 3 ? Yes
        Returns 4
    */
    ans = getMax(a, b);

    cout << ans << endl;

    return 0;
}