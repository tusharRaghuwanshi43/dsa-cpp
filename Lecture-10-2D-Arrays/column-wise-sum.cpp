/*
Problem Link
*/

#include <iostream>
using namespace std;
#include <climits>

// column-wise using looping approach
void columnSum(int arr[][4], int r, int c)
{
    for (int i = 0; i < c; i++)
    {
        int sum = 0;
        for (int j = 0; j < r; j++)
        {
            sum += arr[j][i];
        }
        cout << "Sum of " << i << " column is : " << sum << endl;
    }
}

// maximum column value
void maxColumn(int arr[][4], int r, int c)
{
    int maxi = INT_MIN;
    int index = -1;
    for (int i = 0; i < c; i++)
    {
        int sum = 0;
        for (int j = 0; j < r; j++)
        {
            sum += arr[j][i];
        }
        if (sum > maxi)
        {
            maxi = sum;
            index = i;
        }
    }
    cout << "Maximum column value : " << maxi << endl;
    cout << "At column : " << index;
}

int main()
{
    int arr1[3][4] = {{1, 2, 3, 4}, {1, 2, 3, 4}, {11, 22, 33, 444}};
    columnSum(arr1, 3, 4);
    maxColumn(arr1, 3, 4);
    return 0;
}