/*
Problem link: https://leetcode.com/problems/power-of-two/
Problem name: 231. Power of Two
Level - Easy
Given an integer n, return true if it is a power of two. Otherwise, return false.
An integer n is a power of two, if there exists an integer x such that n == 2x.
*/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        if (n > 0 && (n & (n - 1)) == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};

int main()
{
    Solution sol;
    int n = 16;
    bool result = sol.isPowerOfTwo(n);
    cout << " Given no. is power of two " << result << endl;
    return 0;
}