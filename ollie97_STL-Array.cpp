#include<iostream>
#include<array>
using namespace std;

//array<int,3>arr1;

int main()
{
   array<int , 3> arr1 = {0};           // array< datatype , size > array_name = {-,-,-}; ---->SYNTAX
   for(int i = 0 ; i<arr1.size() ; i++)
   {
       cout<<arr1[i]<<" ";
   } 
   cout<<endl;
   array<int , 5> arr2;
   arr2.fill(10);
   for(int i = 0 ; i<arr2.size() ; i++)
   {
       cout<<arr2[i]<<" ";
   }
   cout<<endl;
   cout<<arr2.at(4)<<endl;
   for(int i = 0 ; i<arr2.size() ; i++)
   {
       cout<<arr2.at(i)<<" ";
   }
   cout<<endl;
   array<int , 5> arr3 = {1,2,3,4,5};
   cout<<arr3.size()<<endl;
   for(auto it = arr3.begin() ; it != arr3.end() ; it++)
   {
       cout<<(*it)<<" ";
   }
   cout<<endl;
   for(auto it = arr3.rbegin() ; it != arr3.rend() ; it++)
   {
       cout<<(*it)<<" ";
   }
   cout<<endl;
   cout<<arr3.size()<<endl;
   cout<<arr3.front()<<endl;
   cout<<arr3.back()<<endl;
   for(auto it:arr3)
   {
       cout<<it<<" ";
   }
   cout<<endl;
//    array<int , 3>shit = {10,20,30};
//    array<int , 3>poop(shit.begin() , shit.end());
//    for(auto it:poop)
//    {
//        cout<<it<<" ";
//    }
//    cout<<endl;
    return 0;
}