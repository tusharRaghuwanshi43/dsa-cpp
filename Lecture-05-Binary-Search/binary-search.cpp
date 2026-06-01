#include <iostream>
using namespace std;

int binary(int arr[], int n, int key)
{
    int start = 0, end = n - 1;
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

int main()
{
    int even[4] = {1, 2, 3, 4};
    int odd[5] = {1, 2, 3, 4, 5};

    cout << "Key is found in index " << binary(even, 4, 3) << endl;
    cout << "Key is found in index " << binary(odd, 5, 5) << endl;

    return 0;
}