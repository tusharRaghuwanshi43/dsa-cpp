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

void alternative(int arr[], int n)
{
    int start = 0;
    int second= 1;
    while (second <n)
    {
        swap(arr[start], arr[second]);  // using swap function
        // int temp=arr[start];
        // arr[start]=arr[end];
        // arr[end]=temp;
        start+=2;
        second+=2;
    }
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    int brr[6] = {1, 2, 3, 4, 5, 6};

    cout << "printing the array: " << endl;
    printArray(arr, 5);
    printArray(brr, 6);

    alternative(arr, 5);
    alternative(brr, 6);

    cout << "swap alternative elements in array: " << endl;
    printArray(arr, 5);
    printArray(brr, 6);

    return 0;
}