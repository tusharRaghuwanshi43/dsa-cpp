/*
Level - Easy
Problem Link - https://leetcode.com/problems/sqrtx/
Problem Name - 69. Sqrt(x)
Problem Statement - Given a non-negative integer x, return the square root of x rounded down to the nearest integer. The returned integer should be non-negative as well.
Example 1:
Input: x = 4
Output: 2
Explanation: The square root of 4 is 2, so we return 2.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int mySqrt(int x)
    {
        int s = 0, e = x;
        long long int mid = s + (e - s) / 2;
        long long int ans = 0;
        while (s <= e)
        {
            long long int square = mid * mid;
            if (square == x)
            {
                return mid;
            }
            else if (square < x)
            {
                ans = mid;
                s = 1 + mid;
            }
            else if (square > x)
            {
                e = mid - 1;
            }
            mid = s + (e - s) / 2;
        }
        return ans;
    }
};

int main()
{
    int x = 4;
    Solution sol;
    cout << sol.mySqrt(x) << endl;
    return 0;
}