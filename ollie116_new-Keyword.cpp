#include<iostream>
using namespace std;
// GETTING USED TO THE new KEYWORD !!!
class Myclass
{
    private:
    int a , b;

    public:
    void setData(int x , int y)
    {
        a = x;
        b = y;
    }
    void getData()
    {
        cout<<"The value of a is: "<<a<<endl;
        cout<<"The value of b is: "<<b<<endl;
    }
};

int main()
{
    Myclass* ptr1 = new Myclass();   // INITIALIZES WITH ZERO
    // ptr->setData(10,20);
    ptr1->getData();

    Myclass* ptr2 = new Myclass;    // INITIALIZES WITH GARBAGE VALUE
    // ptr->setData(10,20);
    ptr2->getData();

    int* ptr = new int;   // INITIALIZES WITH GARBAGE VALUE
    cout<<*(ptr)<<endl;

    int* tpr = new int();   // INITIALIZES WITH ZERO
    cout<<*(tpr)<<endl;

    int* prt = new int(0);   // INITIALIZES WITH ZERO BECAUSE ZERO IS PASSED AS ARGUMENT
    cout<<*(prt)<<endl;

    int* trp = new int(16);   // INITIALIZES WITH 16 BECAUSE 16 IS PASSED AS ARGUMENT
    cout<<*(trp)<<endl;

    return 0;
}