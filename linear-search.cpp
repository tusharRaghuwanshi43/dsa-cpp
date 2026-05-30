#include <iostream>
using namespace std;

bool linearsearch(int arr[], int size, int key)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key) // checking the key element with the array
        // using ==(Equality Operator)
        {
            cout << "Key is found at location " << i << endl;
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[10] = {1, 5, 6, -1, 34, 5, 6, 7, 8, 10};
    cout << "Array elements: " << endl;
    for (int i = 0; i < 10; i++)
    { // printing the array
        cout << arr[i] << " ";
    }

    int key; // taking the input of key element to search
    cout << endl
        << "enter the element to search: " << endl;
    cin >> key;

    // defining the linearsearch function
    bool found = linearsearch(arr, 10, key);
    if (!found)
    { //! found is found == false
        cout << "key is not found in the array" << endl;
    }

    return 0;
}