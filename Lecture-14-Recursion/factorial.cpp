#include <iostream>
using namespace std;

/*
    Function: factorial()

    Purpose:
    Calculate factorial of a number using recursion.

    Formula:
    n! = n × (n-1)!

    Example:
    5! = 5 × 4 × 3 × 2 × 1
       = 120
*/
int factorial(int n)
{
    /*
        Base Case
        Recursion must stop somewhere.
        0! = 1

        When n becomes 0,
        return 1 and start
        returning back through
        the recursive calls.
    */
    if (n == 0)
        return 1;

    /*
        Recursive Call
        Solve a smaller version
        of the same problem.
        Example:
        factorial(5)
        calls factorial(4)
    */
    int smallerProblem = factorial(n - 1);

    /*
        Use smaller solution to
        solve bigger problem.
        Example:
        5! = 5 × 4!
    */
    int biggerProblem = n * smallerProblem;
    // Return final answer
    return biggerProblem;
}

int main()
{
    // Input number
    int n;
    cout << "Enter a number: "<<endl;
    cin >> n;
    // Call recursive function
    int ans = factorial(n);
    // Print answer
    cout << ans << endl;

    return 0;
}