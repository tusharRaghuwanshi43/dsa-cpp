/*
Problem Link - https://www.naukri.com/code360/problems/search-in-rotated-sorted-array_1082554
Problem name - Search In Rotated Sorted Array
*/

int getPivot(vector<int> &arr, int n)
{
    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    }
    return s;
}

int binary(vector<int> &arr, int s, int e, int key)
{
    int start = s, end = e;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key) // when key is matched with the mid value
        {
            return mid; // return the index of mid
        }
        else if (key > arr[mid]) // for the right part
        {
            start = mid + 1; // update the start index
        }
        else // for the left part
        {
            end = mid - 1; // update the end index
        }
        mid = start + (end - start) / 2; // when key is not found, update the mid
    }
    return -1;
}

int search(vector<int> &arr, int n, int k)
{
    int pivot = getPivot(arr, n);
    if (k >= arr[pivot] && k <= arr[n - 1])
    {
        // BS on the second line
        return binary(arr, pivot, n - 1, k);
    }
    else
    {
        // BS on the first line
        return binary(arr, 0, pivot - 1, k);
    }
}
