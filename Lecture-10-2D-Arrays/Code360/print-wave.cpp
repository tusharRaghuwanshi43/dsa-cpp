/*
Problem Link - https://www.naukri.com/code360/problems/print-like-a-wave_893268
Prblem Name - Print Like A Wave
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> v;
    // Write your code here
    for (int i = 0; i < mCols; i++)
    {
        if (i & 1)
        {
            // odd index -> bottom to top
            for (int j = nRows - 1; j >= 0; j--)
            {
                v.push_back(arr[j][i]);
            }
        }
        else
        {
            for (int j = 0; j < nRows; j++)
            {
                v.push_back(arr[j][i]);
            }
        }
    }
    return v;
}

int main()
{
    int nRows, mCols;
    cout << "Enter the size: " << endl;
    cin >> nRows >> mCols;
    vector<vector<int>> arr(nRows, vector<int>(mCols));
    for (int i = 0; i < nRows; i++)
    {
        for (int j = 0; j < mCols; j++)
        {
            cin >> arr[i][j];
        }
    }
    vector<int> res = wavePrint(arr, nRows, mCols);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;
    return 0;
}