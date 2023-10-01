#include<iostream>
using namespace std;
int main()
{
   int a = 10;
   int *p = &a;
   cout<<"The address stored in pointer-variable p is: "<<p<<endl;
   cout<<"The value at the address stored in pointer-variable p is: "<<*p<<endl;
   cout<<"The size of the integer stored at the address stored in p is: "<<sizeof(a)<<" bytes "<<endl;
   *p = 16;
   cout<<"The value at the address stored in pointer-variable p is: "<<*p<<endl;
   cout<<p+1<<endl;
   cout<<*(p+1)<<endl;
   return 0;
}