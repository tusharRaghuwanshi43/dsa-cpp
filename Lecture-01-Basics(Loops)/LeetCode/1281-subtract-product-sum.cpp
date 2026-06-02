/*
Level: Easy
Problem Name: 1281. Subtract the Product and Sum of Digits of an Integer
Problem Link: https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/
Given an integer number n, return the difference between the product of its digits and the sum of its digits.
Example 1:
Input: n = 234
Output: 15
Explanation:
Product of digits = 2 * 3 * 4 = 24
Sum of digits = 2 + 3 + 4 = 9
Result = 24 - 9 = 15
Explanation: The product of digits is 24 and the sum of digits is 9, so the difference is 15.
*/

#include <iostream>
using namespace std;
class Solution
{
public:
    int subtractProductAndSum(int n)
    {
        int prod = 1;
        int sum = 0;
        while (n != 0)
        {
            int rem = n % 10;
            prod *= rem;
            sum += rem;

            n /= 10;
        }
        int result = prod - sum;
        return result;
    }
};

int main()
{
    Solution sol;
    int n = 234;
    int result = sol.subtractProductAndSum(n);
    cout << "Result: " << result << endl; // Output: Result: 15

    return 0;
}