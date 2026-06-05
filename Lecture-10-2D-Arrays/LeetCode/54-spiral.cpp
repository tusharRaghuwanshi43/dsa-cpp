/*
Problem Link - https://leetcode.com/problems/spiral-matrix/description/
Problem Name - 54. Spiral Matrix
Level -Medium
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        int row = matrix.size();    // row
        int col = matrix[0].size(); // column

        vector<int> ans;
        int count = 0;
        int total = row * col;
        int startRow = 0;
        int startCol = 0;
        int endRow = row - 1;
        int endCol = col - 1;

        while (count < total)
        {

            // prinnting the starting row
            for (int i = startCol; count < total && i <= endCol; i++)
            {
                ans.push_back(matrix[startRow][i]);
                count++;
            }
            startRow++;

            // printing the end col
            for (int i = startRow; i <= endRow && count < total; i++)
            {
                ans.push_back(matrix[i][endCol]);
                count++;
            }
            endCol--;

            // printing the end row
            for (int i = endCol; i >= startCol && count < total; i--)
            {
                ans.push_back(matrix[endRow][i]);
                count++;
            }
            endRow--;

            // printing the start col
            for (int i = endRow; i >= startRow && count < total; i--)
            {
                ans.push_back(matrix[i][startCol]);
                count++;
            }
            startCol++;
        }
        return ans;
    }
};

int main()
{
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    Solution s;
    vector<int> ans = s.spiralOrder(matrix);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}
