#include <iostream>
using namespace std;

/*
    ==========================================================
                    Single Inheritance in C++
    ==========================================================

    Definition:
    -----------
    Single Inheritance is a type of inheritance where a derived class inherits from exactly one base class.

    Inheritance Hierarchy:
    ----------------------

            Animal
               |
               |
               ▼
              Dog

    Here:
    - Animal is the Base Class.
    - Dog is the Derived Class.
    - Dog inherits all accessible members of Animal.

    Benefits:
    ---------
    1. Code Reusability
    2. Reduced Code Duplication
    3. Better Code Organization
    4. Easy Maintenance
*/

// ----------------------------------------------------------
// Base Class: Animal
// ----------------------------------------------------------
class Animal
{
public:
    int age;
    int weight;

    // Constructor to initialize data members
    Animal()
    {
        age = 5;
        weight = 20;
    }

    // Common behavior shared by all animals
    void speak()
    {
        cout << "Animal is Speaking" << endl;
    }
};

// ----------------------------------------------------------
// Derived Class: Dog
// Inherits all public members of Animal
// ----------------------------------------------------------
class Dog : public Animal
{

    // Dog automatically inherits:
    // - age
    // - weight
    // - speak()
};

int main()
{

    cout << "===== Single Inheritance Example =====\n"
         << endl;
    // Creating an object of the derived class
    Dog dog;

    // Accessing inherited member function
    dog.speak();
    cout << endl;

    // Accessing inherited data members
    cout << "Age    : " << dog.age << " years" << endl;
    cout << "Weight : " << dog.weight << " kg" << endl;

    return 0;
}
