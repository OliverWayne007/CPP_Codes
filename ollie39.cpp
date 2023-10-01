#include<iostream>
using namespace std;
// TO PRINT ALL THE NUMBERS FROM 1 TO THE GIVEN NUMBER n IN ASCENDING ORDER.
void asc(int i , int n)
{
   if(i<=n)
   { 
   cout<<i<<" ";
   asc(i+1 , n);
   }

}

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    asc(1 , n);
    return 0;
}