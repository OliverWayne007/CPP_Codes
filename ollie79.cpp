#include<iostream>
using namespace std;
// PROGRAM TO PUSH ALL THE NEGATIVE INTEGERS TO THE LEFT AND ALL THE POSITIVE ELEMENTS TO THE RIGHT !!!
int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    // int arr[7] = {-12 , 11 , -13 , -5 , 6 , -7 , 5};
    int arr[n];
    cout<<"Input: "<<endl;
    for(int i = 0 ; i<n ; i++)
    {
        cin>>arr[i];
    }

    for(int i = 0 ; i<n-1 ; i++)
    {
        if(arr[i]>0 && arr[i+1]<0)
        {
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }

    for(int i = n-1 ; i>0 ; i--)
    {
        if(arr[i]<0 && arr[i-1]>0)
        {
            int pent = arr[i];
            arr[i] = arr[i-1];
            arr[i-1] = pent;
        }
    }

    cout<<"Output: "<<endl;

    for(int i = 0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    return 0;
}
