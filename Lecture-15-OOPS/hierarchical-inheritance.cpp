#include <iostream>
using namespace std;

/*
    ==========================================================
                    Hierarchical Inheritance in C++
    ==========================================================

    Definition:
    -----------
    Hierarchical Inheritance is a type of inheritance in which
    multiple derived classes inherit from a single base class.

                        +-----------+
                        |  Class A  |
                        +-----------+
                         /         \
                        /           \
                       /             \
              +-----------+     +-----------+
              |  Class B  |     |  Class C  |
              +-----------+     +-----------+

    Key Points:
    -----------
    1. Class A acts as the Base Class.
    2. Classes B and C are Derived Classes.
    3. Both B and C inherit the members of A.
    4. This promotes code reusability and reduces redundancy.
*/

// ----------------------------------------------------------
// Base Class
// ----------------------------------------------------------
class A
{
public:
    // Common function inherited by all derived classes
    void func1()
    {
        cout << "Inside Function 1 (Class A)" << endl;
    }
};

// ----------------------------------------------------------
// Derived Class B
// Inherits all public members of Class A
// ----------------------------------------------------------
class B : public A
{
public:
    // Function specific to Class B
    void func2()
    {
        cout << "Inside Function 2 (Class B)" << endl;
    }
};

// ----------------------------------------------------------
// Derived Class C
// Inherits all public members of Class A
// ----------------------------------------------------------
class C : public A
{
public:
    // Function specific to Class C
    void func3()
    {
        cout << "Inside Function 3 (Class C)" << endl;
    }
};

// ----------------------------------------------------------
// Main Function
// ----------------------------------------------------------
int main()
{

    cout << "===== Base Class Object =====" << endl;

    // Object of Base Class
    A object1;
    object1.func1();

    cout << "\n===== Derived Class B Object =====" << endl;

    // Object of Derived Class B
    B object2;

    // Inherited from Class A
    object2.func1();

    // Defined in Class B
    object2.func2();

    cout << "\n===== Derived Class C Object =====" << endl;

    // Object of Derived Class C
    C object3;

    // Inherited from Class A
    object3.func1();

    // Defined in Class C
    object3.func3();

    return 0;
}
