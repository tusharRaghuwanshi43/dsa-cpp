/*
Problem Link - https://leetcode.com/problems/3sum-closest/
Problem Name - 16. 3Sum Closest
Level - Medium
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int threeSumClosest(vector<int> &nums, int target)
    {
        sort(nums.begin(), nums.end());

        int closestSum = nums[0] + nums[1] + nums[2];

        for (int i = 0; i < nums.size() - 2; i++)
        {
            int left = i + 1;
            int right = nums.size() - 1;

            while (left < right)
            {
                int currSum = nums[i] + nums[left] + nums[right];

                if (abs(currSum - target) < abs(closestSum - target))
                {
                    closestSum = currSum;
                }

                if (currSum < target)
                {
                    left++;
                }
                else if (currSum > target)
                {
                    right--;
                }
                else
                {
                    return currSum; // exact match
                }
            }
        }

        return closestSum;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {-1, 2, 1, -4};
    int target = 1;
    cout << s.threeSumClosest(nums, target) << endl;
    return 0;
}