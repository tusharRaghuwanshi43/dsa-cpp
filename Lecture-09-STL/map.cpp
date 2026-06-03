#include <iostream>
#include <map>

using namespace std;

int main()
{
    // map - stores key value pair in sorted order of keys
    map<int, string> m;

    // key is unique in map, if we insert a key which is already present, then the value will be updated
    // value can be duplicate
    // one key can have only one value, but one value can be associated with multiple keys
    m[1] = "Hello";
    m[13] = "Bonjour";
    m[2] = "Namaste";
    m.insert({5, "Are you there?"});
    cout << "before erase" << endl;

    // auto automatically detects the type of variable, in this case it will be pair<int, string>
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout << "finding -13 -> " << m.count(-13) << endl;
    // m.erase(13);
    cout << "after erase" << endl;

    // first - key, second - value
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
}