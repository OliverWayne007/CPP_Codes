#include<bits/stdc++.h>
using namespace std;

/*

NOTES: 

(1) Friend function is not a member function of the class to which it is a friend.

(2) Friend function is declared inside the class with a friend keyword, but defined outside the class.

(3) Friend function can access any member of the class to which it is a friend.

(4) Friend function cannot accesss members of the class directly.

(5) Since friend function is not a member of the class to which it is a friend, therefore, 
    it does not have any caller object. This means that a friend function cannot be called with 
    the help of an object of the class to which it is a friend. Using objects, we can only 
    access the member functions of the class, not non-member functions.

(6) Friend functions are defined without a membership label outside the class. Only member
    functions are defined with a membership label outside the class and friend function is not
    a member function.

(7) Every object of a class has its own set of instance member variables and 
    instance member functions. Function belonging to which object of the class has to be 
    executed depends on which object of that class is calling that function 
    i.e. it depends on the caller object. But, since a friend function is not an instance
    member function, it is common for all the objects of that class i.e. the same friend
    function is shared by all the objects of that class. Since, a friend function does not have
    a caller object, it is not directly clear as to which object is calling the friend function.
    Inorder to solve this problem of non-determinism, we pass the object as an argument to the 
    friend function.

(8) Friend function can be declared as private , public or protected. Access modifiers do not
    have any affect on the accessibility of the friend function because friend function is not
    a member function of the class. Access modifiers can only affect the accessibility of the
    member functions not non-member functions.

(9) A Friend function can be a friend to many classes. 

(10) Friend function can be used to access the private or protected members of two or more
    classes simultaneously to which it is a friend. This is not possible with any member 
    function. 

*/

class Myclass
{
    private:

    int a , b;

    public:

    // Default constructor
    Myclass()
    {
        cout << "Hi !!! I am a default constructor !!!" << endl;
    }

    // Parameterized constructor 
    Myclass(int x , int y)
    {
        cout << "Hi !!! I am a parameterized constructor !!!" << endl;
        this -> a = x;
        this -> b = y;
    }

    void set_data(int x , int y)
    {
        a = x;
        b = y;
    }

    void show_data()
    {
        cout << "a: " << a << endl;
        cout << "b: " << b << endl;
    }
    
    // Declaration of friend function fun1
    friend void fun1();

    // Declaration of friend function fun2
    friend void fun2(Myclass);
};

void fun1()
{
    cout << "Hi !!! Iam a friend function of Myclass !!!" << endl;
}

void fun2(Myclass c)
{
    cout << "Sum: " << c.a + c.b << endl;
}

int main()
{
    cout << endl;
    
    Myclass c1 , c2(2 , 3) , c3(4 , 5);

    cout << endl;

    c1.set_data(10 , 20);

    cout << endl;

    fun1();

    cout << endl;

    fun2(c1);

    cout << endl;

    return 0;
}