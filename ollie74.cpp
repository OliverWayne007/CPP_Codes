#include<iostream>
#include<string>
using namespace std;
// TEMPLATES IN C++ !!!
template< class T1 , class T2 >
class MyClass
{
    private:

    T1 a;
    T2 b;

    public:

    MyClass( T1 x , T2 y)
    {
       a = x;
       b = y;
    }

    void displaydata()
    {
        cout<<"The value of a is: "<<a<<endl;
        cout<<"The value of b is: "<<b<<endl;
    }

    void sum()
    {
        cout<<"The sum of a and b is: "<<a+b<<endl;
    }

};

int main()
{
    MyClass<string,string>MyObj1("Oliver" , "Queen");
    MyObj1.displaydata();
    MyObj1.sum();
    return 0;
}