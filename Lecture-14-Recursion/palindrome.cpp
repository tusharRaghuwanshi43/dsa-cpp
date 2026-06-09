#include <iostream>
using namespace std;

/*
    Function: checkPalindrome()

    Purpose:
    Check whether a string is a palindrome
    using recursion.

    A palindrome reads the same
    forward and backward.

    Examples:
    "madam"     -> Palindrome
    "racecar"   -> Palindrome
    "hello"     -> Not Palindrome
*/
bool checkPalindrome(string str, int i, int j)
{
    /*
        Display current comparison
        during recursion.
    */
    cout << "Checking : " << str[i] << " and " << str[j] << endl;

    /*
        BASE CASE

        When pointers cross each other
        or meet at the middle.

        Example:

        racecar

            c
           / \
          e   e

        All characters matched.
    */
    if (i > j)
        return true;

    /*
        PROCESSING

        If current characters are different,
        string cannot be a palindrome.
    */
    if (str[i] != str[j])
    {
        return false;
    }
    else
    {
        /*
            RECURSIVE CALL

            Move towards the center.

            i -> next character from left
            j -> next character from right
        */
        return checkPalindrome(str, i + 1, j - 1);
    }
}

int main()
{
    // Test String
    string name = "BookkooB";

    cout << endl;

    // Function Call
    bool isPalindrome =
        checkPalindrome(name, 0, name.length() - 1);

    cout << endl;

    if (isPalindrome)
    {
        cout << "Its a Palindrome" << endl;
    }
    else
    {
        cout << "Its not a Palindrome" << endl;
    }

    return 0;
}