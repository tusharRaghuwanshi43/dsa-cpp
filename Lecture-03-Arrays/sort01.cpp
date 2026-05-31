#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sort01(int arr[], int n)
{
    int left = 0, right = n - 1;

    while (left < right)
    {
        if (arr[left] == 0)
        {
            left++;
        }
        else if (arr[right] == 1)
        {
            right--;
        }
        else if (arr[left] == 1 && arr[right] == 0)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
        else
        {
            cout << "error";
        }
    }
}

int main()
{
    int arr[6] = {0, 1, 1, 1, 0, 0};

    cout << "before sort:" << endl;
    printArray(arr, 6);
    sort01(arr, 6);
    cout << "after sort:" << endl;
    printArray(arr, 6);

    return 0;
}