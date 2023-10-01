#include<iostream>
using namespace std;
int main()
{
    int x = 1025;
    int *p = &x;
    cout<<sizeof(x)<<endl;
    cout<<&x<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
    char *q = (char*)p;
    //q = (char*)p;
    cout<<q<<endl;
    cout<<*q<<endl;
    return 0;
}