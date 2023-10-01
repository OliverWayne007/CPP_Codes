#include<bits/stdc++.h>
using namespace std;

class B;

class A
{
    private:

    int a = 10;

    public:

    friend void fun(A , B);
};

class B
{
    private:

    int b = 20;

    public:

    friend void fun(A , B);
};

void fun(A obj1 , B obj2)
{
    cout << "Sum: " << obj1.a + obj2.b << endl;
}

int main()
{
    A obj1;
    B obj2;
    fun(obj1 , obj2);
    return 0;
}