/*
Problem Link - https://www.naukri.com/code360/problems/aggressive-cows_1082559
Problem name - Aggressive Cows
Problem Statement - Given an array of integers representing the positions of stalls and an integer k which represents the number of cows. The task is to assign stalls to cows such that the minimum distance between any two cows is as large as possible. Return the largest minimum distance.
Example 1:
Input: stalls = [1, 2, 4, 8, 9], k = 3
Output: 3
Explanation: The cows can be placed at positions 1, 4 and 8. The minimum distance between any two cows is 3.
*/

#include <bits/stdc++.h>
using namespace std;

bool possible(vector<int> &stalls, int k, int mid)
{
    int countcows = 1;
    int position = stalls[0];
    for (int i = 0; i < stalls.size(); i++)
    {
        if (stalls[i] - position >= mid)
        {
            countcows++;
            if (countcows == k)
            {
                return true;
            }
            position = stalls[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());
    int s = 1;
    int maxi = 0;
    for (int i = 0; i < stalls.size(); i++)
    {
        maxi = max(maxi, stalls[i]);
    }
    int e = maxi;
    int ans = 0;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (possible(stalls, k, mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    vector<int> stalls = {1, 2, 4, 8, 9};
    int k = 3;
    cout << "The largest minimum distance is: ";
    cout << aggressiveCows(stalls, k) << endl;
    return 0;
}