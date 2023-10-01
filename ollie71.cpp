#include<iostream>
using namespace std;
// THE BASIC CONCEPT OF REFERENCE THAT I FORGOT !!!

void swap(int& first , int& second)
{
    int temp = first;
    first = second;
    second = temp;
}

int main()
{
   int a = 10;
   int& ref = a;
   cout<<"The value of a is: "<<a<<endl;
   cout<<"The value of ref is: "<<ref<<endl;
   ref = 12;
   cout<<"The value of a is: "<<a<<endl;
   cout<<"The value of ref is: "<<ref<<endl;

   /*     
        ****************************************  NOTE: *************************************************************
        WHEN A VARIABLE IS DECLARED AS A REFERENCE , IT BECOMES AN ALTERNATIVE NAME FOR AN EXISTING VARIABLE.
        IT IS NOT THE SAME AS POINTERS. A VARIABLE CAN BE DECLARED AS A REFERENCE BY PUTTING '&' IN THE DECLARATION.

   */

  int b = 13;
  int c = 17;
  cout<<"The value of b is: "<<b<<endl;
  cout<<"The value of c is: "<<c<<endl;
  swap(b , c);
  cout<<"After swapping !!!"<<endl;
  cout<<"The value of b is: "<<b<<endl;
  cout<<"The value of c is: "<<c<<endl;

  /*

                    DIFFERENCES BETWEEN POINTERS AND REFERENCES:

  1. A pointer can be declared as void but a reference can never be void For example

    int a = 10;
    void* aa = &a;. //it is valid
    void &ar = a; // it is not valid

  2. The pointer variable has n-levels/multiple levels of indirection i.e. single-pointer, double-pointer, triple-pointer. 
   Whereas, the reference variable has only one/single level of indirection.

                    References are less powerful than pointers: 

  1) Once a reference is created, it cannot be later made to reference another object; it cannot be reset. 
     This is often done with pointers.

  2) References cannot be NULL. Pointers are often made NULL to indicate that they are not pointing to any valid thing. 

  3) A reference must be initialized when declared. There is no such restriction with pointers.
     Due to the above limitations, references in C++ cannot be used for implementing data structures like Linked List, Tree, etc.

*/

   return 0;
}