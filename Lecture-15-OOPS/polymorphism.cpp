#include <iostream>
using namespace std;

/*
    ==========================================================
                    POLYMORPHISM IN C++
    ==========================================================

    Polymorphism means "many forms".

    It allows the same function, operator, or interface to behave differently in different situations.

    Types of Polymorphism:
    ----------------------
    1. Compile-Time Polymorphism (Static Polymorphism)
       - Function Overloading
       - Operator Overloading

    2. Run-Time Polymorphism (Dynamic Polymorphism)
       - Function Overriding
       - Virtual Functions

    This program demonstrates:
    ✔ Function Overloading
    ✔ Operator Overloading
    ✔ Function Overriding
*/

// ==========================================================
// FUNCTION OVERLOADING
// ==========================================================

class A
{
public:
    // Function with no parameters
    void sayHello()
    {
        cout << "Hello!" << endl;
    }

    // Function with char parameter
    int sayHello(char name)
    {
        cout << "Hello from Character Overload" << endl;
        return 1;
    }

    // Function with string parameter
    void sayHello(string name)
    {
        cout << "Hello " << name << endl;
    }
};

/*
    Function Overloading:
    ---------------------
    Same function name, Different parameter list.

    The compiler decides which function to call during compilation.
*/

// ==========================================================
// OPERATOR OVERLOADING
// ==========================================================

class B
{
public:
    int a;
    int b;

    // Normal member function
    int add()
    {
        return a + b;
    }

    /*
        Overloading '+' operator

        Normally:
            obj1 + obj2

        calls the built-in addition operator.

        Here we redefine its behavior for objects of class B.
    */
    void operator+(B &obj)
    {
        cout << "Operator '+' Overloaded" << endl;

        int value1 = this->a;
        int value2 = obj.a;

        cout << "Difference = " << value2 - value1 << endl;
    }

    /*
        Overloading Function Call Operator ()

        Allows an object to behave like a function.
    */
    void operator()()
    {
        cout << "Function Call Operator Overloaded" << endl;
        cout << "Value of a = " << this->a << endl;
    }
};

/*
    Operator Overloading:
    ---------------------
    Giving a new meaning to existing operators for user-defined data types.

    Examples:
        +  -  *  /  ()
*/

// ==========================================================
// FUNCTION OVERRIDING
// ==========================================================

class Animal
{
public:
    void speak()
    {
        cout << "Animal is Speaking" << endl;
    }
};

class Dog : public Animal
{
public:
    /*
        Function Overriding

        Dog provides its own implementation of speak().
    */
    void speak()
    {
        cout << "Dog is Barking" << endl;
    }
};

/*
    Function Overriding:
    --------------------
    A derived class redefines a function already present in the base class.

    This is the basis of Runtime Polymorphism.

    Note:
    -----
    For true runtime polymorphism, the base class function should be 'virtual'.
*/

int main()
{

    cout << "==================================" << endl;
    cout << "Function Overriding Example" << endl;
    cout << "==================================" << endl;

    Dog dog;
    dog.speak();

    /*
    ======================================================
    Function Overloading Example
    ======================================================
    */

    A obj;

    obj.sayHello();
    obj.sayHello('A');
    obj.sayHello("Ansh");

    /*
    ======================================================
    Operator Overloading Example
    ======================================================
    */

    B obj1, obj2;

    obj1.a = 4;
    obj2.a = 7;

    obj1 + obj2; // Calls overloaded +
    obj1();      // Calls overloaded ()

    return 0;
}