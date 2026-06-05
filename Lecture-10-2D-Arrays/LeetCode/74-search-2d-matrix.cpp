/*
Problem Link - https://leetcode.com/problems/search-a-2d-matrix/description/
Problem Name - 74. Search a 2D Matrix
Level - Medium
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int row = matrix.size();
        int col = matrix[0].size();
        int s = 0;
        int e = row * col - 1;
        int mid = s + (e - s) / 2;
        while (s <= e)
        {
            int element = matrix[mid / col][mid % col];
            if (element == target)
            {
                return 1;
            }
            else if (element < target)
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
            mid = s + (e - s) / 2;
        }
        return 0;
    }
};

int main()
{
    vector<vector<int>> matrix = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int target = 3;
    Solution s;
    bool ans = s.searchMatrix(matrix, target);
    cout << ans << endl;
    return 0;
}