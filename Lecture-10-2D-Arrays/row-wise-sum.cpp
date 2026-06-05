#include <iostream>
#include <climits>
using namespace std;

// row-wise using looping approach
void romSum(int arr[][4], int r, int c)
{
    for (int i = 0; i < r; i++)
    {
        int sum = 0;
        for (int j = 0; j < c; j++)
        {
            sum += arr[i][j];
        }
        cout << "Sum of " << i << " row is : " << sum << endl;
    }
}

// maximum row value
void maxColumn(int arr[][4], int r, int c)
{
    int maxi = INT_MIN;
    int index = -1;
    for (int i = 0; i < r; i++)
    {
        int sum = 0;
        for (int j = 0; j < c; j++)
        {
            sum += arr[i][j];
        }
        if (sum > maxi)
        {
            maxi = sum;
            index = i;
        }
    }
    cout << "Maximum row value : " << maxi << endl;
    cout << "At row : " << index;
}

int main()
{
    int arr1[3][4] = {{1, 2, 3, 4}, {1, 2, 3, 4}, {11, 22, 33, 444}};
    romSum(arr1, 3, 4);
    maxColumn(arr1, 3, 4);
    return 0;
}