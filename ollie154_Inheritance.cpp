#include<bits/stdc++.h>
using namespace std;

// Availability vs Accessibility and Visibility modes ----- Saurabh Shukla

class A
{
    private:
    int a;
};

class B : public A
{
    public:
    void setData(int x)
    {
        a = x;
    }
};

int main()
{
    B obj;
    // obj.setData(10);  // error: ‘int A::a’ is private within this context
    return 0;
}

// NOTE: Here, the setData() function of derived class B cannot directly access the privare member 'a' of the base class.
// In this case, the private member 'a' of the base class A is "Available" to the derived class B but is not "Accessible" from the 
// setData() function of the derived class B because setData() function is not a member function of the Base class A and the private
// members of a class can only be accessed directly by the member functions of that particular class. 