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

void reverse(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);  // using swap function
        // int temp=arr[start];
        // arr[start]=arr[end];
        // arr[end]=temp;
        start++;
        end--;
    }
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    int brr[6] = {1, 2, 3, 4, 5, 6};

    cout << "printing the array: " << endl;
    printArray(arr, 5);
    printArray(brr, 6);

    reverse(arr, 5);
    reverse(brr, 6);

    cout << "reverse array: " << endl;
    printArray(arr, 5);
    printArray(brr, 6);

    return 0;
}