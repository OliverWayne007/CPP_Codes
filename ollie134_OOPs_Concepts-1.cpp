#include<bits/stdc++.h>
using namespace std;

class Base
{
    private:

    int a = 0 , b = 0;

    public:

    void Func()
    {
        cout << "Iam instance function Func of the Base class !!!" << endl;
    }

    virtual void Func1()
    {
        cout << "Iam instance function Func1 of the Base class !!!" << endl;
    }

    void set_data(int x , int y)
    {
        this -> a = x;
        this -> b = y;
    }

    void get_data();
    friend int get_max(Base);
    friend void Casual_Func();
};

void Base :: get_data()
{
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
}

int get_max(Base obj)
{
    if(obj.a >= obj.b)
    {
        return obj.a;
    }
    return obj.b;
}

void Casual_Func()
{
    cout << "Iam just a casual friend function !!!" << endl;
}

class Derived : public Base
{
    public:
    void Func()
    {
        cout << "Iam instance function Func of the derived class !!!" << endl;
    }
    void Func1()
    {
        cout << "Iam instance function Func1 of the derived class !!!" << endl;
    }
};

int main()
{
    // Base* ptr;
    // Derived obj;
    // ptr = &obj;
    // ptr -> Func();
    // ptr -> Func1();

    Base obj;
    Casual_Func();
    obj.set_data(10 , 20);
    obj.get_data();

    int mx = get_max(obj);

    cout << "The maximum element is: " << mx << endl;

    return 0;
}