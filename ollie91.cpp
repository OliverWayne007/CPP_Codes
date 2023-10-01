#include<iostream>
using namespace std;
// Binary Search using while loop !!! ...... Iterative Method.
int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i = 0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the value of the key: ";
    cin>>key;
    int low=0 , high=n-1;
    int mid;
    bool check = false;
    while(high>=low)
    {
        //check = false;
        mid = (low+high)/2;
        if(arr[mid]==key)
        {
            check = true;
            break;
        }
        else if(arr[mid]>key)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }

    if(check==false)
    {
        cout<<"No such element exists in the array !!!"<<endl;
    }
    else
    {
       cout<<"The required index is: "<<mid<<endl; 
    }

    return 0;
}