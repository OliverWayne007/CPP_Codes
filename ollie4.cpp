#include<iostream>
using namespace std;
int main()
{
   //int arr[5];
  // arr[5] = { 1 , 2 , 3 , 4 , 5 }; --------THIS GIVES AN ERROR.
   int arr[] = { 1 , 2 , 3 , 4 , 5 };
   cout<<"The 1st element of the array is: "<<arr[0]<<endl;
   cout<<"The 2nd element of the array is: "<<arr[1]<<endl;
   cout<<"The 3rd element of the array is: "<<arr[2]<<endl;
   cout<<"The 4th element of the array is: "<<arr[3]<<endl;
   cout<<"The 5th element of the array is: "<<arr[4]<<endl;
   return 0;
}