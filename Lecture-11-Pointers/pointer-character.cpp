#include <iostream>
using namespace std;

int main()
{
    // ================= INTEGER ARRAY =================

    int arr[5] = {1, 2, 3, 4, 5};
    // Array name gives address of first element
    cout << "Integer array address: " << arr << endl;
    // Same thing
    cout << "Address of first element: " << &arr[0] << endl;

    // ================= CHARACTER ARRAY =================

    char ch[6] = "abcde";
    // Special behaviour:
    // For char arrays, cout treats them as strings
    cout << "Character array output: " << ch << endl;
    // Output:
    // abcde
    // NOT the address!

    // ================= CHARACTER POINTER =================

    char *c = &ch[0];
    // Since c points to a character array,
    // cout prints until '\0' is found
    cout << "Character pointer output: " << c << endl;
    // Output:
    // abcde

    // ================= SINGLE CHARACTER =================

    char temp = 'z';
    char *p = &temp;
    // cout prints until '\0' is found
    cout << "Single character pointer: " << p << endl;

    /*
    DANGER!
    cout expects p to point to a complete string. It starts printing from address of tempand keeps reading memory until it finds '\0'.
    Output may be:
    z
    zabc
    z▒▒▒
    garbage
    This is undefined behaviour.
    */
    return 0;
}