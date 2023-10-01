#include<iostream>
using namespace std;
// THIS IS CALLED FUCKING BUBBLE SORTING.
int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the array elements: "<<endl;

    for(int i = 0 ; i<n ; ++i)
    {
        cin>>arr[i];
    }

    for(int k = n-1 ; k>0 ; k--)
    {
        int i = 0;
        int j = 1;

    while(i<k && j<k+1)
    {
        if(arr[i]>arr[j])
        {
            int temp;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }

        ++i;
        ++j;
    }    

    }

    cout<<"The sorted elements of the array are: "<<endl;

    for(int i = 0 ; i<n ; ++i)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}