#include<bits/stdc++.h>
using namespace std;

// Availability vs Accssibility and Visibility modes ------ Saurabh Shukla

class A
{
    private:

    int a;

    public:

    void setValue(int k)
    {
        a = k;
    }
    
    void getData()
    {
        cout << "The value of a is: " << a << endl;
    }
};

class B : public A
{};

int main()
{
    B obj;
    obj.setValue(10);
    obj.getData();
    return 0;
}