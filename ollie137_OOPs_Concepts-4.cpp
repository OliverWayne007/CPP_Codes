#include<bits/stdc++.h>
using namespace std;

class Account
{
    private:

    int balance;        // Instance member variable/Object variable
    static float roi;   // Static member variable/Class variable

    // Memory is not allocated to a static member variable just by declaring it inside the class. It has to be defined outside
    // the class as shown below. Only then, memory is allocated to the static member variable;
    // Only one copy of the static variables exists throughout the program.
    // Static member variables are class variables not instance variables.
    // Static member variables can be accessed with or without an object i.e. object is not required to access the static member
    // variable.
    // The scope of a static variable is throughout the program.
    // Static variables are by default initialized with zero, if not initialized explicitly.
    // Private and Protected Static member variables cannot be accessed outside the class directly with or without objects.
    // In order to access a private or protected static member variable, there should be a public static function in the class.
    // Static functions can only access other static functions and variables.
    // Non-Static functions can access both static as well as non-static member functions and variables.
    // Non-Static variables of a class are called "instance-variables" because they are linked to the specific objects.
    // Static variables are also called "class-variables" because they are not linked to specific objects rather they belong to 
    // the class itself and are common for all the objects of the class.

    public:

    void Set_Balance(int bal)
    {
        balance = bal;
    }
};

float Account :: roi = 3.5;

int main()
{
    // cout << Account :: roi << endl;
    return 0;
}