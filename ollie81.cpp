
#include <iostream>
using namespace std;
// PROGRAM FOR SORTING AN ARRAY !!!
int main()
{
    int n ;
    cout<<"Enter the value of n:";
    cin>>n;
    int m = n;
    cout<<endl;
    int arr[n];
    for(int i = 0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    cout<<"The elements of the array are:"<<endl;
    for(int i = 0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;
    
    while(m>2)
    {
        for(int i = 0 ; i<m-1 ; i++)
        {
            if(arr[i]>arr[i+1])
            {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
            
        }
        
        m--;
    }
    
    cout<<"The elements of the sorted array are: "<<endl;
    
    for(int i = 0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}