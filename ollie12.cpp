#include<iostream>
using namespace std;
// THIS IS BASICALLY DYNAMIC MEMORY ALLOCATION.
int main()
{
    int size;
    cout<<"Enter the value of the number of elements in the array (size): ";
    cin>>size;
    int arr[size];
    cout<<"Enter the values to be stored in the array: "<<endl;
    for(int i = 0 ; i<size ; i++)
    {
       cin>>arr[i];
    }
    cout<<"The values stored in the array are: "<<endl;
    for(int j = 0 ; j<size ; j++)
    {
        cout<<arr[j]<<endl;
    }
    return 0;
}