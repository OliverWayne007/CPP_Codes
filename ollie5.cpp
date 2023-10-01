#include<iostream>
using namespace std;

void print(int num)
{
    cout<<num;
}

int add(int num1 , int num2)
{
    print(num1);
    cout<<endl;
    print(num2);
    cout<<endl;
    int sum = num1 + num2;
    return sum;
}

int main()
{
    int a,b;
    cout<<"Enter the value of a: "<<endl;
    cin>>a;
    cout<<"Enter the value of b: "<<endl;
    cin>>b;
    cout<<endl;
    cout<<"The sum of "<<a<<" and "<<b<<" is: "<<add(a,b);
   // cout<<add(a,b);
    return 0;
}