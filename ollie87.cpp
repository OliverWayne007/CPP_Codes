#include<iostream>
using namespace std;

class A
{
    public:
    void setValue()
    {
        cout<<"SetValue from class A"<<endl;
    }
};

class B : public A
{
    public:
    void setValue()
    {
        cout<<"SetValue from class B"<<endl;
    }
};

int main()
{
    A obj1;
    B obj2;
    A* ptr;
    ptr = &obj2;
    obj1.setValue();
    obj2.setValue();
    ptr->setValue();
    return 0;
}