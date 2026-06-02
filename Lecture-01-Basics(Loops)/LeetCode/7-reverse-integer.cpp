/*
Level: Medium
Problem Name: 7. Reverse Integer
Problem Link: https://leetcode.com/problems/reverse-integer/
Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
Example 1:
Input: x = 123
Output: 321
Example 2:
Input: x = -123
Output: -321
Explanation: The above code will reverse the digits of the given integer x. It will handle both positive and negative integers. If the reversed integer exceeds the 32-bit signed integer range, it will return 0.
*/

#include <iostream>
#include <climits>
using namespace std;

class Solution
{
public:
    int reverse(int x)
    {

        int rev = 0;

        while (x != 0)
        {

            int digit = x % 10;
            x /= 10;
            if (rev > INT_MAX / 10 || rev < INT_MIN / 10)
            {
                return 0;
            }

            rev = rev * 10 + digit;
        }

        return rev;
    }
};

int main()
{
    Solution sol;
    int x = 123;
    int result = sol.reverse(x);
    cout << "Reversed integer: " << result << endl; // Output: Reversed integer: 321

    x = -123;
    result = sol.reverse(x);
    cout << "Reversed integer: " << result << endl; // Output: Reversed integer: -321

    return 0;
}