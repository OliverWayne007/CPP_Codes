#include<bits/stdc++.h>
using namespace std;

/* ---------------------------------------- Everything About Constructors --------------------------------------------------- */

// Constructor is a member function of a class.
// The name of a constructor is same as the name of the classs.
// A Constructor is implicitly invoked when an object is created.
// If no user-defined constructor is present, the compiler/system implicitly creates a default constructor and a copy constructor.
// If any user-defined constructor, other than a copy constructor is already present, the compiler will not create a default constructor
// but it will still create a copy constructor.
// If a user-defined copy constructor is created by the user then, the compiler will not create any constructor.
// A constructor does not have a return type.
// A constructor cannot be static because it is linked to an object of the class.
// Constructor is used to solve the problem of initialization.
// A constructor can be overloaded.
// Types of constructors: Default , Parameterized , Copy.
// Default Constructor: Constructor in with no arguments.
// Parameterized constructor: Constructor with one or more than one arguments.
// Copy Constructor: Constructor with an object of the same class as an argument.
// Only one of the above constructors is invoked during object creation based on the parameters passed.
// A constructor is invoked everytime an object is created.
// If more than one constructors are created in a class then it is the case of constructor overloading because
// all the constructors have the same name.

class Demo
{
    private:

    int a , b;

    public:

    // Default Constructor
    Demo()
    {
        cout << "Iam a user-defined default constructor !!!" << endl;
    }

    // Parameterized Constructor
    Demo(int x , int y)
    {
        cout << "Iam a parameterized constructor !!!" << endl;
        this -> a = x;
        this -> b = y;
    }

    // Copy Constructor
    Demo(Demo &c)
    {
        cout << "Hi ! I am a user-defined copy constructor !!!" <<  endl;
        this -> a = c.a;
        this -> b = c.b;
    }

    // setData function
    void setData(int x , int y)
    {
        this -> a = x;
        this -> b = y;
    }

    // getData function
    void getData()
    {
        cout << "The value of a is: " << this -> a << endl;
        cout << "The value of b is: " << this -> b << endl;
    }

};

int main()
{
    cout << endl; 
    
    Demo d1;
    d1.setData(4 , 5);
    d1.getData();

    cout << endl;

    Demo d2(2 , 3);
    d2.getData();

    cout << endl;

    Demo d3(d1);
    d3.getData();

    cout << endl;
    return 0;
}