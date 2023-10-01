#include<iostream>
using namespace std;
// FUNCTION TO ADD TWO FUNCTIONS OF A CLASS.
class Complex
{
    private:
    int a , b;
    public:
    void setdata(int x , int y)
    {
       a = x;
       b = y;
    }
    void showdata()
    {
        cout<<"The value of a is: "<<a<<endl;
        cout<<"The value of b is: "<<b<<endl;
    }
    Complex add(Complex c)
    {
        Complex temp;
        temp.a = a + c.a;
        temp.b = b + c.b;
        return temp;
    }

};

int main()
{
    Complex c1,c2,c3;
    c1.setdata(13,19);
    c2.setdata(17,14);
    c3 = c1.add(c2);
    c1.showdata();
    c2.showdata();
    c3.showdata();
    return 0;
}