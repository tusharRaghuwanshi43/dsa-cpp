#include <iostream>
using namespace std;

/*
    ==========================================================
                    Multiple Inheritance in C++
    ==========================================================

    Definition:
    -----------
    Multiple Inheritance is a type of inheritance in which a single derived class inherits from more than one base class.

    Inheritance Structure:
    ----------------------

            Animal          Human
               \             /
                \           /
                 \         /
                  \       /
                   Hybrid

    Here:
    - Hybrid inherits from Animal.
    - Hybrid also inherits from Human.
    - Therefore, Hybrid can access the members of both
      base classes.

    Advantages:
    -----------
    1. Code Reusability
    2. Combines features from multiple classes
    3. Models real-world relationships effectively

    Note:
    -----
    Multiple inheritance can sometimes lead to ambiguity if two base classes contain members with the same name.
    Such ambiguity can be resolved using the Scope Resolution Operator (::).
*/

// ----------------------------------------------------------
// Base Class: Animal
// ----------------------------------------------------------
class Animal
{
public:
    int age;
    int weight;

    // Behavior specific to animals
    void bark()
    {
        cout << "Animal is Barking" << endl;
    }
};

// ----------------------------------------------------------
// Base Class: Human
// ----------------------------------------------------------
class Human
{
public:
    string color;

    // Behavior specific to humans
    void speak()
    {
        cout << "Human is Speaking" << endl;
    }
};

// ----------------------------------------------------------
// Derived Class: Hybrid
// Inherits from both Animal and Human
// ----------------------------------------------------------
class Hybrid : public Animal, public Human
{

    // Hybrid inherits:
    // - age, weight, bark() from Animal
    // - color, speak() from Human
};

int main()
{

    cout << "===== Multiple Inheritance Example =====\n"
         << endl;

    // Creating an object of Hybrid
    Hybrid obj1;

    // Accessing members inherited from Animal
    obj1.age = 5;
    obj1.weight = 30;

    // Accessing member inherited from Human
    obj1.color = "Brown";
    cout << "Age    : " << obj1.age << " years" << endl;
    cout << "Weight : " << obj1.weight << " kg" << endl;
    cout << "Color  : " << obj1.color << endl;

    cout << endl;

    // Function inherited from Human
    obj1.speak();
    // Function inherited from Animal
    obj1.bark();

    return 0;
}
