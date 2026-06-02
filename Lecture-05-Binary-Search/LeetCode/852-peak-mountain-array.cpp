// Level - Medium
// Binary Search
class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {
        int s = 0;
        int e = arr.size() - 1;
        int mid = s + (e - s) / 2;
        while (s < e)
        {
            if (arr[mid] < arr[mid + 1])
            {
                s = mid + 1;
            }
            else
            {
                e = mid;
            }
            mid = s + (e - s) / 2;
        }
        return s;
    }
};

// Linear Search
class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {
        int max = INT_MIN;
        int index;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] > max)
            {
                max = arr[i];
                index = i;
            }
        }
        return index;
    }
};