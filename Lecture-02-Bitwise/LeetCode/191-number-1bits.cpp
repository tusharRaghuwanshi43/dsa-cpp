/*
Level - Easy
Problem name: 191. Number of 1 Bits
Problem link: https://leetcode.com/problems/number-of-1-bits/
Write a function that takes an unsigned integer and returns the number of '1' bits it has (also known as the Hamming weight).
Example 1:
Input: n = 00000000000000000000000000001011
Output: 3
Example 2:
Input: n = 00000000000000000000000010000000
Output: 1
Example 3:
Input: n = 11111111111111111111111111111101
Output: 37
*/

#include <iostream>
using namespace std;
class Solution
{
public:
    int hammingWeight(int n)
    {

        int count = 0;
        while (n != 0)
        {
            if (n & 1)
            {
                count++;
            }
            n = n >> 1;
        }
        return count;
    }
};

int main()
{
    Solution sol;
    int n = 0b00000000000000000000000000001011; // Example input
    int result = sol.hammingWeight(n);
    cout << "Number of 1 bits: " << result << endl; // Output: Number of 1 bits: 3

    n = 0b00000000000000000000000010000000; // Example input
    result = sol.hammingWeight(n);
    cout << "Number of 1 bits: " << result << endl; // Output: Number of 1 bits: 1

    n = 0b11111111111111111111111111111101; // Example input
    result = sol.hammingWeight(n);
    cout << "Number of 1 bits: " << result << endl; // Output: Number of 1 bits: 37
    return 0;
}