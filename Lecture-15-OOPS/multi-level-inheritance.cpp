#include <iostream>
using namespace std;

/*
    ==========================================================
                    Multilevel Inheritance in C++
    ==========================================================

    Definition:
    -----------
    Multilevel Inheritance is a type of inheritance where a class is derived from another derived class.

    Inheritance Chain:
    ------------------

            Animal
               |
               ▼
              Dog
               |
               ▼
        GermanShepherd

    Here:
    - Animal is the Base Class.
    - Dog inherits from Animal.
    - GermanShepherd inherits from Dog.

    Therefore, GermanShepherd indirectly inherits all the accessible members of Animal through Dog.

    Benefits:
    ---------
    1. Code Reusability
    2. Logical Hierarchy
    3. Reduced Code Duplication
    4. Easier Maintenance
*/

// ----------------------------------------------------------
// Base Class: Animal
// ----------------------------------------------------------
class Animal
{
public:
    int age;
    int weight;

    // Common behavior shared by all animals
    void speak()
    {
        cout << "Animal is Speaking" << endl;
    }
};

// ----------------------------------------------------------
// Derived Class: Dog
// Inherits properties and behaviors of Animal
// ----------------------------------------------------------
class Dog : public Animal
{
public:
    // Dog-specific behavior
    void bark()
    {
        cout << "Dog is Barking" << endl;
    }
};

// ----------------------------------------------------------
// Derived Class: GermanShepherd
// Inherits from Dog and indirectly from Animal
// ----------------------------------------------------------
class GermanShepherd : public Dog
{
public:
    // German Shepherd-specific behavior
    void guard()
    {
        cout << "German Shepherd is Guarding" << endl;
    }
};

int main()
{

    cout << "===== Multilevel Inheritance Example =====\n"
         << endl;

    // Creating an object of the most derived class
    GermanShepherd germanShepherd;

    // Accessing members inherited from Animal
    germanShepherd.age = 5;
    germanShepherd.weight = 35;
    cout << "Age    : " << germanShepherd.age << " years" << endl;
    cout << "Weight : " << germanShepherd.weight << " kg" << endl;
    cout << endl;

    // Function inherited from Animal
    germanShepherd.speak();
    // Function inherited from Dog
    germanShepherd.bark();
    // Function defined in GermanShepherd
    germanShepherd.guard();

    return 0;
}
