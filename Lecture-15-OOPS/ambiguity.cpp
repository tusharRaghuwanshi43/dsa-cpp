#include <iostream>
using namespace std;

/*
    =====================================================
    Multiple Inheritance and Ambiguity Resolution in C++
    =====================================================

    Problem:
    --------
    When a derived class inherits from multiple base classes that contain functions with the same name, the compiler becomes confused about which function should be called.

    This situation is known as:
        "Inheritance Ambiguity"

    Solution:
    ---------
    Use the Scope Resolution Operator (::) to explicitly specify the base class whose function you want to call.
*/

// Base Class A
class A
{
public:
    void func()
    {
        cout << "I am Class A" << endl;
    }
};

// Base Class B
class B
{
public:
    void func()
    {
        cout << "I am Class B" << endl;
    }
};

// Derived Class inheriting from both A and B
class C : public A, public B
{
    // No additional members required for this example
};

int main()
{

    // Creating an object of the derived class
    C obj;
    /*
        The following statement would produce an error:
        obj.func();

        Reason:
        Both class A and class B contain a function named 'func()'.
        The compiler cannot determine which one to call.
    */

    // Explicitly calling A's version of func()
    obj.A::func();

    // Explicitly calling B's version of func()
    obj.B::func();

    return 0;
}