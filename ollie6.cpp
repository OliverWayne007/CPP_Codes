#include<iostream>
using namespace std;
// PROGRAM TO CHECK IF A GIVEN NUMBER IS PRIME OR NOT.
int main()
{
   int a;
   bool shit = true;
   cout<<"Enter the value of a: ";
   cin>>a;
   // WE WANT TO CHECK IF THE GIVEN NUMBER IS A PRIME OR NOT.
   if(a<0)
   {
       cout<<"NEGATIVE NUMBERS ARE NEVER PRIME !!!"<<endl;
   }

   if(a==0)
   {
       cout<<"ZERO IS NOT A PRIME NUMBER !!!"<<endl;
   }

   if(a>=2)
   {
       for(int i = 2 ; i<a ; ++i)
   {
      int rem = a%i;
      if(rem==0)
      {
          shit = false;
          cout<<"The number "<<a<<" is not prime."<<endl;
          break;
      }  
   }

   if(shit==true)
   {
       cout<<"The number "<<a<<" is prime."<<endl;
   }

   }

   return 0;
}