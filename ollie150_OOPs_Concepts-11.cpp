#include<bits/stdc++.h>

using namespace std;

// NOTE: A friend function can be a friend to more than one class.

// Using a friend function to access the private data of two different classes

class Demo2;

class Demo1
{
    private:

    int a , b;

    public:

    Demo1()
    {
        cout << "Iam a default constructor of class Demo1 !!!" << endl;
    }

    Demo1(int x , int y)
    {
        cout << "I am a parameterized constructor of class Demo1 !!!" << endl;
        this -> a = x;
        this -> b = y;
    }

    friend void fun(Demo1 , Demo2);

};

class Demo2
{
    private:

    int a , b;

    public:

    Demo2()
    {
        cout << "I am a default constructor of class Demo2 !!!" << endl;
    }

    Demo2(int x , int y)
    {
        cout << "I am a parameterized constructor of class Demo2 !!!" << endl;
        this -> a = x;
        this -> b = y;
    }

    friend void fun(Demo1 , Demo2);

};

void fun(Demo1 d1 , Demo2 d2)
{
    cout << "The sum of d1.a and d2.a is: " << d1.a + d2.a << endl;
    cout << "The sum of d1.b and d2.b is: " << d1.b + d2.b << endl;
}

int main()
{
    cout << endl;

    Demo1 d1(1 , 2);

    cout << endl;

    Demo2 d2(3 , 4);

    cout << endl;

    fun(d1 , d2);

    cout << endl;

    return 0;
}