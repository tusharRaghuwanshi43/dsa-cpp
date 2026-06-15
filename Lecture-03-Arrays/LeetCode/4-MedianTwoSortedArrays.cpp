/*
Problem Link - https://leetcode.com/problems/median-of-two-sorted-arrays/description/
Problem Name - 4. Median of Two Sorted Arrays
Level - Hard
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
    {
        /*
        Inserting elements using Loops -

        vector<int> merged;
        for (int i = 0; i < nums1.size(); i++)
        merged.push_back(nums1[i]);
        for (int i = 0; i < nums2.size(); i++)
        merged.push_back(nums2[i]);

        */
        vector<int> merged = nums1;
        merged.insert(merged.end(), nums2.begin(), nums2.end());
        double ans = 0;
        sort(merged.begin(), merged.end());

        // Checking i/p is even or odd
        int n = merged.size();
        if (n % 2 == 0)
        {
            ans = (merged[n / 2 - 1] + merged[n / 2]) / 2.0;
        }
        else
        {
            ans = merged[n / 2];
        }
        return ans;
    }
};

int main()
{
    Solution s;
    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2};
    cout << " Median is " << s.findMedianSortedArrays(nums1, nums2) << endl;
    return 0;
}
