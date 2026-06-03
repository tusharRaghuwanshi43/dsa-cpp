#include <iostream>
// array stl is a container that encapsulates fixed size arrays. It is a wrapper around c style array and provides more functionality and safety features. It is defined in the <array> header file and is part of the C++11 standard.
#include <array>
using namespace std;

int main()
{
    int arr[4] = {1, 2, 3, 4};

    // creating an array of size 4 and initializing it with values
    array<int, 4> a = {1, 2, 3, 4};

    // accessing elements of the array using index operator
    int size = a.size();
    for (int i = 0; i < size; i++)
    {

        cout << a[i] << " ";
    }
    cout << endl;
    // accessing elements of the array using at() function
    cout << "element at index 2 is: " << a.at(2) << endl;
    // empty() function returns true if the array is empty, false otherwise
    cout << "array is empty or not " << a.empty() << endl;
    // front() function returns the first element of the array, back() function returns the last element of the array
    cout << "first element of the array: " << a.front() << endl;
    cout << "last element of the array: " << a.back() << endl;
    return 0;
}