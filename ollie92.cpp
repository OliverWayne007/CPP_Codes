#include<iostream>
using namespace std;
// WRITE A PROGRAM TO PRINT FIRST 5 NATURAL NUMBERS USING MULTIPLE FUNCTIONS !!!
void print1(int n)
{
   cout<<n<<endl;
   void print2(int);  // NOTE: In c++ it is mandatory to first declare the function that you are calling,inside the function which is
   print2(2);         // calling it,otherwise the program will throw an error stating that the called function was not declared
}                     //  in the calling function's scope. 
void print2(int n)
{
    cout<<n<<endl;
    void print3(int);
    print3(3);
}
void print3(int n)
{
    cout<<n<<endl;
    void print4(int);
    print4(4);
}
void print4(int n)
{
    cout<<n<<endl;
    void print5(int);
    print5(5);
}
void print5(int n)
{
    cout<<n<<endl;
}

int main()
{
    // int n;
    // cout<<"Enter the value of n: ";
    // cin>>n;
    print1(1);
    return 0;
}