#include <iostream>
using namespace std;

/*
    Macro Definition

    Wherever PI appears in the code,
    the preprocessor replaces it with 3.14
    before compilation.

    Example:

    PI * r * r

    becomes

    3.14 * r * r
*/
#define PI 3.14

int main()
{
    // Radius of circle
    int r = 5;

    /*
        Alternative approach:
        double pi = 3.14;
        But using a macro saves memory because
        no variable is created.
    */

    // Formula: Area = πr²
    double area = PI * r * r;
    cout << "Area is " << area << endl;
    return 0;
}