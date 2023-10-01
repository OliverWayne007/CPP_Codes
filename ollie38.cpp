#include<iostream>
using namespace std;
// TO ROTATE AN ARRAY IN CLOCK-WISE DIRECTION. 
int main()
{
    int t;
    cin>>t;
    int n,d;
    cin>>n>>d;
    int arr[n];
    for(int i = 0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    
    int b,c;
    cin>>b>>c;
    int ass[b];
    for(int i = 0 ; i<b ; i++)
    {
        cin>>ass[i];
    }
    
    cout<<endl;
    
    for(int i = 0 ; i<d ; i++)
    {
        int temp = arr[0];
        for(int j = 0 ; j<n-1 ; j++)
        {
            arr[j] = arr[j+1];
        }
        
        arr[n-1] = temp;
    }
    
    for(int i = 0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    cout<<endl;
    
    for(int i = 0 ; i<c ; i++)
    {
        int temp = ass[0];
        for(int j = 0 ; j<b-1 ; j++)
        {
            ass[j] = ass[j+1];
        }
        
        ass[b-1] = temp;
    }
    
    for(int i = 0 ; i<b ; i++)
    {
        cout<<ass[i]<<" ";
    }
    
    
    return 0;
}