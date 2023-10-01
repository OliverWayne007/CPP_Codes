#include<iostream>
using namespace std;
// PROGRAM TO PRINT ALL THE PRIME NUMBERS BETWEEN TO GIVEN NUMBERS.
int main()
{
   int a,b;
   cout<<"Enter the value of a: ";
   cin>>a;
   cout<<"Enter the value of b: ";
   cin>>b;
   for(int i = a+1 ; i<b ; i++)
   {
       bool shit = true;
       for(int j = 2 ; j<i ; j++)
       {
           int rem = i%j;
           
           if (rem==0)
           {
             shit = false;
              break;
            
           }

       }

           if(shit==true)
           {  
               cout<<i<<endl;
               
           }
           
     }
  
    return 0;

}
