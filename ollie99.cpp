#include<iostream>
using namespace std;
// PRINTING ALL THE POSSIBLE SUBARRAYS OF A GIVEN ARRAY !!!
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
    cout<<"The subarrays of the array are: "<<endl;
    for(int i = 0 ; i<n ; i++)
    {
        for(int j = i ; j<n ; j++)
        {
            for(int k = i ; k<=j ; k++)
            {
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}