#include<iostream>
using namespace std;
// THIS IS CALLED FUCKING LINEAR SEARCH OF ARRAYS.
int linearsearch(int n , int key , int arr[])
{
    for(int i = 0 ; i<n ; ++i)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }

        return -1;
    
}

int main()
{
    int n;   // n IS THE SIZE OF THE ARRAY.
    int key;
    cout<<"Enter the value of n: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i = 0 ; i<n ; ++i)
    {
        cin>>arr[i];
    }
    
    cin>>key;
    cout<<linearsearch(n,key,arr)<<endl;
    return 0;
}