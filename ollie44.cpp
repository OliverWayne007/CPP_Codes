#include<iostream>
using namespace std;
// INSERTION IN AN ARRAY.
int main()
{
    int arr[10] = {1,2,3,4,5,6};
    int curr = 6;
    int index;
    cout<<"Enter the value of position: ";
    cin>>index;
    if(index>=9||index<0)
    {
        cout<<"THE POSITION DOES NOT EXIST IN THE GIVEN ARRAY !!!"<<endl;
    }
    if(0<=index<curr)
    {
       for(int i = curr-1 ; i>=index ; i--)
       {
           arr[i+1] = arr[i];
       }
       cout<<"Enter the new number: ";
       cin>>arr[index];
       curr+=1;
       for(int j = 0 ; j<curr ; j++)
       {
           cout<<j<<" "<<arr[j]<<endl;
       }
    }
    return 0;

}