#include<iostream>
using namespace std;
// THIS IS MY VERY OWN SELECTION-SORT PROCEDURE.
int main()
{
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements: "<<endl;
    for(int i = 0 ; i<n ; i++)
    {
        cin>>arr[i];
    }

 for(int i = 0 ; i<n-1 ; i++)
 {
     int min = arr[i];
     int minindex = i;
     for(int j = i+1 ; j<n ; j++)
     {
         if(min>arr[j])
         {
            min = arr[j];
            minindex = j;
         }
         
     }

     if(min!=arr[i])
     {
         int temp = arr[i];
         arr[i] = arr[minindex];
         arr[minindex] = temp;
     }
 }

  for(int i = 0 ; i<n ; i++)
  {
      cout<<arr[i]<<" ";
  }

    
    return 0;
}