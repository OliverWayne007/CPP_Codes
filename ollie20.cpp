#include<iostream>
using namespace std;
// THIS IS CALLED FUCKING BINARY SEARCH OF ARRAYS.-----------> ITERATIVE APPROACH
int binarysearch(int n , int arr[] , int key)
{
    int s = 0;
    int e = n;
    while(s<=e)
    {
        int mid = (s+e)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            e = mid-1;
        }
        else if(arr[mid]<key)
        {
            s = mid+1;
        }
    }

    return -1;
}


int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i = 0 ; i<n ; ++i)
    {
        cin>>arr[i];
    }

    int key;
    cin>>key;
    cout<<binarysearch(n,arr,key)<<endl;
    return 0;
}