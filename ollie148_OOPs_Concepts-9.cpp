#include<bits/stdc++.h>
using namespace std;

// Adding Two Complex Numbers

class Complex
{
    private:

    int a , b;

    public:

    Complex add(Complex& c)
    {
        Complex c3;
        c3.a = this -> a + c.a;
        c3.b = this -> b + c.b;
        return c3;
    }

    void setData(int x , int y)
    {
        this -> a = x;
        this -> b = y;
    }

    void getData()
    {
        cout << this -> a << " " << this -> b << endl;
    }

};

int main()
{
    Complex c1 , c2 , c3;
    c1.setData(3 , 4);
    c2.setData(5 , 6);
    c3 = c1.add(c2);
    c3.getData();
    return 0;
}

// Question: In the add function, we are directly accessing the private data members of the Complex object 'c' using 'c.a' and 'c.b'.

// Ans: 
//  (1) The add method is a member function of the Complex class.
//  (2) In C++, member functions of a class can access the private data members of other objects of the same class.

// In this code:

// The Complex class has a private data member a (real part) and b (imaginary part).
// The add method is a member function of the Complex class, and it takes a Complex other parameter, which is another object of 
// the same class.
// Inside the add method, you can see that it accesses the private data members a and b of both the current object (this) and 
// the other object, which demonstrates that member functions of the same class can indeed access the private data members of other 
// objects of the same class.