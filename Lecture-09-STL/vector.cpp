#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // vector is a dynamic array which can grow and shrink in size
    vector<int> v;

    vector<int> a(5, 1); // 5 elements with value 1
    vector<int> last(a); // copy the vector a to last

    // print the elements of vector a
    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;

    // print the elements of vector last
    for (int i : last)
    {
        cout << i << " ";
    }
    cout << endl;

    // capacity is the total number of elements that can be stored in the vector without resizing
    cout << "Capacity-> " << v.capacity() << endl;

    // push_back is used to add an element at the end of the vector
    v.push_back(1);
    cout << "Capacity-> " << v.capacity() << endl;
    v.push_back(2);
    cout << "Capacity-> " << v.capacity() << endl;
    v.push_back(3);
    cout << "Capacity-> " << v.capacity() << endl;

    // size is the number of elements currently stored in the vector
    cout << "Size-> " << v.size() << endl;
    cout << "Element at 2nd Index " << v.at(2) << endl;
    cout << "front " << v.front() << endl;
    cout << "back " << v.back() << endl;

    // pop_back is used to remove the last element of the vector
    cout << "before pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    v.pop_back();
    cout << "after pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "before clear size " << v.size() << endl;

    // clear is used to remove all the elements from the vector
    v.clear();
    cout << "after clear size " << v.size() << endl;
    return 0;
}