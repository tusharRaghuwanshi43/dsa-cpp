/*
Problem Link - https://www.naukri.com/code360/problems/aggressive-cows_1082559
Problem name - Aggressive Cows
*/

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