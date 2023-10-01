#include<iostream>
using namespace std;
// TO FIND THE MAXIMUM LENGTH OF THE ARITHMETIC SUB-ARRAY IN A GIVEN ARRAY.
int main()
{
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i = 0 ; i<n ; i++)
    {
        cin>>arr[i];
    }

    int pcd = arr[1]-arr[0];
    int curr = 2;
    int ans = 2;

    for(int i = 2 ; i<n ; i++)
    {
        if(arr[i]-arr[i-1]==pcd)
        {
            curr++;
        }

        else if(arr[i]-arr[i-1]!=pcd)
        {
            curr = 2;
        }

        pcd = arr[i]-arr[i-1];
        ans = max(ans , curr);
    }

    cout<<"The maximum length of the arithmetic sub-array is: "<<ans<<endl;
    return 0;
}