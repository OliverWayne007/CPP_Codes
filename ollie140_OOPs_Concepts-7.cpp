#include<bits/stdc++.h>
using namespace std;

// Operator Overloading

class Complex
{
    private:

    int a , b;

    public:

    void setvalue(int x , int y)
    {
        a = x;
        b = y;
    }

    void showdata()
    {
        cout << "a: " << a << endl;
        cout << "b: " << b << endl;
    }

    // Complex add(Complex c)
    // {
    //     Complex temp;
    //     temp.a = a + c.a;
    //     temp.b = b + c.b;
    //     return temp;
    // }

    Complex operator + (Complex c)
    {
        Complex temp;
        temp.a = a + c.a;  // Doubt: How are we able to access the private variables a , b of temp object directly using dot 
        temp.b = b + c.b;  // operator. Also, we are accessing the private variables of the object c directly using dot operator.
        return temp;
    }
};

int main()
{
    Complex c1 , c2 , c3;
    c1.setvalue(10 , 20);
    c2.setvalue(30 , 40);
    // c3 = c1.add(c2);
    // c3 = c1.operator+(c2);
    c3 = c1 + c2;
    c3.showdata();
    return 0;
}