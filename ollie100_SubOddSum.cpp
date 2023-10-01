#include<iostream>
using namespace std;
// CALCULATING THE NUMBER OF SUBARRAYS WITH ODD SUM.
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
    int count = 0;
    for(int i = 0 ; i<n ; i++)
    {
        int sum = 0;
        for(int j = i ; j<n ; j++)
        {
            if((arr[j] + sum)%2==1)
            {
                count++;
            }
            sum = sum+arr[j];
        }
    }
    cout<<"The number of subarrays with odd sum = "<<count<<endl;
    return 0;
}