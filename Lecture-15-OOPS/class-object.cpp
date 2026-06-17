/*
------------------------------------------------------------
Description : Demonstrates important OOP concepts in C++
              - Class & Objects
              - Constructors
              - Parameterized Constructors
              - Copy Constructor (Deep Copy)
              - Destructor
              - Static Data Members
              - Static Member Functions
              - Dynamic Memory Allocation
------------------------------------------------------------
*/

// #include "import-class.cpp"
// Import class from the another file.

#include <iostream>
#include <cstring>
using namespace std;

class Hero
{
private:
    int health;

public:
    char *name;
    char level;

    // Shared by all Hero objects
    static int timeToComplete;

    /*
    --------------------------------------------------------
    Default Constructor
    Allocates memory for the name field.
    --------------------------------------------------------
    */
    Hero()
    {
        cout << "Default Constructor Called" << endl;
        name = new char[100];
    }

    /*
    --------------------------------------------------------
    Parameterized Constructor
    Initializes health only.
    --------------------------------------------------------
    */
    Hero(int health)
    {
        this->health = health;
        name = new char[100];
    }

    /*
    --------------------------------------------------------
    Parameterized Constructor
    Initializes both health and level.
    --------------------------------------------------------
    */
    Hero(int health, char level)
    {
        this->health = health;
        this->level = level;
        name = new char[100];
    }

    /*
    --------------------------------------------------------
    Deep Copy Constructor

    Creates a separate memory block for the copied object's
    name to avoid shallow copy issues.
    --------------------------------------------------------
    */
    Hero(Hero &temp)
    {
        cout << "Copy Constructor Called" << endl;

        // strlen() -> Returns the length of a C-string.
        name = new char[strlen(temp.name) + 1];
        // strcpy() -> Copies one string into another.
        strcpy(name, temp.name);

        this->health = temp.health;
        this->level = temp.level;
    }

    /*
    --------------------------------------------------------
    Utility Function
    Prints the details of a Hero object.
    --------------------------------------------------------
    */
    void print() const
    {
        cout << "\n[ Name   : " << name
             << "\n  Health : " << health
             << "\n  Level  : " << level
             << " ]\n"
             << endl;
    }

    /*
    --------------------------------------------------------
    Getters
    --------------------------------------------------------
    */
    int getHealth() const
    {
        return health;
    }

    char getLevel() const
    {
        return level;
    }

    /*
    --------------------------------------------------------
    Setters
    --------------------------------------------------------
    */
    void setHealth(int health)
    {
        this->health = health;
    }

    void setLevel(char level)
    {
        this->level = level;
    }

    void setName(const char name[])
    {
        strcpy(this->name, name);
    }

    /*
    --------------------------------------------------------
    Static Member Function

    Can access only static members directly.
    No object creation required.
    --------------------------------------------------------
    */
    static int getTimeToComplete()
    {
        return timeToComplete;
    }

    /*
    --------------------------------------------------------
    Destructor

    Releases dynamically allocated memory.
    Prevents memory leaks.
    --------------------------------------------------------
    */
    ~Hero()
    {
        delete[] name;
        cout << "Destructor Called" << endl;
    }
};

/*
------------------------------------------------------------
Static Member Definition
Memory allocated outside the class.
------------------------------------------------------------
*/
int Hero::timeToComplete = 5;

int main()
{
    cout << "========== STATIC MEMBERS ==========\n"
         << endl;

    cout << "Time To Complete : "
         << Hero::timeToComplete << endl;

    cout << "Using Static Function : "
         << Hero::getTimeToComplete() << endl;

    cout << "\n========== OBJECT CREATION ==========\n"
         << endl;

    Hero hero1;

    hero1.setHealth(100);
    hero1.setLevel('A');
    hero1.setName((char *)"Tushar");

    hero1.print();

    cout << "Size of Hero Object : "
         << sizeof(hero1)
         << " bytes\n"
         << endl;

    cout << "========== COPY CONSTRUCTOR ==========\n"
         << endl;

    Hero hero2(hero1);

    cout << "Original Object:" << endl;
    hero1.print();

    cout << "Copied Object:" << endl;
    hero2.print();

    /*
    Modifying hero1 should not affect hero2
    because we are using deep copy.
    */
    hero1.name[0] = 'M';

    cout << "After Modifying hero1:" << endl;

    cout << "\nhero1 :" << endl;
    hero1.print();

    cout << "hero2 :" << endl;
    hero2.print();

    cout << "========== PARAMETERIZED CONSTRUCTORS ==========\n"
         << endl;

    Hero hero3(90);
    hero3.setName((char *)"Rohan");
    hero3.setLevel('B');

    hero3.print();

    Hero hero4(75, 'C');
    hero4.setName((char *)"Rahul");

    hero4.print();

    cout << "========== DYNAMIC OBJECT ==========\n"
         << endl;

    Hero *hero5 = new Hero(120, 'S');
    hero5->setName((char *)"DynamicHero");

    hero5->print();

    /*
    Manually releasing heap memory.
    Destructor will be called.
    */
    delete hero5;

    cout << "\n========== PROGRAM END ==========\n"
         << endl;

    return 0;
}