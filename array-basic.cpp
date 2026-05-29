#include <iostream>
using namespace std;

// Function to print all elements of an array
void printArray(int arr[], int size)
{
    cout << "Printing the array elements:" << endl;

    // Loop through each index and print the value
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl
         << "Array printing completed." << endl;
}

int main()
{
    // Array declaration
    // This creates an integer array of size 4.
    // Values are NOT initialized, so they contain garbage values.
    int arr1[4];

    // Array initialization
    // First 4 elements are initialized.
    // Remaining elements are automatically set to 0.
    int arr[10] = {12, 22, 33, 55};

    // Accessing array elements using index numbers
    // Indexing starts from 0 in C++.

    // Since arr1 is uninitialized, it may print a garbage value.
    cout << "Value at index 2 in arr1: " << arr1[2] << endl;

    // arr is initialized, so index 2 contains the value 33.
    cout << "Value at index 2 in arr: " << arr[2] << endl;

    // Printing the array
    int n = 10;

    // Remaining unused positions are automatically filled with 0.
    printArray(arr, n);

    // Initializing all elements with 0
    // Special shortcut: all positions become 0.
    int arr2[10] = {0};

    n = 10;
    printArray(arr2, n);

    // Initializing first element with 1
    // Remaining elements become 0 automatically.
    int arr3[10] = {1};

    n = 10;
    printArray(arr3, n);

    // Finding size of the array
    int sizearray = sizeof(arr3) / sizeof(int);
    cout << "Size of arr3 is " << sizearray << endl;

    // Creating a character type array
    //same for the double and float
    char ch[11] = {'a', 'b', 'c', 'd'};
    for (int i = 0; i < 4; i++)
    {
        cout << ch[i] << " ";
    }
    cout << endl;

    return 0;
}