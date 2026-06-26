/*
Problem Link - https://leetcode.com/problems/find-lucky-integer-in-an-array/description/
Problem Name - 1394. Find Lucky Integer in an Array
Level -Easy
Description - Given an array of integers arr, a lucky integer is an integer that has a frequency in the array equal to its value.
Return the largest lucky integer in the array. If there is no lucky integer return -1.

Example 1:
Input: arr = [2,2,3,4]
Output: 2
Explanation: The only lucky number in the array is 2 because frequency[2] == 2.

Example 2:
Input: arr = [1,2,2,3,3,3]
Output: 3
Explanation: 1, 2 and 3 are all lucky numbers, return the largest of them.

Example 3:
Input: arr = [2,2,2,3,3]
Output: -1
Explanation: There are no lucky numbers in the array.
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findLucky(vector<int> &arr)
    {
        sort(arr.begin(), arr.end());
        int temp = arr[0];
        int count = 0;
        int ans = -1;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == temp)
            {
                count++;
            }
            // Group ended
            if (arr[i] != temp)
            {
                if (count == temp)
                {
                    ans = max(ans, temp);
                }
                temp = arr[i];
                count = 1;
            }
        }
        // Check the LAST group
        if (count == temp)
        {
            ans = max(ans, temp);
        }
        return ans;
    }
};

int main()
{
    Solution s;
    vector<int> arr1 = {1, 2, 3, 2, 3, 3};
    cout << "Lucky no in the array is " << s.findLucky(arr1) << endl;
}