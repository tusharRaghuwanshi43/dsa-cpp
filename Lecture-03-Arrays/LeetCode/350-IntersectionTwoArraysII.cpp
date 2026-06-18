/*
Problem Link - https://leetcode.com/problems/intersection-of-two-arrays-ii/description/
Problem Name - 350. Intersection of Two Arrays II
Level - Easy
Description -
Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must appear as many times as it shows in both arrays and you may return the result in any order.

Example 1:
Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2,2]

Example 2:
Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [4,9]
Explanation: [9,4] is also accepted.
*/

// Approach One - Looping- Brute Force

#include <bits/stdc++.h>
using namespace std;

class Solution1
{
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> ans;

        // comparing elements of first array
        for (int i = 0; i < nums1.size(); i++)
        {
            // Comparing first array elements with second array elements
            for (int j = 0; j < nums2.size(); j++)
            {
                // intersection found
                if (nums1[i] == nums2[j])
                {
                    ans.push_back(nums2[j]);
                    nums2[j] = -1;
                    break;
                }
            }
        }
        return ans;
    }
};

// Approach Two - Two - Pointer
class Solution
{
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {

        vector<int> ans;

        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        int i = 0;
        int j = 0;

        while (i < nums1.size() && j < nums2.size())
        {

            if (nums1[i] == nums2[j])
            {
                ans.push_back(nums1[i]);
                i++;
                j++;
            }
            else if (nums1[i] < nums2[j])
            {
                i++;
            }
            else
            {
                j++;
            }
        }

        return ans;
    }
};

int main()
{
    Solution s;
    vector<int> nums1 = {12, 3, 4, 5};
    vector<int> nums2 = {1, 33, 4, 12, 3};
    vector<int> ans = s.intersect(nums1, nums2);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}