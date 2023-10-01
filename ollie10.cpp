#include<iostream>
using namespace std;
int main()
{
   int a,c;
   a=5;
   c=15;
   int *p;
   p = &a;
   cout<<p<<endl;
   cout<<&a<<endl;
   cout<<*p<<endl;  
   // * IS CALLED VALUE-AT OPERATOR. IT PROVIDES THE VALUE AT THE ADDRESS STORED IN POINTER-VARIABLE p. 
   cout<<&p<<endl;
   // & IS CALLED THE ADDRESS-OF OPERATOR. IT PROVIDES THE ADDRESS OF THE POINTER-VARIABLE p.
   int b = 10;
   *p = c; 
   // This statement modifies the value at the address stored in the pointer-variable p.  
   // It does not change the address stored in pointer-variable p.
   cout<<&c<<endl;
   cout<<p<<endl;
   cout<<*p<<endl;
   cout<<&p<<endl;
   p = &b; // This statement modifies the address stored in the pointer-variable p.
   cout<<p<<endl;
   cout<<*p<<endl;
   cout<<&p<<endl;
   return 0;
}