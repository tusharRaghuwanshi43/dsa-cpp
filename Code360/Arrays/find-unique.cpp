/*
Problem Link - https://www.naukri.com/code360/problems/find-unique_625159
Problem name - Find Unique
*/ 

int findUnique(int *arr, int size)
{
    // Write your code here
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}