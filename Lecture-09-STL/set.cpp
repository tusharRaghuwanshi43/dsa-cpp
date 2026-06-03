#include <iostream>
#include <set>

using namespace std;

int main()
{
    // set is a sorted container which does not allow duplicates
    set<int> s;

    // insert elements in the set
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(0);
    s.insert(0);
    s.insert(0);
    for (int i : s)
    {
        cout << i << endl;
    }
    cout << endl;

    // iterator means pointer to the element of the set, we can use it to traverse the set
    // definition of iterator is set<int>::iterator it; it is a pointer to the element of the set
    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);
    for (int i : s)
    {
        cout << i << endl;
    }
    cout << endl;
    cout << "-5 is present or not -> " << s.count(-5) << endl;

    // find - It returns an iterator pointing to the found element. If the element is not found, it returns an iterator pointing to the end of the set.
    set<int>::iterator itr = s.find(5);
    for (set<int>::iterator it = itr; it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}