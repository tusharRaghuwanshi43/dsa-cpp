/*
Problem Link - https://www.geeksforgeeks.org/problems/rat-in-a-maze-problem/1
Problem Name - Rat in Maze
Level - Medium
*/
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution
{
private:
    // Check whether the next cell is safe to visit
    bool isSafe(vector<vector<int>> &m, int n, int x, int y,
                vector<vector<int>> &visited)
    {

        if ((x >= 0 && x < n) &&
            (y >= 0 && y < n) &&
            visited[x][y] == 0 &&
            m[x][y] == 1)
        {
            return true;
        }

        return false;
    }

    // Recursive backtracking function
    void solve(vector<vector<int>> &m, int n, int x, int y, vector<string> &ans, vector<vector<int>> &visited, string path)
    {

        // Base Case: Destination reached
        if (x == n - 1 && y == n - 1)
        {
            ans.push_back(path);
            return;
        }

        // Mark current cell as visited
        visited[x][y] = 1;

        // DOWN
        int newx = x + 1;
        int newy = y;
        if (isSafe(m, n, newx, newy, visited))
        {
            path.push_back('D');
            solve(m, n, newx, newy, ans, visited, path);
            path.pop_back();
        }

        // LEFT
        newx = x;
        newy = y - 1;
        if (isSafe(m, n, newx, newy, visited))
        {
            path.push_back('L');
            solve(m, n, newx, newy, ans, visited, path);
            path.pop_back();
        }

        // RIGHT
        newx = x;
        newy = y + 1;
        if (isSafe(m, n, newx, newy, visited))
        {
            path.push_back('R');
            solve(m, n, newx, newy, ans, visited, path);
            path.pop_back();
        }

        // UP
        newx = x - 1;
        newy = y;
        if (isSafe(m, n, newx, newy, visited))
        {
            path.push_back('U');
            solve(m, n, newx, newy, ans, visited, path);
            path.pop_back();
        }

        // Backtracking
        visited[x][y] = 0;
    }

public:
    vector<string> ratInMaze(vector<vector<int>> &m)
    {

        int n = m.size();
        vector<string> ans;

        // If starting cell is blocked
        if (m[0][0] == 0)
        {
            return ans;
        }

        int srcx = 0;
        int srcy = 0;

        // Create visited matrix
        vector<vector<int>> visited(n, vector<int>(n, 0));
        string path = "";
        solve(m, n, srcx, srcy, ans, visited, path);
        sort(ans.begin(), ans.end());

        return ans;
    }
};

int main()
{

    Solution obj;

    vector<vector<int>> maze = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}};

    vector<string> ans = obj.ratInMaze(maze);

    if (ans.empty())
    {
        cout << "No Path Exists" << endl;
    }
    else
    {
        cout << "Possible Paths:" << endl;

        for (string path : ans)
        {
            cout << path << endl;
        }
    }

    return 0;
}