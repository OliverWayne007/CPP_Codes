
#include <iostream>

using namespace std;

 int maxIndexDiff(int arr[], int n) 
    { 
        
        int maxDiff = 0;
        for(int i = 0 ; i<=n-2 ; ++i)
        {
            
          for(int j = i+1 ; j<=n-1 ; ++j)
          {
             if (arr[j] > arr[i] && maxDiff < (j - i))
               { 
                   maxDiff = j - i;
               }
            
           
          }
        }
        
        return maxDiff;
        
    }

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the value of the array elements: "<<endl;
    for(int i = 0 ; i<n ; ++i)
    {
        cin>>arr[i];
    }
    
   cout<<maxIndexDiff(arr,n);
    

    return 0;
}