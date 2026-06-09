#include <iostream>
using namespace std;

/*
    Function: reverse()

    Purpose:
    Reverse a string using recursion.

    Parameters:
    str -> String passed by reference, so changes affect the original string.

    i   -> Starting index

    j   -> Ending index
*/
void reverse(string &str, int i, int j)
{
    /*
        Using reference variable so that we can directly change to the name string.
    */
    cout << "Call received for : " << str << endl;

    /*
        BASE CASE

        When i crosses j,
        all swaps are complete.

        Example:

        abcde

        i = 2
        j = 2

        Middle reached.
    */
    if (i > j)
        return;

    /*
        PROCESSING

        Swap characters at
        start and end positions.
    */
    swap(str[i], str[j]);

    /*
        Move towards center.
    */
    i++;
    j--;

    /*
        RECURSIVE CALL

        Reverse the remaining
        inner substring.
    */
    reverse(str, i, j);
}

int main()
{
    // Original String
    string name = "abcde";
    cout << endl;
    // Function Call
    reverse(name, 0, name.length() - 1);
    cout << endl;
    // Final Reversed String
    cout << name << endl;

    return 0;
}