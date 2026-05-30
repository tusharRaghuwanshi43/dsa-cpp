#include <iostream>
using namespace std;
#include <climits>

int getmin(int arr[], int size)
{
    int mini = INT_MAX;
    for (int i = 0; i < size; i++)
    {

        //using pre-define function
        mini=min(mini,arr[i]);

        
        // if (arr[i] < min)
        // {
        //     min = arr[i];
        // }
    }
    // returning the min value
    return mini;
}

int getmax(int arr[], int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    // returning the max value
    return max;
}

int main()
{
    int size;
    cout << "enter the size of the array " << endl;
    cin >> size;
    int arr[100];

    // taking the input
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "max element of the array " << getmax(arr, size) << endl;
    cout << "min element of the array " << getmin(arr, size) << endl;

    return 0;
}