#include <iostream>
using namespace std;

/*
    Function: sayNumber()

    Purpose:
    Print each digit of a number in words
    using recursion.

    Example:
    Input : 412

    Output:
    four one two
*/
void sayNumber(string arr[], int n)
{
    /*
        BASE CASE

        When number becomes 0,
        stop recursion.
    */
    if (n == 0)
    {
        return;
    }

    /*
        PROCESSING

        Extract last digit.

        Example:
        n = 412

        digit = 412 % 10
              = 2
    */
    int digit = n % 10;

    /*
        Remove last digit.

        Example:
        n = 412

        n = 412 / 10
          = 41
    */
    n = n / 10;

    /*
        RECURSIVE CALL

        Solve smaller problem first.

        sayNumber(arr, 41)
    */
    sayNumber(arr, n);

    /*
        PRINTING

        Print digit after recursive call.

        This makes digits print from
        left to right.
    */
    cout << arr[digit] << " ";
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    /*
        Array storing word representation
        of digits.
    */
    string arr[10] =
        {
            "zero",
            "one",
            "two",
            "three",
            "four",
            "five",
            "six",
            "seven",
            "eight",
            "nine"};

    // Function call
    sayNumber(arr, n);

    return 0;
}