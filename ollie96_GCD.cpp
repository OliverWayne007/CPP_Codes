#include<iostream>
using namespace std;
// IMPLEMENTING GCD !!!
int gcd(int x , int y)
{
    if(y==0)
    {
        return x;
    }
    int rem = x%y;
    gcd(y,rem);
}
int main()
{
    int a,b;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    if(a>b)
    {
        cout<<"The gcd of "<<a<<" and "<<b<<" is: "<<gcd(a,b)<<endl;
    }
    else
    {
        cout<<"The gcd of "<<a<<" and "<<b<<" is: "<<gcd(b,a)<<endl;
    }
    return 0;
}