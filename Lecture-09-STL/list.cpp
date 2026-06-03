#include <iostream>
#include <list>

using namespace std;

int main()
{

    // list is a doubly linked list
    list<int> l;

    // list<int> n(5, 100) creates a list of 5 elements, each initialized to 100
    list<int> n(5, 100);
    cout << "Printing n" << endl;
    for (int i : n)
    {
        cout << i << " ";
    }
    cout << endl;
    //push_back adds an element to the end of the list
    //push_front adds an element to the front of the list
    l.push_back(1);
    l.push_front(2);
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;
    //erase removes an element from the list at the specified position(iterator)
    l.erase(l.begin());
    cout << "after erase" << endl;
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "size of list " << l.size() << endl;
    return 0;
}