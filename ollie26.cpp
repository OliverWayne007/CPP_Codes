#include<iostream>
using namespace std;
// TO FIND THE NUMBER OF RECORD-BREAKING DAYS.
int main()
{
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i = 0 ; i<n ; ++i)
    {
        cin>>arr[i];
    }

    int count = 0;

    if(arr[0]>arr[1])
    {
        cout<<"0"<<" "<<arr[0]<<endl;
        count = count+1;
    }
    
    bool bitch;
   
    for(int i = 1 ; i<=(n-2) ; i++)
    {
        bool shit;

        for(int j = 0 ; j<i ; ++j)
        {

             if(arr[i]>arr[j] && arr[i]>arr[i+1])
              {
                 shit =true;
              }

              else
              {
                 shit = false;
                 break;
              }

        }

        if(shit==true)
        {
            cout<<i<<" "<<arr[i]<<endl;
            count = count+1;
        }

        if (arr[n-1]>arr[i] && arr[n-1]>arr[0])
                {
                     bitch = true;
                }

        else
         {
             bitch = false;
             //break; ------------------ HOLY CRAP THAT WAS A DAMN HARD MISTAKE TO FIND !!!!!
         }
    }

    if(bitch == true)
    {
        cout<<n-1<<" "<<arr[n-1]<<endl;
        count = count+1;
    }

    cout<<"The number of record-breaking days are: "<<count<<endl;

    return 0;
}