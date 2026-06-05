/*
Problem Link - https://leetcode.com/problems/search-a-2d-matrix-ii/description/
Problem Name - 240. Search a 2D Matrix II
Level - Medium
Example
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
        int i = 0;
        int j = col - 1;
        while (i < row && col >= 0)
        {
            int element = matrix[i][j];
            if (element == target)
            {
                return 1;
            }
            else if (element < target)
            {
                i++;
            }
            else
            {
                j--;
            }
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