/*
Problem Link - https://leetcode.com/problems/fibonacci-number/
Problem Name - 509. Fibonacci Number
Level - Easy
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int fib(int n)
    {

        if (n == 0)
            return 0;
        if (n == 1)
            return 1;

        return fib(n - 1) + fib(n - 2);
    }
};

int main()
{
    int n = 5;
    Solution obj;
    cout << obj.fib(n);
    return 0;
}