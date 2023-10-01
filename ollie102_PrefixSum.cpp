#include<iostream>
using namespace std;
// THE PREFIXSUM ARRAY !!!
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
    int sum = 0;
    int prefixsum[n];
    for(int i = 0 ; i<n ; i++)
    {
        prefixsum[i] = arr[i]+sum;
        sum = sum+arr[i];
    }
    cout<<"The elemnts of prefixsum are: "<<endl;
    for(int i = 0 ; i<n ; i++)
    {
        cout<<prefixsum[i]<<" ";
    }
    cout<<endl;
    return 0;
}