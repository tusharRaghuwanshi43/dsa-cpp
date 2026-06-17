#include <iostream>
using namespace std;

/*
    ==========================================================
                Access Modifiers & Private Inheritance
    ==========================================================

    Concepts Demonstrated:
    ----------------------
    1. Encapsulation
       - Data members are hidden using private access.
       - Public member functions provide controlled access.

    2. Access Modifiers
       - private   : Accessible only within the same class.
       - public    : Accessible from anywhere through objects.

    3. Private Inheritance
       - When a class inherits privately, all inherited public and protected members become private inside the derived class.

    Class Hierarchy:
    ----------------

            Human
              |
              | (private inheritance)
              |
             Male

    Important:
    ----------
    Objects of Male cannot directly access the inherited
    members of Human because they become private inside Male.
*/

// ----------------------------------------------------------
// Base Class: Human
// ----------------------------------------------------------
class Human
{
private:
    int height; // Accessible only within Human
    int age;    // Accessible only within Human

public:
    int weight; // Public member

    // Constructor
    Human()
    {
        height = 170;
        age = 21;
        weight = 70;
    }

    // Getter for age
    int getAge()
    {
        return age;
    }

    // Getter for height
    int getHeight()
    {
        return height;
    }

    // Setter for weight
    void setWeight(int w)
    {
        weight = w;
    }

    // Getter for weight
    int getWeight()
    {
        return weight;
    }
};

// ----------------------------------------------------------
// Derived Class: Male
// Inherits Human privately
// ----------------------------------------------------------
class Male : private Human
{
public:
    string color;

    // Function specific to Male
    void sleep()
    {
        cout << "Male is Sleeping" << endl;
    }

    /*
        Since Human is inherited privately, its public members become private inside Male.

        Therefore, we create public wrapper functions to access Human's functionality.
    */

    int getPersonAge()
    {
        return getAge();
    }

    int getPersonHeight()
    {
        return Human::getHeight();
    }

    void updateWeight(int w)
    {
        setWeight(w);
    }

    int getPersonWeight()
    {
        return getWeight();
    }
};

int main()
{

    cout << "===== Private Inheritance Example =====\n"
         << endl;

    Male m1;

    // Setting derived class data member
    m1.color = "Brown";

    cout << "Color  : " << m1.color << endl;
    cout << "Age    : " << m1.getPersonAge() << endl;
    cout << "Height : " << m1.getPersonHeight() << " cm" << endl;
    cout << "Weight : " << m1.getPersonWeight() << " kg" << endl;

    cout << "\nUpdating Weight..." << endl;

    m1.updateWeight(84);

    cout << "Updated Weight : " << m1.getPersonWeight() << " kg" << endl;
    cout << endl;
    m1.sleep();
    return 0;
}