#include<bits/stdc++.h>
using namespace std;

// Availability vs Accssibility and Visibility modes ------ Saurabh Shukla

class A
{
    private:

    int a;

    protected:

    void setValue(int k)
    {
        a = k;
    }

    public:
    
    void getData()
    {
        cout << "The value of a is: " << a << endl;
    }
};

class B : public A
{
    public:

    void setData(int x)
    {
        setValue(x);
    }
};

int main()
{
    B obj;
    obj.setData(10);
    obj.getData();
    return 0;
}